#ifndef FACTURE_H
#define FACTURE_H
#include <QtSql>
#include <QDebug>
#include<QSqlQuery>
#include <QFileInfo>
#include <QTableView>
#include<QMessageBox>
#include "client.h"
#include "produit.h"
#include "commandes.h"
#include<chiffreaffaire.h>

#include <QDialog>

namespace Ui {
class facture;
}

class facture : public QDialog
{
    Q_OBJECT

public:
    explicit facture(QWidget *parent = nullptr);
    ~facture();
     QTableView *tab0;
        QTableView *tab00;
         QSqlDatabase mydb;
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
        bool verifycommande(QString val)
        {
            QSqlQuery search;
            search.prepare("SELECT * FROM produit WHERE desing='"+val+"' ");
            if(search.exec()){
                int i=0 ;
                while (search.next()) {
                    i++;
                }
                if(i==1){
                    return true;
                }
                if(i<1){
                    return false;
                }
            }

        }


private slots:
    void on_commandLinkButton_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_go_to_modclient_clicked();

    void on_pushButton_gotomod_produit_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_commandLinkButton_3_clicked();

    void on_commandLinkButton_save_facture_clicked();

    void on_commandLinkButton_4_clicked();

private:
    Ui::facture *ui;
    client *cl ;
    produit *prod ;
    commandes *comm ;
    facture *fact ;
    chiffreaffaire *aff;

};

#endif // FACTURE_H
