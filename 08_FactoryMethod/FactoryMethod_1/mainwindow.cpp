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
    IFactory *operFactory = NULL;
    switch (ui->comboBoxOper->currentIndex())
    {
        case 0:
            operFactory = new AddFactory();
            break;

        case 1:
            operFactory = new SubFactory();
            break;

        case 2:
            operFactory = new SubFactory();
            break;

        case 3:
            operFactory = new SubFactory();
            break;

        default:
            operFactory = new AddFactory();
            break;
    }

    Operation *oper = operFactory->CreateOperation();
    oper->setNumberA(ui->lineEditNum1->text().toDouble());
    oper->setNumberB(ui->lineEditNum2->text().toDouble());
    double ret = oper->getResult();
    ui->lineEditResult->setText(tr("").setNum(ret));
    qDebug()<<"ret="<<ret;
}

