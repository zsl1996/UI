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
float sumscore=0;
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
void MainWindow::onTimeOut() //计时器槽，1s一次
{   lcd_time--;
    if(lcd_time==0){
        lcd_time=20;
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
      ui->tableWidget->setRowCount(100);
      ui->tableWidget->setItem(1, 0, new QTableWidgetItem("hdkljah"));
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

    set_precision( 2);
    set_opr(true,  true,  false,  false, false);
    set( 1000, 20,  5,  1 ,  2 );
}

void MainWindow::on_pushButton_3_clicked() //确认此题答案
{
    tableitem item;
    item.shijian=to_string(lcd_time);
    string s_txt = ui->daan->text().toStdString();
    item.wdaan=s_txt;
    string s_timu;
    string s_daan;
    get_exp(nownum ,item.t, item.zdaan);
    if(strcmp(item.zdaan.c_str(),s_txt.c_str())==0){
       item.chengji= lcd_time/20.0*100;//以剩余事时间比上20s作为得分
    }
    else{
        item.chengji=0;
    }
    sumscore+=item.chengji;
    int ave=sumscore/(nownum+1);
    ui->avescore->setText(to_string(ave).c_str());
    table.push_back(item);
}
