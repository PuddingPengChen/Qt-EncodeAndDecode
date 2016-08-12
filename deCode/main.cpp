#include "decoderwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DecoderWidget w;
    w.show();

    return a.exec();
}

