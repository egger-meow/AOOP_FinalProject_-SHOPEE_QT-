#ifndef BOSS_H
#define BOSS_H
#include<qstring.h>
#include<QVector>
#include <QTimer>
#include<QDebug>
#include<QRandomGenerator>
#include<QPixmap>
#include<QDateTime>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlResult>
#include<QBasicTimer>
#include<QKeyEvent>
#include<QFileDialog>
#include<QPixmap>
#include<QImage>

class Boss
{
public:
    Boss();

    QTimer Timer;
    QDateTime current;
private:


};

#endif // BOSS_H
