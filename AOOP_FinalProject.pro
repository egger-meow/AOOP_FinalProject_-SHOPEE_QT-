QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    account.cpp \
    boss.cpp \
    buyer.cpp \
    main.cpp \
    mainwindow.cpp \
    product.cpp \
    productbutton.cpp \
    seller.cpp \
    uploadproduct.cpp

HEADERS += \
    account.h \
    account_procession.h \
    boss.h \
    buyer.h \
    mainwindow.h \
    product.h \
    productbutton.h \
    seller.h \
    uploadproduct.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
