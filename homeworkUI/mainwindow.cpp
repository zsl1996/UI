#include "mainwindow.h"
#include "ui_dati.h"
#include<iostream>
#include"tableitem.h"
#include"dll.h"
#include<vector>
#include <QMessageBox>

int num_max=1000;//操作数的最大值，默认1000，有效范围1 ~ INT_MAX
int num_limit=20;// 操作数最大个数，默认20，有效范围1 ~ INT_MAX
int exp_num=5;//表达式个数，默认5，有效范围1 ~ INT_MAX
int type_u=1; //操作数类型，有效范围0 double, 1 int, 2 fraction，默认double
int precision=2;// 小数精度，默认2，有效范围1 ~ INT_MAX
bool b_add=true;
bool b_sub=true;
bool b_div=false;
bool b_pow=false;
bool  b_mul =false;
float sumscore=0; //当前总分
float tempscore; //当前题得分
int lcd_time= 20; //计时器间隔
int nownum=0;//现在正在答的题下标
vector<tableitem> table;
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->wdati->close();
    ui->wsheding->close();
    ui->wjilu->close();
    pTimer->setInterval(1000);
    connect(pTimer, SIGNAL(timeout()), this, SLOT(onTimeOut()));

}

void MainWindow::RefreshUI(){ //刷新答题界面平均成绩，题目，答案,要在pushvector后面
    lcd_time=20;
    int ave=sumscore/(nownum+1);
    ui->avescore->setText(to_string(ave).c_str()); //更新平均成绩

    if((nownum+1)< exp_num){
        nownum++;
        string s_timu;
        string s_daan;
        if(get_exp( nownum, s_timu, s_daan)){
            ui->timu->setText( s_timu.c_str()); //设定新题目
            ui->daan->setText("");
            }
    }
    else{
           pTimer->stop();
           nownum=0;
           sumscore=0;
           QMessageBox::warning(this, tr("答题结束"),
                                         tr("本轮答题已经结束\n"
                                            "你可以到答题记录以及成绩分享查看本次答题相关统计信息")
                                          );

    }

}

void MainWindow::pushvector(){ //将此次答题信息保存
//更新总分
   string s_timu;
   string s_daan;
   get_exp(nownum,s_timu,s_daan);
    string s_txt = ui->daan->text().toStdString();
   if(strcmp(s_daan.c_str(),s_txt.c_str())==0){
      tempscore= lcd_time/20.0*100;//以剩余时间比上20s作为得分
    }
      else{
       tempscore=0;
    }
       sumscore+= tempscore;
    tableitem item;
    item.shijian=to_string(20-lcd_time);
    item.wdaan = s_txt;
    item.t=s_timu;
    item.zdaan=s_daan;
    item.chengji=tempscore;
    table.push_back(item);
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
    ui->wsheding->show();

}

void MainWindow::on_pushButton_5_clicked() //进入答题记录界面
{
      ui->wdati->close();
      ui->wsheding->close ();
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
}

void MainWindow::on_pushButton_clicked() //开始答题按钮
{
        pTimer->start();
        string s;
        string result;
        generate();
        int nownum=0 ;
        if(get_exp( nownum, s, result)){
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
{      pushvector();
       RefreshUI();
}

void MainWindow::on_pushButton_2_clicked() //放弃此题
{
    pushvector();
    lcd_time=2;
}
