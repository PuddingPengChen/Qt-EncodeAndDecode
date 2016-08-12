#include "tcQrencode.h"
#include "./qrencode/qrencode.h"
#include <QPainter>

QImage TcQrencode::encodeImage(const QString& s, int bulk)
{
    QImage ret;
    QRcode* qr = QRcode_encodeString(s.toUtf8(), 1, QR_ECLEVEL_Q, QR_MODE_8, 0);
    if ( qr != nullptr )
    {
        int allBulk = (qr->width) * bulk;
        ret = QImage(allBulk, allBulk, QImage::Format_Mono);
        QPainter painter(&ret);
        QColor fg("black");
        QColor bg("white");
        painter.setBrush(bg);
        painter.setPen(Qt::NoPen);
        painter.drawRect(0, 0, allBulk, allBulk);

        painter.setBrush(fg);
        for( int y=0; y<qr->width; y++ )
        {
            for( int x=0; x<qr->width; x++ )
            {
                if ( qr->data[y*qr->width+x] & 1 )
                {
                    QRectF r(x*bulk, y*bulk, bulk, bulk);
                    painter.drawRects(&r, 1);
                }
            }
        }
        QRcode_free(qr);
    }
    return ret;
}
