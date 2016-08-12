#ifndef DECODERWIDGET_H
#define DECODERWIDGET_H

#include <QWidget>
#include "QZXing.h"
namespace Ui {
class DecoderWidget;
}

class DecoderWidget : public QWidget
{
    Q_OBJECT

public:
    explicit DecoderWidget(QWidget *parent = 0);
    ~DecoderWidget();

private slots:
    void on_btnInput_clicked();

    void on_btnOut_clicked();

private:
    Ui::DecoderWidget *ui;
    QZXing* decode;
    QString file;
};

#endif // DECODERWIDGET_H
