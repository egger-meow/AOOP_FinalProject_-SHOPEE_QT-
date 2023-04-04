#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "boss.h"
#include "buyer.h"
#include "seller.h"
class Account
{
public:
    Account(QString a="",QString b="",QString c="");
    QString Accountname;
    QString Password;
    unsigned long long deposit;
    QPixmap headshot;
    QString Nickname;
    void openSeller(bool);

    Seller *seller;
    Buyer *buyer;

    bool sellerOpened;

};

#endif // ACCOUNT_H
