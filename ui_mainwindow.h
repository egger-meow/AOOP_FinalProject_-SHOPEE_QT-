/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actiond;
    QAction *actionprofio;
    QAction *actionsettings;
    QAction *actionsellerpage;
    QAction *action;
    QWidget *centralwidget;
    QStackedWidget *page;
    QWidget *welcome;
    QPushButton *toLogin;
    QWidget *loginPage;
    QGroupBox *groupBox;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *fillAccount;
    QLineEdit *fillPassword;
    QPushButton *loginButton;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QWidget *signUp;
    QGroupBox *groupBox_2;
    QLabel *label_18;
    QLineEdit *newAccount;
    QLineEdit *newPassword1;
    QLineEdit *newPassword2;
    QLineEdit *nicknameCreate_lineEdit;
    QPushButton *createAccount;
    QPushButton *pushButton_4;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *nicknameCreate_label;
    QLabel *label_10;
    QLabel *label_3;
    QLabel *warning;
    QWidget *loginSuccess;
    QLabel *show_product_homelabel;
    QComboBox *home_produts_combobox;
    QGroupBox *groupBox_3;
    QLabel *show_productInfo_homelabel;
    QLabel *label_14;
    QPushButton *buy_button;
    QWidget *profio;
    QWidget *settings;
    QPushButton *pushButton_2;
    QWidget *loginFail;
    QLabel *label_8;
    QPushButton *ceate_account;
    QPushButton *loginhuh;
    QWidget *sellerhome;
    QPushButton *uploaproduct_button;
    QLabel *label_15;
    QGroupBox *groupBox_4;
    QLabel *show_productInfo_homelabel_2;
    QLabel *show_product_homelabel_2;
    QComboBox *seller_comboBox;
    QWidget *uploadproduct;
    QLabel *productname_label;
    QLineEdit *productname_linedit;
    QLabel *producttype_label;
    QLabel *label_7;
    QComboBox *productupload_type;
    QSlider *price_Slider;
    QLabel *label_9;
    QLabel *label_11;
    QLineEdit *price_lineEdit;
    QPushButton *upload_button;
    QDoubleSpinBox *inventory_input;
    QLabel *label_12;
    QLabel *label_13;
    QTextEdit *productdescribe_upload_textedit;
    QPushButton *upload_productpicture_button;
    QLineEdit *lineEdit;
    QLabel *show_upload_pic;
    QLabel *show_image_text;
    QWidget *showProducts;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menug;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(860, 626);
        actiond = new QAction(MainWindow);
        actiond->setObjectName(QString::fromUtf8("actiond"));
        actionprofio = new QAction(MainWindow);
        actionprofio->setObjectName(QString::fromUtf8("actionprofio"));
        actionsettings = new QAction(MainWindow);
        actionsettings->setObjectName(QString::fromUtf8("actionsettings"));
        actionsellerpage = new QAction(MainWindow);
        actionsellerpage->setObjectName(QString::fromUtf8("actionsellerpage"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        page = new QStackedWidget(centralwidget);
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(-10, -140, 871, 701));
        page->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 201, 218);"));
        welcome = new QWidget();
        welcome->setObjectName(QString::fromUtf8("welcome"));
        toLogin = new QPushButton(welcome);
        toLogin->setObjectName(QString::fromUtf8("toLogin"));
        toLogin->setGeometry(QRect(30, 170, 811, 511));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bradley Hand ITC")});
        font.setPointSize(90);
        font.setBold(false);
        font.setItalic(false);
        toLogin->setFont(font);
        toLogin->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));\n"
"alternate-background-color: rgb(85, 255, 0);\n"
"gridline-color: rgb(255, 170, 0);\n"
"font: 90pt \"Bradley Hand ITC\";\n"
"background-color: rgb(85, 170, 127);"));
        page->addWidget(welcome);
        loginPage = new QWidget();
        loginPage->setObjectName(QString::fromUtf8("loginPage"));
        groupBox = new QGroupBox(loginPage);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(190, 210, 491, 391));
        groupBox->setStyleSheet(QString::fromUtf8("font: 9pt \"Bahnschrift SemiLight\";\n"
"border-color: rgb(27, 27, 127);\n"
"background-color: rgb(255, 170, 0);"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 270, 91, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 170, 60, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Bahnschrift SemiLight\";\n"
"border-color: rgb(27, 27, 127);\n"
"background-color: rgb(255, 170, 0);"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 110, 51, 16));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 170, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 128, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(212, 106, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(85, 43, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(113, 57, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(212, 170, 127, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 128));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush10(QColor(170, 85, 0, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush9);
#endif
        label->setPalette(palette);
        fillAccount = new QLineEdit(groupBox);
        fillAccount->setObjectName(QString::fromUtf8("fillAccount"));
        fillAccount->setGeometry(QRect(240, 100, 131, 31));
        fillAccount->setTabletTracking(false);
        fillAccount->setAutoFillBackground(false);
        fillAccount->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 95, 135);\n"
"font: 9pt \"Bahnschrift\";"));
        fillAccount->setFrame(false);
        fillAccount->setCursorPosition(0);
        fillAccount->setAlignment(Qt::AlignCenter);
        fillPassword = new QLineEdit(groupBox);
        fillPassword->setObjectName(QString::fromUtf8("fillPassword"));
        fillPassword->setGeometry(QRect(240, 160, 131, 31));
        fillPassword->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 95, 135);\n"
"font: 9pt \"Bahnschrift\";"));
        fillPassword->setFrame(false);
        fillPassword->setAlignment(Qt::AlignCenter);
        loginButton = new QPushButton(groupBox);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(250, 210, 113, 32));
        loginButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 255, 255);"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 260, 113, 32));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(170, 255, 255);"));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 300, 80, 20));
        page->addWidget(loginPage);
        signUp = new QWidget();
        signUp->setObjectName(QString::fromUtf8("signUp"));
        groupBox_2 = new QGroupBox(signUp);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(190, 210, 491, 391));
        groupBox_2->setStyleSheet(QString::fromUtf8("font: 9pt \"Bahnschrift SemiLight\";\n"
"border-color: rgb(27, 27, 127);\n"
"background-color: rgb(255, 170, 127);"));
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(290, 320, 121, 20));
        newAccount = new QLineEdit(groupBox_2);
        newAccount->setObjectName(QString::fromUtf8("newAccount"));
        newAccount->setGeometry(QRect(250, 80, 113, 21));
        newAccount->setAlignment(Qt::AlignCenter);
        newPassword1 = new QLineEdit(groupBox_2);
        newPassword1->setObjectName(QString::fromUtf8("newPassword1"));
        newPassword1->setGeometry(QRect(250, 120, 113, 21));
        newPassword1->setAlignment(Qt::AlignCenter);
        newPassword2 = new QLineEdit(groupBox_2);
        newPassword2->setObjectName(QString::fromUtf8("newPassword2"));
        newPassword2->setGeometry(QRect(250, 160, 113, 21));
        newPassword2->setAlignment(Qt::AlignCenter);
        nicknameCreate_lineEdit = new QLineEdit(groupBox_2);
        nicknameCreate_lineEdit->setObjectName(QString::fromUtf8("nicknameCreate_lineEdit"));
        nicknameCreate_lineEdit->setGeometry(QRect(250, 200, 113, 21));
        nicknameCreate_lineEdit->setAlignment(Qt::AlignCenter);
        createAccount = new QPushButton(groupBox_2);
        createAccount->setObjectName(QString::fromUtf8("createAccount"));
        createAccount->setGeometry(QRect(250, 280, 113, 32));
        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(250, 330, 111, 31));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(160, 120, 60, 16));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(160, 160, 71, 16));
        nicknameCreate_label = new QLabel(groupBox_2);
        nicknameCreate_label->setObjectName(QString::fromUtf8("nicknameCreate_label"));
        nicknameCreate_label->setGeometry(QRect(160, 200, 61, 21));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(60, 230, 411, 20));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 80, 60, 16));
        warning = new QLabel(groupBox_2);
        warning->setObjectName(QString::fromUtf8("warning"));
        warning->setGeometry(QRect(60, 340, 171, 20));
        page->addWidget(signUp);
        loginSuccess = new QWidget();
        loginSuccess->setObjectName(QString::fromUtf8("loginSuccess"));
        show_product_homelabel = new QLabel(loginSuccess);
        show_product_homelabel->setObjectName(QString::fromUtf8("show_product_homelabel"));
        show_product_homelabel->setGeometry(QRect(450, 140, 371, 561));
        home_produts_combobox = new QComboBox(loginSuccess);
        home_produts_combobox->setObjectName(QString::fromUtf8("home_produts_combobox"));
        home_produts_combobox->setGeometry(QRect(60, 190, 361, 21));
        groupBox_3 = new QGroupBox(loginSuccess);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(110, 340, 331, 341));
        show_productInfo_homelabel = new QLabel(groupBox_3);
        show_productInfo_homelabel->setObjectName(QString::fromUtf8("show_productInfo_homelabel"));
        show_productInfo_homelabel->setGeometry(QRect(60, 20, 201, 301));
        label_14 = new QLabel(loginSuccess);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(100, 162, 131, 20));
        buy_button = new QPushButton(loginSuccess);
        buy_button->setObjectName(QString::fromUtf8("buy_button"));
        buy_button->setGeometry(QRect(250, 650, 111, 41));
        QFont font1;
        font1.setPointSize(13);
        buy_button->setFont(font1);
        page->addWidget(loginSuccess);
        home_produts_combobox->raise();
        show_product_homelabel->raise();
        groupBox_3->raise();
        label_14->raise();
        buy_button->raise();
        profio = new QWidget();
        profio->setObjectName(QString::fromUtf8("profio"));
        page->addWidget(profio);
        settings = new QWidget();
        settings->setObjectName(QString::fromUtf8("settings"));
        pushButton_2 = new QPushButton(settings);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 300, 251, 51));
        page->addWidget(settings);
        loginFail = new QWidget();
        loginFail->setObjectName(QString::fromUtf8("loginFail"));
        label_8 = new QLabel(loginFail);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(260, 170, 521, 281));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Agency FB")});
        font2.setPointSize(28);
        label_8->setFont(font2);
        ceate_account = new QPushButton(loginFail);
        ceate_account->setObjectName(QString::fromUtf8("ceate_account"));
        ceate_account->setGeometry(QRect(490, 420, 121, 41));
        loginhuh = new QPushButton(loginFail);
        loginhuh->setObjectName(QString::fromUtf8("loginhuh"));
        loginhuh->setGeometry(QRect(210, 420, 101, 41));
        page->addWidget(loginFail);
        sellerhome = new QWidget();
        sellerhome->setObjectName(QString::fromUtf8("sellerhome"));
        uploaproduct_button = new QPushButton(sellerhome);
        uploaproduct_button->setObjectName(QString::fromUtf8("uploaproduct_button"));
        uploaproduct_button->setGeometry(QRect(30, 650, 80, 20));
        label_15 = new QLabel(sellerhome);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(110, 170, 171, 31));
        groupBox_4 = new QGroupBox(sellerhome);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(90, 270, 331, 341));
        show_productInfo_homelabel_2 = new QLabel(groupBox_4);
        show_productInfo_homelabel_2->setObjectName(QString::fromUtf8("show_productInfo_homelabel_2"));
        show_productInfo_homelabel_2->setGeometry(QRect(60, 20, 201, 301));
        show_product_homelabel_2 = new QLabel(sellerhome);
        show_product_homelabel_2->setObjectName(QString::fromUtf8("show_product_homelabel_2"));
        show_product_homelabel_2->setGeometry(QRect(470, 150, 371, 561));
        seller_comboBox = new QComboBox(sellerhome);
        seller_comboBox->setObjectName(QString::fromUtf8("seller_comboBox"));
        seller_comboBox->setGeometry(QRect(90, 230, 341, 22));
        page->addWidget(sellerhome);
        uploadproduct = new QWidget();
        uploadproduct->setObjectName(QString::fromUtf8("uploadproduct"));
        productname_label = new QLabel(uploadproduct);
        productname_label->setObjectName(QString::fromUtf8("productname_label"));
        productname_label->setGeometry(QRect(130, 200, 61, 21));
        productname_linedit = new QLineEdit(uploadproduct);
        productname_linedit->setObjectName(QString::fromUtf8("productname_linedit"));
        productname_linedit->setGeometry(QRect(210, 200, 141, 20));
        producttype_label = new QLabel(uploadproduct);
        producttype_label->setObjectName(QString::fromUtf8("producttype_label"));
        producttype_label->setGeometry(QRect(120, 260, 81, 16));
        label_7 = new QLabel(uploadproduct);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(130, 320, 71, 21));
        productupload_type = new QComboBox(uploadproduct);
        productupload_type->addItem(QString());
        productupload_type->addItem(QString());
        productupload_type->addItem(QString());
        productupload_type->addItem(QString());
        productupload_type->addItem(QString());
        productupload_type->addItem(QString());
        productupload_type->addItem(QString());
        productupload_type->addItem(QString());
        productupload_type->setObjectName(QString::fromUtf8("productupload_type"));
        productupload_type->setGeometry(QRect(210, 260, 141, 22));
        price_Slider = new QSlider(uploadproduct);
        price_Slider->setObjectName(QString::fromUtf8("price_Slider"));
        price_Slider->setGeometry(QRect(370, 320, 471, 16));
        price_Slider->setMaximum(1000000000);
        price_Slider->setOrientation(Qt::Horizontal);
        label_9 = new QLabel(uploadproduct);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(370, 350, 51, 16));
        label_11 = new QLabel(uploadproduct);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(770, 350, 91, 16));
        price_lineEdit = new QLineEdit(uploadproduct);
        price_lineEdit->setObjectName(QString::fromUtf8("price_lineEdit"));
        price_lineEdit->setGeometry(QRect(210, 320, 141, 20));
        upload_button = new QPushButton(uploadproduct);
        upload_button->setObjectName(QString::fromUtf8("upload_button"));
        upload_button->setGeometry(QRect(240, 610, 80, 20));
        inventory_input = new QDoubleSpinBox(uploadproduct);
        inventory_input->setObjectName(QString::fromUtf8("inventory_input"));
        inventory_input->setGeometry(QRect(210, 380, 141, 22));
        inventory_input->setDecimals(0);
        label_12 = new QLabel(uploadproduct);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(130, 380, 61, 21));
        label_13 = new QLabel(uploadproduct);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(130, 440, 61, 31));
        productdescribe_upload_textedit = new QTextEdit(uploadproduct);
        productdescribe_upload_textedit->setObjectName(QString::fromUtf8("productdescribe_upload_textedit"));
        productdescribe_upload_textedit->setGeometry(QRect(220, 430, 121, 91));
        upload_productpicture_button = new QPushButton(uploadproduct);
        upload_productpicture_button->setObjectName(QString::fromUtf8("upload_productpicture_button"));
        upload_productpicture_button->setGeometry(QRect(160, 560, 131, 20));
        lineEdit = new QLineEdit(uploadproduct);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(440, 260, 141, 20));
        show_upload_pic = new QLabel(uploadproduct);
        show_upload_pic->setObjectName(QString::fromUtf8("show_upload_pic"));
        show_upload_pic->setGeometry(QRect(380, 420, 300, 200));
        show_image_text = new QLabel(uploadproduct);
        show_image_text->setObjectName(QString::fromUtf8("show_image_text"));
        show_image_text->setGeometry(QRect(380, 390, 161, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(12);
        show_image_text->setFont(font3);
        page->addWidget(uploadproduct);
        show_upload_pic->raise();
        productname_label->raise();
        productname_linedit->raise();
        producttype_label->raise();
        label_7->raise();
        productupload_type->raise();
        price_Slider->raise();
        label_9->raise();
        label_11->raise();
        price_lineEdit->raise();
        upload_button->raise();
        inventory_input->raise();
        label_12->raise();
        label_13->raise();
        productdescribe_upload_textedit->raise();
        upload_productpicture_button->raise();
        lineEdit->raise();
        show_image_text->raise();
        showProducts = new QWidget();
        showProducts->setObjectName(QString::fromUtf8("showProducts"));
        page->addWidget(showProducts);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 860, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menug = new QMenu(menubar);
        menug->setObjectName(QString::fromUtf8("menug"));
        menug->setGeometry(QRect(2265, 102, 121, 46));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menug->menuAction());
        menubar->addAction(menu->menuAction());
        menu->addAction(actiond);
        menu->addAction(actionprofio);
        menu->addAction(actionsettings);
        menu->addAction(actionsellerpage);
        menu->addAction(action);

        retranslateUi(MainWindow);

        page->setCurrentIndex(7);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actiond->setText(QCoreApplication::translate("MainWindow", "\351\246\226\351\240\201", nullptr));
        actionprofio->setText(QCoreApplication::translate("MainWindow", "\345\200\213\344\272\272\350\263\207\346\226\231", nullptr));
        actionsettings->setText(QCoreApplication::translate("MainWindow", "\350\250\255\345\256\232", nullptr));
        actionsellerpage->setText(QCoreApplication::translate("MainWindow", "\350\263\243\345\256\266\351\240\201\351\235\242", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\207\272", nullptr));
        toLogin->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\347\231\273\345\205\245", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\351\202\204\346\262\222\346\234\211\345\270\263\350\231\237\345\227\216\357\274\237", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\242\274", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\270\263\350\231\237", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\205\245", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\345\273\272\347\253\213\346\226\260\345\270\263\350\231\237", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\345\277\230\350\250\230\345\257\206\347\242\274?", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\273\272\347\253\213\346\226\260\345\270\263\350\231\237", nullptr));
        label_18->setText(QString());
        createAccount->setText(QCoreApplication::translate("MainWindow", "\345\273\272\347\253\213!", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\347\256\227\344\272\206", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\350\274\270\345\205\245\345\257\206\347\242\274", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\206\215\346\254\241\350\274\270\345\205\245\345\257\206\347\242\274", nullptr));
        nicknameCreate_label->setText(QCoreApplication::translate("MainWindow", "\346\232\261\347\250\261", nullptr));
        label_10->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\350\274\270\345\205\245\345\270\263\350\231\237", nullptr));
        warning->setText(QString());
        show_product_homelabel->setText(QString());
        groupBox_3->setTitle(QString());
        show_productInfo_homelabel->setText(QString());
        label_14->setText(QCoreApplication::translate("MainWindow", "all products:", nullptr));
        buy_button->setText(QCoreApplication::translate("MainWindow", "\350\263\274\350\262\267", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\351\226\213\351\200\232\350\263\243\345\256\266", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\345\270\263\350\231\237\346\210\226\345\257\206\347\242\274\351\214\257\350\252\244!", nullptr));
        ceate_account->setText(QCoreApplication::translate("MainWindow", "\350\250\273\345\206\212\346\226\260\345\270\263\345\270\263?", nullptr));
        loginhuh->setText(QCoreApplication::translate("MainWindow", "\351\207\215\346\226\260\347\231\273\345\205\245", nullptr));
        uploaproduct_button->setText(QCoreApplication::translate("MainWindow", "\344\270\212\346\236\266\345\225\206\345\223\201", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\346\202\250\347\232\204\345\205\250\351\203\250\347\224\242\345\223\201:", nullptr));
        groupBox_4->setTitle(QString());
        show_productInfo_homelabel_2->setText(QString());
        show_product_homelabel_2->setText(QString());
        productname_label->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\345\220\215", nullptr));
        producttype_label->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\347\250\256\351\241\236", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\203\271\345\203\271\346\240\274   $", nullptr));
        productupload_type->setItemText(0, QCoreApplication::translate("MainWindow", "\351\272\273\351\241\236", nullptr));
        productupload_type->setItemText(1, QCoreApplication::translate("MainWindow", "\350\241\243\351\243\276", nullptr));
        productupload_type->setItemText(2, QCoreApplication::translate("MainWindow", "\351\243\237\345\223\201", nullptr));
        productupload_type->setItemText(3, QCoreApplication::translate("MainWindow", "3C\347\224\242\345\223\201", nullptr));
        productupload_type->setItemText(4, QCoreApplication::translate("MainWindow", "\345\256\266\344\277\261", nullptr));
        productupload_type->setItemText(5, QCoreApplication::translate("MainWindow", "\347\216\251\345\205\267", nullptr));
        productupload_type->setItemText(6, QCoreApplication::translate("MainWindow", "\346\244\215\347\211\251\357\274\214\346\244\215\347\211\251\347\224\250\345\205\267", nullptr));
        productupload_type->setItemText(7, QCoreApplication::translate("MainWindow", "\345\213\225\347\211\251\357\274\214\345\213\225\347\211\251\347\224\250\345\205\267", nullptr));

        label_9->setText(QCoreApplication::translate("MainWindow", "$0", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "$10000000000", nullptr));
        upload_button->setText(QCoreApplication::translate("MainWindow", "\344\270\212\346\236\266!", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\346\225\270\351\207\217", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\346\217\217\350\277\260", nullptr));
        upload_productpicture_button->setText(QCoreApplication::translate("MainWindow", "\344\270\212\345\202\263\345\225\206\345\223\201\347\205\247\347\211\207", nullptr));
        show_upload_pic->setText(QString());
        show_image_text->setText(QString());
        menu->setTitle(QCoreApplication::translate("MainWindow", "PAGE", nullptr));
        menug->setTitle(QCoreApplication::translate("MainWindow", "g", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
