#ifndef CHIFFREAFFAIRE_H
#define CHIFFREAFFAIRE_H
#include <QtSql>
#include <QDebug>
#include<QSqlQuery>
#include <QFileInfo>
#include <QTableView>
#include<QMessageBox>
#include <QMainWindow>

namespace Ui {
class chiffreaffaire;
}

class chiffreaffaire : public QMainWindow
{
    Q_OBJECT

public:
    explicit chiffreaffaire(QWidget *parent = nullptr);
    ~chiffreaffaire();
    QTableView *tab;
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
       void showtab(QString table,QTableView *tab){
           QSqlQueryModel * modal = new QSqlQueryModel();
           QSqlQuery * Qry=new QSqlQuery();
           Qry->exec("SELECT * FROM '"+table+"'");
           modal->setQuery(*Qry);
           tab->setModel(modal);
       }

private slots:
    void on_commandLinkButton_clicked();

    void on_pushButton_affiche_affaire_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::chiffreaffaire *ui;
};

#endif // CHIFFREAFFAIRE_H
