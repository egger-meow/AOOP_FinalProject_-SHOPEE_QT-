#ifndef UPLOADPRODUCT_H
#define UPLOADPRODUCT_H

#include <QObject>
#include <QWidget>
#include "product.h"
class UploadProduct : public QWidget
{
    Q_OBJECT
public:
    explicit UploadProduct(QWidget *parent = nullptr);
    Product* upload(int id,QString name,QString seller_id,unsigned int date,long int price);
signals:

};

#endif // UPLOADPRODUCT_H
