#include "mainwindow.h"
#include "ui_mainwindow.h"

bool read_account(QVector<account_data> &d) ;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connection();
    guiSetup();
    dataBaseSetup();
    read_account();
    //read_product();

    QDateTime current_date_time =QDateTime::currentDateTime();
    QString current_date =current_date_time.toString("yyyy.MM.dd hh:mm ddd");


}

void MainWindow::dataBaseSetup(){
    database = QSqlDatabase::addDatabase("QMYSQL") ;
    //database.setHostName("140.113.90.105") ;
    //database.setHostName("140.113.122.243") ;
    database.setHostName("172.18.109.130") ;
    database.setUserName("ggmeow") ;
    database.setDatabaseName("account_db") ;
    database.setPassword("bigGG") ;
    database.setPort(3306) ;

    if(!database.open()){
        qDebug("no database fuckyou") ;
    }
    else{
        qDebug("database open successful") ;
    }
}

void MainWindow::guiSetup(){
    ui->page->setCurrentIndex(0) ;
    cur_fillpassword="";
    cur_newpass1="";
    cur_newpass2="";
    connection();
    ui->menu->setEnabled(0);
    ui->menu->setTitle("");
    //ui->menug->setDisabled(1);
    ui->menug->setTitle("");
    ui->actionsellerpage->setEnabled(0);
    ui->toLogin->setText("Wecome to\nBao's Shopee !!");
    tempFilePath="";

}
void MainWindow::connection(){

    connect(ui->loginhuh,&QPushButton::clicked,this,&MainWindow::on_toLogin_clicked);
    connect(ui->pushButton_4,&QPushButton::clicked,this,&MainWindow::on_toLogin_clicked);
    connect(ui->pushButton_3,&QPushButton::clicked,this,&MainWindow::on_pushButton_3_clicked);
    connect(ui->action,&QAction::triggered,this,&MainWindow::on_toLogin_clicked);
    //connect(ui->seller_comboBox,&QComboBox::currentIndexChanged,this,&MainWindow::on_toLogin_clicked);
    //on_home_produts_combobox_2_currentIndexChanged(int index)
}



//-------------------------------login and account process

bool MainWindow::read_account(){
    bool ok = database.open() ;
    if(!ok) qDebug("database open failed") ;
    query = new QSqlQuery(database) ;

    query->exec("select * from account_data") ;
    //qDebug() << "read_acc" ;

    while(query->next()){
        //qDebug("read") ;
        QString acc_name = query->value(0).toString() ;
        QString pass_name = query->value(1).toString() ;
        QString nickname = query->value(4).toString() ;

        Account* newacc = new Account(acc_name, pass_name, nickname) ;
        newacc->deposit = query->value(2).toULongLong() ;
        newacc->sellerOpened = query->value(5).toBool() ;
        Accounts[acc_name] = newacc ;
    }


    return  1;
}


bool MainWindow::read_product(){

    query->exec("select * from products") ;
    //qDebug() << "read_acc" ;

    while(query->next()){

        int product_id = query->value(0).toInt() ;
        QString product_name = query->value(1).toString() ;
        QString seller_id = query->value(2).toString() ;
        QString date = query->value(3).toString() ;
        long long price = query->value(4).toLongLong() ;
        int inventory = query->value(5).toInt() ;
        QString describe = query->value(6).toString() ;
        QString product_type = query->value(7).toString() ;
        QString image_path = query->value(8).toString() ;
        int star = query->value(9).toInt() ;
        int sold_num = query->value(10).toInt() ;


        Products[Products.size()] = new Product(Products.size(),product_name,seller_id,date,price,inventory,describe,product_type,image_path);
        Products.last()->star=star;
        Products.last()->totalSalesNum=sold_num;

        ui->home_produts_combobox->addItem(Products.last()->ProductName);
        if(Products.size()==1){
            qDebug()<<Products[0]->imagepath;
            ui->show_product_homelabel->clear();


            QImage *pic = new QImage(Products[0]->imagepath);
            ui->show_product_homelabel->setPixmap(QPixmap::fromImage(*pic));
            ui->show_productInfo_homelabel->clear();
            QString temp= "品名: "+
                    Products[0]->ProductName+"\n"+
                    "商品種類: "+
                    Products[0]->type+"\n"+
                    "價格: $"+
                    QString::number(Products[0]->price)+"\n\n"+
                    "庫存: "+
                    QString::number(Products[0]->inventory)+"\n"+
                    "上架時間: "+
                    Products[0]->UploadDate+"\n"+
                    "商品介紹: \n"+
                    Products[0]->description ;
             ui->show_productInfo_homelabel->setText(temp);
        }
    }
}

bool MainWindow::check_if_duplicated_account(QString a){
    if(Accounts[a]!=NULL) return 1;
    return 0;
}

bool MainWindow::add_to_account_data(QString a, QString b,QString c){
      //a acc b pass c nick
      if(!check_if_duplicated_account(a)){

          Accounts[a]=new Account(a,b,c);
      }
      else return 0;

      QString interval = "','" ;

      QString sql_run = "insert into account_data values('" + a + interval + b + "'," + "0, 0 , '" + c + "',0) ;" ;
      query->exec(sql_run)  ;

      return 1;
}
bool MainWindow::login_account(QString acc, QString pas){
    if(Accounts[acc]!=NULL&&Accounts[acc]->Password==pas){
        return 1;
    }
    return 0;
}

//-----------------------------------------------




MainWindow::~MainWindow()
{
    delete ui;
}

//----------------------------------------
void MainWindow::on_toLogin_clicked()
{

    Products.clear() ;/////
    myProducts.clear() ;/////
    //seller_comboBox->clear() ;///

    ui->fillAccount->setMouseTracking(1);
    ui->pushButton_3->setText("忘記密碼?");
    ui->fillAccount->clear();
    ui->fillPassword->clear();
    cur_fillpassword="";
    toPage(log_in) ;

    countshit=0;
}
void MainWindow::on_tosetting_clicked()
{
    toPage(settings) ;
}
void MainWindow::on_tohome_clicked(){
    toPage(login_success);
}
void MainWindow::on_toprofio_clicked(){
    toPage(profio);
}
//---------------------------------------
void MainWindow::on_pushButton_clicked()
{
    ui->newAccount->clear();
    ui->newPassword1->clear();
    ui->newPassword2->clear();
    toPage(sign_up) ;
}


void MainWindow::on_loginButton_clicked()//註解全部都是在改ProductButton前的code
{
    QString acc=ui->fillAccount->text(),pas=cur_fillpassword;

    if(login_account(acc,pas)){
        toPage(login_success) ;
        //toPage(showproducts) ;

        ui->menu->setEnabled(1);
        ui->menu->setTitle("首頁");
        cur_account=Accounts[acc];
        ui->menug->setTitle("HI, "+Accounts[acc]->Nickname+"  |");
        cur_account->sellerOpened?ui->actionsellerpage->setEnabled(1):ui->actionsellerpage->setEnabled(0);
        cur_account->sellerOpened?ui->pushButton_2->setEnabled(0):ui->pushButton_2->setEnabled(1);

        read_product() ;

        if(cur_account->sellerOpened){
            query->exec("select product_id from products where account_name = '" + cur_account->Accountname + "' ;" ) ;
            qDebug()<<"products size:"<<Products.size()<<"\n";
            while(query->next()){
                int product_index = query->value(0).toInt() ;
                qDebug()<<product_index<<" ";
                qDebug() << Products[product_index]->ProductName ;
                //seller_comboBox->insertItem(0,Products[product_index]->ProductName);
                ui->seller_comboBox->addItem(Products[product_index]->ProductName) ;

                myProducts.push_back(Products[product_index]) ;
                qDebug() << 1 ;
            }
        }

        //show_products() ;
    }
    else{
        QMessageBox::information(this, "輸入錯誤", "帳號或密碼錯誤") ;
    }
    cur_fillpassword.clear();
    ui->fillAccount->clear();
    ui->fillPassword->clear();
}

bool MainWindow::check_legal_password(QString a){
    int n=a.length();
    if(n>12||n<6) return 0;
    bool legal1=0,legal2=0;
    for(auto c:a){
        if(c>='0'&&c<='9'){
            legal1=1;
        }
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))legal2=1;
    }
    return legal1&&legal2;

}

void MainWindow::on_createAccount_clicked()
{
    QString acco = ui->newAccount->text();
    QString pass1 = cur_newpass1 ;
    QString pass2 = cur_newpass2 ;

    if(check_if_duplicated_account(acco)){
        ui->newAccount->clear() ;
        ui->newPassword1->clear() ;
        ui->newPassword2->clear() ;
        cur_newpass1="";
        cur_newpass2="";

        QMessageBox::StandardButton toLogin = QMessageBox::information(this, "輸入錯誤", "帳號已存在\n要使用此帳號登入嗎?", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes) ;
        if(toLogin == QMessageBox::Yes){
            ui->page->setCurrentIndex(log_in) ;
            ui->fillAccount->setText(acco) ;
        }

        //ui->warning->setText("帳號已存在") ;
    }
    else if(!(check_legal_password(acco)&&check_legal_password(pass1)&&check_legal_password(pass2))){

        ui->label_10->setText("*帳號與密碼長度需為6-12，且至少要有一個數字與英文字母!");
    }
    else if(pass1 != pass2){
        ui->warning->setText("兩次輸入密碼不相符") ;
        ui->newPassword1->clear() ;
        ui->newPassword2->clear() ;
        cur_newpass1="";
        cur_newpass2="";
    }
    else{
        add_to_account_data(acco,pass1,ui->nicknameCreate_lineEdit->text());
        toPage(log_in);
        ui->newPassword1->clear() ;
        ui->newPassword2->clear() ;
        cur_newpass1="";
        cur_newpass2="";
    }

}


void MainWindow::on_fillPassword_textChanged(const QString &arg1)
{

    //ui->fillPassword->setText(temp);

}


void MainWindow::on_fillPassword_textEdited(const QString &arg1)
{


    ui->fillPassword->setText(cur_fillpassword);
    if(arg1.length()>cur_fillpassword.length()){
        cur_fillpassword+=arg1[arg1.length()-1];
    }
    else if(cur_fillpassword.length()!=0){
        cur_fillpassword.remove(cur_fillpassword.length()-1,1);
    }
    QString temp="";
    for(int i=0;i<cur_fillpassword.length();i++){
        temp="*"+temp;
    }
    ui->fillPassword->setText(temp);
    //qDebug()<<cur_fillpassword;
}


void MainWindow::on_newPassword1_textEdited(const QString &arg1)
{
    ui->newPassword1->setText(cur_newpass1);
    if(arg1.length()>cur_newpass1.length()){
        cur_newpass1+=arg1[arg1.length()-1];
    }
    else if(cur_newpass1.length()!=0){
        cur_newpass1.remove(cur_newpass1.length()-1,1);
    }
    QString temp="";
    for(int i=0;i<cur_newpass1.length();i++){
        temp="*"+temp;
    }
    ui->newPassword1->setText(temp);
    qDebug()<<cur_newpass1;
}


void MainWindow::on_newPassword2_textEdited(const QString &arg1)
{
    ui->newPassword2->setText(cur_newpass2);
    if(arg1.length()>cur_newpass2.length()){
        cur_newpass2+=arg1[arg1.length()-1];
    }
    else if(cur_newpass2.length()!=0){
        cur_newpass2.remove(cur_newpass2.length()-1,1);
    }
    QString temp="";
    for(int i=0;i<cur_newpass2.length();i++){
        temp="*"+temp;
    }
    ui->newPassword2->setText(temp);
    qDebug()<<cur_newpass2;
}


void MainWindow::on_ceate_account_clicked()
{
    ui->newAccount->clear();
    ui->newPassword1->clear();
    ui->newPassword2->clear();
    toPage(sign_up) ;
}

void MainWindow::on_log_out_clicked(){
    ui->fillAccount->clear();
    ui->fillPassword->clear();
    ui->seller_comboBox->clear();
    toPage(log_in) ;
}

void MainWindow::toPage(int i){
    ui->page->setCurrentIndex(i) ;
}

void MainWindow::on_actiond_triggered()
{
    on_tohome_clicked();
    ui->menu->setTitle("首頁");
}


void MainWindow::on_actionprofio_triggered()
{
    on_toprofio_clicked();
    ui->menu->setTitle("個人資料");
}


void MainWindow::on_actionsettings_triggered()
{
    ui->menu->setTitle("設定");
    on_tosetting_clicked();
}


void MainWindow::on_pushButton_2_clicked() //open seller function
{
    cur_account->openSeller(1);
    ui->actionsellerpage->setEnabled(1);
    ui->pushButton_2->setEnabled(0) ;
    QString current_acc = cur_account->Accountname ;

    query->exec("update account_data set is_seller = 1 where account_name = '" + current_acc + "' ;") ;
}


void MainWindow::on_lineEdit_2_cursorPositionChanged(int arg1, int arg2)
{

}


void MainWindow::on_price_Slider_sliderMoved(int position)
{
    ui->price_lineEdit->setText(QString::number(position));
}


void MainWindow::on_price_lineEdit_editingFinished()
{
    bool ok;
    long int k=ui->price_lineEdit->text().toInt(&ok);
    if(ok) ui->price_Slider->setValue(ui->price_lineEdit->text().toInt());

}


void MainWindow::on_actionsellerpage_triggered()
{
    toPage(sellerhome);

    on_home_produts_combobox_2_currentIndexChanged(0);

    //seller_comboBox ;
}


void MainWindow::on_uploaproduct_button_clicked()
{
    ui->price_lineEdit->setText("0");
     ui->show_upload_pic->clear();

     ui->productname_linedit->clear();

     ui->price_Slider->setValue(0);
     ui->inventory_input->setValue(1);
     ui->productdescribe_upload_textedit->clear();
     ui->productupload_type->setCurrentIndex(0);
    toPage(uploadproduct);
}


void MainWindow::on_upload_button_clicked()
{

    qDebug()<<ui->productupload_type->currentText();
    current =QDateTime::currentDateTime();
    QString current_date =current.toString("yyyy.MM.dd hh:mm ddd");
    qDebug()<<Products.size();
    Products[Products.size()] = cur_account->seller->upload(
                // cur_account->seller->upload format:(

                //int id, QString name, QString sellerid, QString date, long int pricee, int inventoryy,
                //QString describe,QString typee,QString imagepath)

                Products.size(),
                ui->productname_linedit->text(),
                cur_account->Accountname,current_date,
                ui->price_Slider->value(),ui->inventory_input->value(),
                ui->productdescribe_upload_textedit->toPlainText(),
                ui->productupload_type->currentText(),
                tempFilePath
                );
    qDebug()<<ui->productupload_type->currentText();
    QString product_id = QString::number(Products.last()->product_id) ;
    QString product_name = Products.last()->ProductName ;
    QString seller_id = Products.last()->Seller_id ;
    QString date = Products.last()->UploadDate ;
    QString price = QString::number( Products.last()->price ) ;
    QString inventory = QString::number( Products.last()->inventory ) ;
    QString describe = Products.last()->description ;
    QString product_type = Products.last()->type ;
    QString image_path = Products.last()->imagepath ;
    QString star = QString::number(0) ;
    QString sold_num = QString::number(0) ;

    QString ger = "', '" ;

    QString exec_in_parentheses = product_id + ", '" + product_name + ger + seller_id + ger  ;
    exec_in_parentheses = exec_in_parentheses + date + "', " + price + "," + inventory ;
    exec_in_parentheses = exec_in_parentheses + ", '" + describe + ger + product_type + ger + image_path + "', " ;
    exec_in_parentheses = exec_in_parentheses + star + "," + sold_num ;
    qDebug()<<ui->productupload_type->currentText();
    qDebug() << exec_in_parentheses ;

    query->exec("insert into products values( " + exec_in_parentheses + " ) ;") ;


    //add to data base here pong jin way mow

    ui->home_produts_combobox->addItem(ui->productname_linedit->text());
    ui->seller_comboBox->addItem(ui->productname_linedit->text());
    myProducts.push_back(Products.last()) ;

    if(Products.size()==1){
        qDebug()<<Products[0]->imagepath;
        ui->show_product_homelabel->clear();


        QImage *pic = new QImage(Products[0]->imagepath);
        ui->show_product_homelabel->setPixmap(QPixmap::fromImage(*pic));
        ui->show_productInfo_homelabel->clear();
        QString temp= "品名: "+
                Products[0]->ProductName+"\n"+
                "商品種類: "+
                Products[0]->type+"\n"+
                "價格: $"+
                QString::number(Products[0]->price)+"\n\n"+
                "庫存: "+
                QString::number(Products[0]->inventory)+"\n"+
                "上架時間: "+
                Products[0]->UploadDate+"\n"+
                "商品介紹: \n"+
                Products[0]->description ;
         ui->show_productInfo_homelabel->setText(temp);
    }

    ui->page->setCurrentIndex(sellerhome) ;
}



void MainWindow::keyPressEvent(QKeyEvent *e){

    if(e->key()==Qt::Key_Enter-1){

        if(ui->page->currentIndex()==log_in) {
            if(ui->fillPassword->isActiveWindow())on_loginButton_clicked();
        }       //else
    }
}






void MainWindow::on_pushButton_3_clicked()
{


    countshit++;
    ui->fillAccount->setText("可憐");
    ui->fillPassword->setText("可憐");
    ui->pushButton_3->setText("笑死");
    if(countshit>20){
        ui->fillAccount->setText(Accounts.last()->Accountname);
        ui->fillPassword->setText("********");
        cur_fillpassword=Accounts.last()->Password;
    }
}




void MainWindow::on_upload_productpicture_button_clicked()
{

    QString filename = QFileDialog::getOpenFileName(this, QObject::tr("Open Image"),  //open file
         "product_Images/", QObject::tr("*.png *.jpg *.bmp"));
    QImage *pic = new QImage(filename);
    QStringList f=filename.split("/");
    tempFilePath="product_Images/"+f.last();

    QPixmap pixmap = QPixmap::fromImage(*pic) ;

    pixmap = pixmap.scaled(300, 200, Qt::KeepAspectRatio) ;

    ui->show_upload_pic->setPixmap(pixmap);

    ui->show_image_text->setText("商品縮圖預覽:") ;
}


void MainWindow::on_home_produts_combobox_currentIndexChanged(int index)
{
    ui->show_product_homelabel->clear();
    ui->show_product_homelabel->setText("fuck");
    QImage *pic = new QImage(Products[index]->imagepath);
    ui->show_product_homelabel->setPixmap(QPixmap::fromImage(*pic));
    ui->show_productInfo_homelabel->clear();
    QString temp= "品名: "+
            Products[index]->ProductName+"\n"+
            "商品種類: "+
            Products[index]->type+"\n"+
            "價格: $"+
            QString::number(Products[index]->price)+"\n"+
            "庫存: "+
            QString::number(Products[index]->inventory)+"\n"+
            "上架時間: "+
            Products[index]->UploadDate+"\n"+
            "商品介紹: \n"+
            Products[index]->description ;
     ui->show_productInfo_homelabel->setText(temp);
}

void MainWindow::show_products(){
    bool right = false ;
    int x = 30 ;
    int y = 30 ;

    for(auto it = Products.begin() ; it != Products.end() ; it++){
        ProductButton* productbutton = new ProductButton(x, y, *(it.value()), this) ;
        ui->page->addWidget(productbutton->button) ;
        productbutton->button->show() ;

        int xx = productbutton->button->x() ;
        int yy = productbutton->button->y() ;
        qDebug() << QString::number(xx) ;
        qDebug() << QString::number(yy) ;

        if(right){
            x += 110 ;
            y -= 110 ;
        }
        else{
            y += 110 ;
        }
        right = !right ;
    }
}

void MainWindow::on_home_produts_combobox_2_currentIndexChanged(int index)
{
    //qDebug() << "index:" << index ;
    ui->show_product_homelabel_2->clear() ;
    //qDebug() << QString::number(myProducts.size()) ;

    QImage *pic = new QImage(myProducts[index]->imagepath);
    ui->show_product_homelabel_2->setPixmap(QPixmap::fromImage(*pic));
    ui->show_productInfo_homelabel_2->clear();
    QString temp= "品名: "+
            myProducts[index]->ProductName+"\n"+
            "商品種類: "+
            myProducts[index]->type+"\n"+
            "價格: $"+
            QString::number(myProducts[index]->price)+"\n"+
            "庫存: "+
            QString::number(myProducts[index]->inventory)+"\n"+
            "上架時間: "+
            myProducts[index]->UploadDate+"\n"+
            "商品介紹: \n"+
            myProducts[index]->description ;
     ui->show_productInfo_homelabel_2->setText(temp);
}


void MainWindow::on_buy_button_clicked()
{
    Product* nowProduct = Products[ui->home_produts_combobox->currentIndex()] ;
        if(nowProduct->inventory <= 0){
            QMessageBox::warning(this, " ", "此商品已沒有存貨!") ;
            return ;
        }


        QMessageBox::StandardButton toLogin = QMessageBox::information(this, " ", "確定購買?", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes) ;
        if(toLogin == QMessageBox::No){
            return ;
        }
        QString numAfterBuy = QString::number(--nowProduct->inventory) ;

        query->exec("update products set inventory =" + numAfterBuy + " where product_id =" + QString::number(nowProduct->product_id)+";" ) ;
        //update products set inventory = 4 where product_id = 2 ;
        on_home_produts_combobox_currentIndexChanged(ui->home_produts_combobox->currentIndex()) ;

        QMessageBox::about(this, " ", "購買成功") ;
}

