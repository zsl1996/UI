#include "mainwindow.h"
#include "ui_dati.h"
#include<iostream>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->wdati->close();
    ui->wsheding->close();
    ui->wjilu->close();
    ui->timu->setText("1+1+3?");


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_7_clicked()
{
      ui->wjilu->close();
    ui->wsheding->close();
     ui->wdati->show();

}

void MainWindow::on_pushButton_6_clicked()
{
      ui->wjilu->close();
     ui->wdati->close();
    ui->wsheding->show();

}

void MainWindow::on_pushButton_5_clicked()
{
    ui->wdati->close();
   ui->wsheding->close ();
      ui->wjilu->show();

}
