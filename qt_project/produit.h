#ifndef PRODUIT_H
#define PRODUIT_H
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QTableView>
#include<QMessageBox>
#include <QDialog>

namespace Ui {
class produit;
}

class produit : public QDialog
{
    Q_OBJECT

public:
    explicit produit(QWidget *parent = nullptr);
    ~produit();
    QSqlDatabase mydb;
    QTableView *tab2;
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
    void showtable(QString table,QTableView *tab2){
        QSqlQueryModel * modal = new QSqlQueryModel();
        QSqlQuery * Qry=new QSqlQuery();
        Qry->exec("SELECT * FROM '"+table+"'");
        modal->setQuery(*Qry);
        tab2->setModel(modal);
    }

private slots:
    void on_commandLinkButton_clicked();

    void on_pushButton_recherchprod_clicked();

    void on_pushButton_modprod_clicked();

    void on_pushButton_creatprod_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_supprod_clicked();

    void on_commandLinkButton_2_clicked();

private:
    Ui::produit *ui;
};

#endif // PRODUIT_H
