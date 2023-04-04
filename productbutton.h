#ifndef PRODUCTBUTTON_H
#define PRODUCTBUTTON_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include "product.h"

class ProductButton
{


public:
    int x, y ;
    int width = 100, height = 100 ;
    QPushButton* button ;
    Product product ;

public:
    ProductButton(int, int, Product, QWidget*);
};

#endif // PRODUCTBUTTON_H
