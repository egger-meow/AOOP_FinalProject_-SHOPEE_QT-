QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Include paths for organized directory structure
INCLUDEPATH += include

SOURCES += \
    src/account.cpp \
    src/boss.cpp \
    src/buyer.cpp \
    src/main.cpp \
    src/mainwindow.cpp \
    src/product.cpp \
    src/productbutton.cpp \
    src/seller.cpp \
    src/uploadproduct.cpp

HEADERS += \
    include/account.h \
    include/account_procession.h \
    include/boss.h \
    include/buyer.h \
    include/mainwindow.h \
    include/product.h \
    include/productbutton.h \
    include/seller.h \
    include/uploadproduct.h

FORMS += \
    ui/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
