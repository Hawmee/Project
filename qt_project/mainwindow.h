#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "client.h"
#include "produit.h"
#include "commandes.h"
#include "facture.h"
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>
#include<QTableView>
#include<chiffreaffaire.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public:
    QSqlDatabase mydb;
    QTableView *tab;

    void connclose(){
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    void connOpen()
    {
        mydb=QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/Users/user/Desktop/projet qt (by LAG)/qt_project/mydatabase.db");

                if(mydb.open()){
                    qDebug()<<"Connected";                }
                else{
                    QMessageBox::warning(this,tr("BUG"),mydb.lastError().text());
                }
    }
    void showtable(QString table ,QTableView *tab){
        QSqlQueryModel * modal = new QSqlQueryModel();
        QSqlQuery * Qry=new QSqlQuery();
        Qry->exec();
        modal->setQuery(*Qry);
        tab->setModel(modal);
    }
private slots:
    void on_btnch_clicked();
private:
    Ui::MainWindow *ui;
    client *cl ;
    produit *prod ;
    commandes *comm ;
    facture *fact ;
    chiffreaffaire *aff;
};

#endif // MAINWINDOW_H
