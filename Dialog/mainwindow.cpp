#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <dialog.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionSetting_triggered()
{

    Dialog* d=new Dialog;
    d->exec();
ui->textEdit->selectAll();
ui->textEdit->paste();
}

