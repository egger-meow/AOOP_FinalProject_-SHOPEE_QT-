#include "product.h"

Product::Product(int id,QString name,QString sellerid,QString date,long int pricee,int inventoryy,QString describe,QString typee,QString imagepath)
{
    ProductName=name;
    product_id=id;
    UploadDate=date;
    inventory=inventoryy;
    price=pricee;
    type=typee;
    Seller_id=sellerid;
    totalSalesNum=0;
    description=describe;
    this->imagepath=imagepath;

    star = 0 ;
    this->totalSalesNum = 0 ;
}
