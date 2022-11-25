#ifndef COMMANDES_H
#define COMMANDES_H
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QTableView>
#include<QMessageBox>
#include <QDialog>
#include<QLabel>

namespace Ui {
class commandes;
}

class commandes : public QDialog
{
    Q_OBJECT

public:
    explicit commandes(QWidget *parent = nullptr);
    ~commandes();
    QSqlDatabase mydb;
    QTableView *tab3;
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
    void showtable(QString table,QTableView *tab3){
        QSqlQueryModel * modal = new QSqlQueryModel();
        QSqlQuery * Qry=new QSqlQuery();
        Qry->exec("SELECT * FROM '"+table+"'");
        modal->setQuery(*Qry);
        tab3->setModel(modal);
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
    void verifychampvide(QString champ,QLabel *sortie){
        if(champ=="")
        {
            sortie->setText("completer s'il vous plait");
        }
        else{
             sortie->setText("");
        }
    }

private slots:
    void on_commandLinkButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_addcommande_clicked();

    void on_pushButton_modcommande_clicked();

    void on_pushButton_supcommande_clicked();

    void on_pushButton_5_clicked();

    void on_lineEdit_numclient_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::commandes *ui;

};

#endif // COMMANDES_H
