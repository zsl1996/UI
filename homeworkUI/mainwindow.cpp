#include "mainwindow.h"
#include "ui_dati.h"
#include<QAction>
#include<iostream>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->wdati->close();
    ui->wsheding->close();
    ui->timu->setText("1+1+3?");


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_7_clicked()
{

    ui->wsheding->close();
     ui->wdati->show();

}

void MainWindow::on_pushButton_6_clicked()
{

     ui->wdati->close();
    ui->wsheding->show();

}
