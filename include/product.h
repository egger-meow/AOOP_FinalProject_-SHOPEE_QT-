#ifndef PRODUCT_H
#define PRODUCT_H
#include "boss.h"

class Product
{


public:
    Product(int id,QString name,QString seller_id,QString date,long int price,int inventoryy,QString describe,QString typee,QString imagepath);
    Product(){}
    QString ProductName;
    int product_id;
    QString UploadDate;
    QMap<QString,QVector<QPair<QString,QString>>> Category;
    long int price;
    int inventory;
    QString type;
    int star ; //to ggmeow: 我把評價改成int, 以後在買家買到商品之後更新database比較方便, 評價星數就是star_total/totalSalesNum
    QString Seller_id;
    QString description;
    QString imagepath;
    int totalSalesNum;
};

#endif // PRODUCT_H
