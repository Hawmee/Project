  #ifndef CLIENT_H
#define CLIENT_H
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QTableView>
#include<QMessageBox>
#include "commandes.h"

#include <QDialog>

namespace Ui {
class client;
}

class client : public QDialog
{
    Q_OBJECT

public:
    explicit client(QWidget *parent = nullptr);
    ~client();
    QSqlDatabase mydb;
    QTableView *tab;
     QTableView *tab0;
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
    void showtable(QString table,QTableView *tab){
        QSqlQueryModel * modal = new QSqlQueryModel();
        QSqlQuery * Qry=new QSqlQuery();
        Qry->exec("SELECT * FROM '"+table+"'");
        modal->setQuery(*Qry);
        tab->setModel(modal);
    }
    void showtab(QString table,QTableView *tab0){
        QSqlQueryModel * modal = new QSqlQueryModel();
        QSqlQuery * Qry=new QSqlQuery();
        Qry->exec("SELECT * FROM '"+table+"'");
        modal->setQuery(*Qry);
        tab0->setModel(modal);
    }

private slots :
    void on_commandLinkButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_reponsnumclient_clicked();

    void on_pushButton_afficheliste_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_clientmodif_clicked();

    void on_pushButton_supclient_clicked();

    void on_pushButton_creatclient_clicked();

    void on_pushButton_pushButton_supclient_clicked();

private:
    Ui::client *ui;
};

#endif // CLIENT_H
