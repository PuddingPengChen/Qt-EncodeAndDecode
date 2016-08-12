#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    renders = new TcQrencode();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString m = ui->lineEdit->text();
    QImage a = renders->encodeImage(m,8);
    ui->label_2->setPixmap(QPixmap::fromImage(a));
}
