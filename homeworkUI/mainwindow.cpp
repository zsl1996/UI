#include "mainwindow.h"
#include "ui_dati.h"
#include<iostream>
#include"tableitem.h"
#include"myapi.hpp" //转换各组接口
#include<vector>
#include <QMessageBox>
#include"review.h"
int cor_num = 0;
float sumtime = 0;
float sumsc = 0;
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	ui->wdati->close();
	ui->wsheding->close();
	ui->wjilu->close();
	ui->widget->close();
	pTimer->setInterval(1000);
	connect(pTimer, SIGNAL(timeout()), this, SLOT(onTimeOut()));

}

int MainWindow::RefreshUI() { //刷新答题界面平均成绩，题目，答案,要在pushvector后面
	lcd_time = 20;
	int ave = sumscore / (nownum + 1);
	ui->avescore->setText(to_string(ave).c_str()); //更新平均成绩

	if (review_flag == 0) { //新题目模式
		if ((nownum + 1) < exp_num) {
			nownum++;
			string s_timu;
			string s_daan;
			if (my_get_exp(nownum, s_timu, s_daan)) {
				ui->timu->setText(s_timu.c_str()); //设定新题目
				ui->daan->setText("");
			}
		}
		else {
			pTimer->stop();
			nownum = 0;
			sumscore = 0;
			QMessageBox::warning(this, tr("答题结束"),
				tr("本轮答题已经结束\n"
					"你可以到答题记录以及成绩分享查看本次答题相关统计信息")
			);
		}


	}
	else {

			nownum++;
			string s_timu;
			string s_daan;
			if (exp_num == 0) {
				QMessageBox::warning(this, tr("复习结束"),
					tr("复习已经结束\n""你可以去答题记录查看复习成果"
					)

				);
				return 0;
			}
			if (my_get_exp(nownum%exp_num, s_timu, s_daan)) {
				ui->timu->setText(s_timu.c_str()); //设定新题目
				ui->daan->setText("");
			}
		}


	return 0;
    }



void MainWindow::pushvector() { //将此次答题信息保存
//更新总分
string s_timu;

	string s_daan;
	my_get_exp(nownum, s_timu, s_daan);
	string s_txt = ui->daan->text().toStdString();
	if (strcmp(s_daan.c_str(), s_txt.c_str()) == 0) {
		tempscore = lcd_time / 20.0 * 100;//以剩余时间比上20s作为得分
	}
	else {
		tempscore = 0;
	}
	sumscore += tempscore;
	sumsc += tempscore;

	tableitem item;
	item.shijian = to_string(20 - lcd_time);
	item.wdaan = s_txt;
	item.t = s_timu;
	item.zdaan = s_daan;
	item.chengji = tempscore;
	table.push_back(item);
	if (int(tempscore) == 0&&review_flag==0) { //非复习模式,此题需要复习
		review r;
		r.daan = s_daan;
		r.timu = s_timu;
		reviewtable.push_back(r);

	}
	else {
		cor_num++;
		sumtime += (20 - lcd_time);
	}
	if(int(tempscore)!= 0 && review_flag == 1&&exp_num!=0){
		reviewtable.erase(reviewtable.begin() + nownum%exp_num);
		exp_num = reviewtable.size();
	}
}
void MainWindow::onTimeOut() //计时器槽，1s一次
{
    lcd_time--;
    if(lcd_time==0){
        pushvector();
        RefreshUI();
     }
   ui->lcdNumber->display(to_string (lcd_time).c_str());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_7_clicked() //进入答题界面
{
    ui->wjilu->close();
    ui->wsheding->close();
	ui->widget->close();
    ui->wdati->show();
    lcd_time=20;
    pTimer->stop();
    ui->lcdNumber->display(to_string (lcd_time).c_str());
    ui->avescore->setText("0");
}

void MainWindow::on_pushButton_6_clicked() //进入设定界面
{
    ui->wjilu->close();
    ui->wdati->close();
	ui->widget->close();
    ui->wsheding->show();
	pTimer->stop();

}

void MainWindow::on_pushButton_5_clicked() //进入答题记录界面
{
      ui->wdati->close();
      ui->wsheding->close ();
	  ui->widget->close();
      ui->wjilu->show();
      int size = table.size();
      ui->tableWidget->setRowCount(size);
      int i= 0;
      for(vector<tableitem>::const_iterator it=table.begin();it!=table.end();it++)
      {
       string s =to_string(it->chengji);
       ui->tableWidget->setItem(i, 0, new QTableWidgetItem(it->t.c_str()));
       ui->tableWidget->setItem(i, 1, new QTableWidgetItem(s.c_str()));
       ui->tableWidget->setItem(i, 2, new QTableWidgetItem(it->zdaan.c_str()));
       ui->tableWidget->setItem(i, 3, new QTableWidgetItem(it->wdaan.c_str()));
       ui->tableWidget->setItem(i, 4, new QTableWidgetItem(it->shijian.c_str()));
	   i++;
      }
	  pTimer->stop();
}

void MainWindow::on_pushButton_clicked() //开始答题按钮
{
        pTimer->start();
        string s;
        string result;
        generate();
        int nownum=0 ;
		if (ui->radio_review->isChecked() == true) 
		{ review_flag = 1; }
		else  review_flag = 0;
        if(my_get_exp( nownum, s, result)){
            ui->timu->setText(s.c_str());
        }


}

void MainWindow::on_pushButton_12_clicked() //恢复默认设置
{
    lcd_time=20;
    nownum=0;//现在正在答的题下标
    set_precision( 2);
    set_opr(true,  true,  false,  false, false);
    set( 1000, 20,  5,  1 ,  2 );
}

void MainWindow::on_pushButton_3_clicked() //确认此题答案
{
	pTimer->start();
	if (ui->radio_review->isChecked() == true)
	{
		review_flag = 1;
	}
	else  review_flag = 0;
	pushvector();
       RefreshUI();
}

void MainWindow::on_pushButton_2_clicked() //放弃此题
{
    pushvector();
	RefreshUI();
}

void MainWindow::keyPressEvent(QKeyEvent *event) {  //检测enter键，等同确认答题
	if (event->key() == Qt::Key_Enter|| event->key() == Qt::Key_Return) {
		on_pushButton_3_clicked();
	}
}
void MainWindow::on_pushButton_13_clicked() //保存设置
{
	num_max = ui->lineEdit_6->text().toInt();
	num_limit = ui->lineEdit_4->text().toInt();
	exp_num = ui->lineEdit_3->text().toInt();
    if (ui->radioButton->isChecked()) {
        type_u = 1;
	}
    if(ui->radioButton_6->isChecked())
	{
        type_u = 0;
	}
    if(ui->radioButton_7->isChecked())
    {
        type_u =2 ;
    }
	b_add = ui->checkBox_3->isChecked();
	b_sub = ui->checkBox_4->isChecked();
	b_mul = ui->checkBox_2->isChecked();
	b_div = ui->checkBox->isChecked();
	b_pow = ui->checkBox_5->isChecked();
	my_set_opr();
	my_set();
	QMessageBox::warning(this, tr("设置成功"),
		tr("设置已经结束\n""你可以重新设置或者转其他界面"
		)

	);
}

void MainWindow::on_pushButton_4_clicked()
{
	ui->wdati->close();
	ui->wsheding->close();
	ui->wjilu->close();
	ui->widget->show();
	int ave = 0;
	if (int(sumsc) == 0)  ave = 0;
	else
	{
		 ave = sumsc / (table.size());
	}
	ui->sum->setText(to_string(table.size()).c_str());
	ui->corsum->setText(to_string(cor_num).c_str());
	ui->avescore_2->setText(to_string(ave).c_str());
	int a=0;
	if (int(sumtime==0))  a = 0;
	else
	{
		a = sumtime / (table.size());
	}
	
	ui->avetime->setText(to_string(a).c_str());
	if (ave < 50) {
		string s("Recommend using review mode"); //不这样村存在编码问题
		ui->ana->setText(s.c_str());
	}
	else {
		string s("Suggest to raise difficulty ");
		ui->ana->setText(s.c_str());
	}
}
