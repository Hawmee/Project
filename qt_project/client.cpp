#include "client.h"
#include "ui_client.h"
#include "mainwindow.h"
#include <QMessageBox>
#include<QString>
#include<QTextEdit>
client::client(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::client)
{
    ui->setupUi(this);
    tab=ui->tableView;
    tab0=ui->tableView_numclient;
}

client::~client()
{
    delete ui;



}

void client::on_commandLinkButton_clicked()
{
    close();
}

void client::on_pushButton_4_clicked()
{

}


void client::on_pushButton_clicked()
{

}


void client::on_pushButton_reponsnumclient_clicked()
{
    QString numclient;
    numclient=ui->lineEdit_numclient->text();
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery * Qry=new QSqlQuery();
    Qry->prepare("SELECT * FROM client  WHERE numclient LIKE '"+numclient+"'");
    if(numclient==""){
        QMessageBox::critical(this,tr("Erreur"),tr("Erreur vous devez entrrer un numero"));
    }

    else if(!Qry->isValid()){

        Qry->exec();
        modal->setQuery(*Qry);
        tab0->setModel(modal);

    }
    else{

         QMessageBox::critical(this,tr("Erreur"),tr("Erreur client non trouver "));
    }

}


void client::on_pushButton_afficheliste_clicked()
{
    showtable("client",tab);

}


void client::on_pushButton_clientmodif_clicked()
{
    QString numclient,nomclient;
    numclient=ui->lineEdit_numclient->text();
    nomclient=ui->lineEdit_nomclient->text();

    connOpen();
    QSqlQuery qry;
    qry.prepare("update client set numclient='"+numclient+"',nomclient='"+nomclient+"'WHERE numclient='"+numclient+"'");

    if(qry.exec()){
        QMessageBox::information(this,tr("Edit"),tr("client modifier"));
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
        QSqlQuery qry2;
        qry2.exec("UPDATE commande SET numclient='"+numclient+",' WHERE numclient='"+numclient+"'");

    }
}

void client::on_pushButton_creatclient_clicked()
{
    QString numclient,nomclient,nomproduit,qte,date;
    numclient=ui->lineEdit_numclient->text();
    nomclient=ui->lineEdit_nomclient->text();

    connOpen();
    QSqlQuery qry;
    qry.prepare("INSERT INTO client (numclient,nomclient) VALUES ('"+numclient+"','"+nomclient+"')");
    if(numclient==""){
        QMessageBox::critical(this,tr("Erreur"),tr("Erreur vous devez entrrer un numero"));
    }
    else if( (nomclient=="")){
        QMessageBox::critical(this,tr("Erreur"),tr("Erreur vous devez entrrer un nom"));
    }
    else if(qry.exec()){
        QMessageBox::information(this,tr("save"),tr("enregistrer"));
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
    QSqlQuery qry3;
    qry3.prepare("INSERT INTO Affaire (numclient,nomclient) VALUES ('"+numclient+"','"+nomclient+"')");
    if(numclient==""){
        QMessageBox::critical(this,tr("Erreur"),tr("Erreur vous devez entrrer un numero"));
    }
    else if( (nomclient=="")){
        QMessageBox::critical(this,tr("Erreur"),tr("Erreur vous devez entrrer un nom"));
    }
    else if(qry3.exec()){
        QMessageBox::information(this,tr("save"),tr("saved"));
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry3.lastError().text());
    }
}


void client::on_pushButton_pushButton_supclient_clicked()
{
    QString numclient;
    numclient=ui->lineEdit_numclient->text();

    connOpen();
    QSqlQuery qry;
    QSqlQuery qry1;
    qry1.exec(" DELETE FROM affaire WHERE numclient='"+numclient+"'");
    QSqlQuery qry2;
    qry2.exec(" DELETE FROM commande WHERE numclient='"+numclient+"'");
    QSqlQuery qry3;
    qry3.exec(" DELETE FROM facture WHERE numclient='"+numclient+"'");
    qry.prepare(" DELETE FROM client WHERE numclient='"+numclient+"'");
        if(numclient==""){
            QMessageBox::critical(this,tr("Erreur"),tr("Erreur vous devez entrrerle client a supprimer"));
        }
    else if(qry.exec()){
        QMessageBox::information(this,tr("Supprimer"),tr("client supprimer"));
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }

}

