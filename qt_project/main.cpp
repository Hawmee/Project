#include "mainwindow.h"
#include <QApplication>
#include<QSplashScreen>
#include<QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen *slpash=new QSplashScreen;
    slpash->setPixmap(QPixmap(":/ressource/img/logo1.jpg"));
     slpash->show();
    MainWindow w;
    QTimer::singleShot(2500,slpash,SLOT(close()));
     QTimer::singleShot(2500,&w,SLOT(show()));
   // w.show();

    return a.exec();
}
