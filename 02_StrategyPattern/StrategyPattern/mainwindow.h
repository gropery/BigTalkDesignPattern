#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

#define SIMPLE_FACTORY_PATTERY  0
#define STATEGY_PATTERY1        1
#define STATEGY_PATTERY2        2
#define PATTERY  STATEGY_PATTERY2

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonOk_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
