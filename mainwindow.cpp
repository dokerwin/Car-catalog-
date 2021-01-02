#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "car.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->max_speed_line->setValidator( new QIntValidator(0, 1000, this) );


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addcar_btn_clicked()
{
    Car as(5);
  Car car[111];

QString str="Ya tut";
QStringList list;
list<<str;
ui->list_of_cars->setModel(new QStringListModel(list));
list<<"sss";
ui->list_of_cars->setModel(new QStringListModel(list));

}





void MainWindow::on_serelization_btn_clicked()
{

}
