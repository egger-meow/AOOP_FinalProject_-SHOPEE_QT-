#ifndef SELLER_H
#define SELLER_H
#include "product.h"
class Seller
{
    QList<Product*>ProductList;
public:
    Seller();
    Seller(QString a,QString b);
    Product* upload(int id,QString name,QString seller_id,QString date,long int price,int inventoryy,QString describe,QString typee,QString imagepath);

};

#endif // SELLER_H
