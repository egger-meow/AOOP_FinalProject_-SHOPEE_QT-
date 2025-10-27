#include "productbutton.h"
#include <QDebug>

ProductButton::ProductButton(int x, int y, Product prod, QWidget* windowPtr)
{
    this->x = x ;
    this->y = y ;
    this->product = prod ;
    button = new QPushButton(windowPtr) ;
    button->setText(product.ProductName) ;

    //qDebug() << prod.ProductName ;
    QRect rect(QPoint(x, y), QSize(width, height)) ;
    rect.setX(x) ;
    rect.setY(y) ;
    rect.setSize(QSize(width, height)) ;
    button->setGeometry(rect) ;

}
