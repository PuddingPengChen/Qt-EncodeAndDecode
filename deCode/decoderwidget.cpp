#include <QFileDialog>
#include <QMessageBox>
#include "decoderwidget.h"
#include "ui_decoderwidget.h"

DecoderWidget::DecoderWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DecoderWidget)
{
    ui->setupUi(this);
    decode = new QZXing(QZXing::DecoderFormat_MAXICODE);
}

DecoderWidget::~DecoderWidget()
{
    delete ui;
}

void DecoderWidget::on_btnInput_clicked()
{
    file = QFileDialog::getOpenFileName(this,tr("选择二维码"),".",tr("Image (*.png *.jpg)"));
    QPixmap pixmap(file);
    ui->label->setPixmap(pixmap);
}
//解码输出
void DecoderWidget::on_btnOut_clicked()
{
    QImage a(file);
    QString strQRCode = decode->decodeImage(a);
    if(!strQRCode.isEmpty())
    {
        ui->plainTextEdit->appendPlainText(strQRCode);
        qDebug()<<tr("解析数据:")<<strQRCode;
    }
    else
    {
        QMessageBox::warning(this,tr("警告"),tr("识别二维码信息失败！"));
    }
}
