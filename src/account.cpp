#include "account.h"

Account::Account(QString a,QString b,QString c):Accountname(a),Password(b),Nickname(c){
    sellerOpened=0;
    buyer=new Buyer();
    seller=new Seller();
}
void Account::openSeller(bool b){
    sellerOpened=1;
    seller=new Seller();
}
