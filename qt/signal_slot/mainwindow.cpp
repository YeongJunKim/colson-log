#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(this, &MainWindow::sendMessage, this, &MainWindow::getMessage);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getMessage(QString message)
{
    ui->plainTextEdit_slot->setPlainText(message);
}

void MainWindow::on_pushButton_signal_clicked()
{
    emit sendMessage(ui->lineEdit_signal->text());
}

