#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "account_procession.h"
#include "product.h"
#include "account.h"
#include <QMessageBox>
#include "productbutton.h"

struct account_data{
    QString account,password;
    account_data(QString a,QString b):account(a),password(b){};

};

enum pages{
    welocome,
    log_in,
    sign_up,
    login_success,
    profio,
    settings,
    login_fail,
    sellerhome,
    uploadproduct,
    showproducts
};

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow,public Boss
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void guiSetup();
    void connection();
    void on_tohome_clicked();
    void on_toprofio_clicked();
    void on_tosetting_clicked();
    void on_log_out_clicked();
    void dataBaseSetup();
    bool read_account();
    bool read_product();

    void show_products() ;

private slots:
    void on_toLogin_clicked();

    void on_pushButton_clicked();
    void toPage(int);
    void on_loginButton_clicked();

    void on_createAccount_clicked();

    void on_fillPassword_textChanged(const QString &arg1);

    void on_fillPassword_textEdited(const QString &arg1);

    void on_newPassword1_textEdited(const QString &arg1);

    void on_newPassword2_textEdited(const QString &arg1);

    void on_ceate_account_clicked();

    void keyPressEvent(QKeyEvent *e) override;


    bool add_to_account_data(QString a, QString b,QString);
    bool check_if_duplicated_account(QString a);
    bool login_account(QString acc, QString pas);
    bool check_legal_password(QString a);

    void on_actiond_triggered();

    void on_actionprofio_triggered();

    void on_actionsettings_triggered();

    void on_pushButton_2_clicked();

    void on_lineEdit_2_cursorPositionChanged(int arg1, int arg2);

    void on_price_Slider_sliderMoved(int position);

    void on_price_lineEdit_editingFinished();

    void on_actionsellerpage_triggered();

    void on_uploaproduct_button_clicked();

    void on_upload_button_clicked();

    void on_pushButton_3_clicked();



    void on_upload_productpicture_button_clicked();

    void on_home_produts_combobox_currentIndexChanged(int index);


    void on_home_produts_combobox_2_currentIndexChanged(int index);

    void on_buy_button_clicked();



private:
    int countshit;
    Ui::MainWindow *ui;
    QVector<account_data> account_datas;

    QString cur_fillpassword,cur_newpass1,cur_newpass2;
    QMap<QString,Account*> Accounts;
    QMap<int,Product*> Products;
    Account *cur_account;
    QVector<Product*> myProducts ;

    QSqlDatabase database ;
    QSqlDatabase database2 ;

    QSqlQuery* query ;

    QString tempFilePath;

    QRandomGenerator random;
};
#endif // MAINWINDOW_H
