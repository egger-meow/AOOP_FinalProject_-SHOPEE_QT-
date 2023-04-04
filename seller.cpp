#include "seller.h"

Seller::Seller(QString a,QString b){}
Seller::Seller(){}
Product* Seller::upload(int id,QString name,QString seller_id,QString date,long int price,int inventory,QString describe,QString type,QString imagepath=""){
    Product *newProduct=new Product(id,name,seller_id,date,price,inventory,describe,type,imagepath);
    ProductList.append(newProduct);
    return newProduct;
}
