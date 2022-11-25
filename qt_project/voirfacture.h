#ifndef VOIRFACTURE_H
#define VOIRFACTURE_H
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QTableView>
#include<QMessageBox>
#include <QDialog>

#include <QMainWindow>


namespace Ui {
class voirfacture;
}

class voirfacture : public QMainWindow
{
    Q_OBJECT

public:
    explicit voirfacture(QWidget *parent = nullptr);
    ~voirfacture();
    QSqlDatabase mydb;
    QTableView *tab;
    QTableView *tab1;

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
    void showtable(QString table,QTableView *tab)
    {
        QSqlQueryModel * modal = new QSqlQueryModel();
        QSqlQuery * Qry=new QSqlQuery();
        Qry->exec("SELECT * FROM '"+table+"'");
        modal->setQuery(*Qry);
        tab->setModel(modal);
    }

private slots:
    void on_pushButton_clicked();


    void on_pushButton_recherchfact_clicked();

    void on_pushButton_showallfact_clicked();

    void on_commandLinkButton_quit_clicked();

    void on_commandLinkButton_supfact_clicked();

    void on_commandLinkButton_supfact_clicked(bool checked);

private:
    Ui::voirfacture *ui;
};

#endif // VOIRFACTURE_H
