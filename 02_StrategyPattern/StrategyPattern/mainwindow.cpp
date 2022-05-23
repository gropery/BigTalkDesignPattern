#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cashfctory.h"
#include "cashcontext.h"
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

#if PATTERY==SIMPLE_FACTORY_PATTERY
void MainWindow::on_pushButtonOk_clicked()
{
    CashSuper *cs;

    cs = CashFctory::creatCashAccept(ui->comboBox->currentIndex());
    double ret = cs->acceptCash(ui->lineEditPrice->text().toUInt()
                                *ui->lineEditNum->text().toUInt());
    ui->plainTextEdit->appendPlainText(tr("").setNum(ret));
    qDebug()<<ret;
}

#elif PATTERY==STATEGY_PATTERY1
void MainWindow::on_pushButtonOk_clicked()
{
    CashContext *cc=NULL;
    switch(ui->comboBox->currentIndex())
    {
        case 0:
            cc = new CashContext(new CashNormal);
            break;
        case 1:
            cc = new CashContext(new CashReble(0.8));
            break;
        case 2:
            cc = new CashContext(new CashReturn(300,100));
            break;
        default:
            cc = new CashContext(new CashNormal);
            break;
    }
    double ret = cc->GetResult(ui->lineEditPrice->text().toUInt()
                               *ui->lineEditNum->text().toUInt());
    ui->plainTextEdit->appendPlainText(tr("").setNum(ret));
    qDebug()<<ret;
}

#elif PATTERY==STATEGY_PATTERY2
void MainWindow::on_pushButtonOk_clicked()
{
    CashContext *cc=NULL;
    cc = new CashContext(ui->comboBox->currentIndex());
    double ret = cc->GetResult(ui->lineEditPrice->text().toUInt()
                                *ui->lineEditNum->text().toUInt());
    ui->plainTextEdit->appendPlainText(tr("").setNum(ret));
    qDebug()<<ret;
}

#endif
