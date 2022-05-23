#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "operationfactory.h"
#include <QDebug>

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


void MainWindow::on_pushButton_clicked()
{
    Operation *oper;

    oper = OperationFactory::createOperate(ui->comboBoxOper->currentText());
    oper->setNumberA(ui->lineEditNum1->text().toDouble());
    oper->setNumberB(ui->lineEditNum2->text().toDouble());
    double ret = oper->getResult();
    ui->lineEditResult->setText(tr("").setNum(ret));
    qDebug()<<"ret="<<ret;
}

