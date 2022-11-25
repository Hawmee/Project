#include "facture.h"
#include "ui_facture.h"
#include "mainwindow.h"
#include <QMessageBox>
#include<QString>
#include<QTextEdit>
#include<voirfacture.h>

facture::facture(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::facture)
{
    ui->setupUi(this);
    tab0=ui->tableView;
    tab00=ui->tableView_2;
}

facture::~facture()
{
    delete ui;
}

void facture::on_commandLinkButton_clicked()
{
    close();
}

void facture::on_pushButton_clicked()
{
    QString numclient;
    numclient=ui->lineEdit_numclient->text();
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery * Qry=new QSqlQuery();
    Qry->prepare("SELECT * FROM client  WHERE numclient LIKE '"+numclient+"'");
    if(numclient==""){
        QMessageBox::critical(this,tr("Erreur"),tr("Erreur vous devez entrrer un numero"));
    }
    else{
        Qry->exec();
        modal->setQuery(*Qry);
        tab0->setModel(modal);

    }
}


void facture::on_pushButton_2_clicked()
{
    QString numproduit;
    numproduit=ui->lineEdit_numprod->text();
    QString numclient;
    numclient=ui->lineEdit_numprod->text();
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery * Qry=new QSqlQuery();
    Qry->prepare("SELECT * FROM produit  WHERE numproduit LIKE '"+numclient+"'");
    if(numclient==""){
        QMessageBox::critical(this,tr("Erreur"),tr("Erreur vous devez entrrer un numero"));
    }
    else{
        Qry->exec();
        modal->setQuery(*Qry);
        tab00->setModel(modal);

    }
}


void facture::on_pushButton_go_to_modclient_clicked()
{
    cl= new client(this);
    cl->show();
}


void facture::on_pushButton_gotomod_produit_clicked()
{
    prod= new produit(this);
    prod->show();
}



void facture::on_pushButton_3_clicked()
{
    QString numclient;
    numclient=ui->lineEdit_numclient->text();

    connOpen();
    QSqlQuery qry;
    qry.prepare(" DELETE FROM client WHERE numclient='"+numclient+"'");

    if(qry.exec()){
        QMessageBox::information(this,tr("Supprimer"),tr("client supprimer"));
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
     QSqlQuery Qry;
    Qry.prepare(" DELETE FROM commande  WHERE numclient='"+numclient+"'");
    if(Qry.exec()){
        QMessageBox::information(this,tr("Supprimer"),tr("client supprimer"));
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
}


void facture::on_pushButton_6_clicked()
{
    QString numprod;
    numprod=ui->lineEdit_numprod->text();

    connOpen();
    QSqlQuery qry;
    qry.prepare(" DELETE FROM produit WHERE numproduit='"+numprod+"'");
    if(numprod==""){
        QMessageBox::critical(this,tr("ERREUR"),tr("aucun element selectioner"));
    }
    else if(qry.exec()){
        QMessageBox::information(this,tr("Supprimer"),tr("produit supprimer"));
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
}


void facture::on_commandLinkButton_3_clicked()
{
    close();
}


void facture::on_commandLinkButton_save_facture_clicked()
{
    QString numclient,nomclient,nomprod,aff,date,qtecomm,pu,montant,numfact;
    date=ui->dateEdit->date().toString();
    int nb1=ui->lineEdit_puprod->text().toInt();
    int nb2=ui->spinBox_qte->text().toInt();
    int nb3=nb1 * nb2 ;
    int nb;
    nb= 1;
    aff=QString::number(nb);
    montant=QString::number(nb3);
    numclient=ui->lineEdit_numclient->text();
    nomclient=ui->lineEdit_nomclient_2->text();
    numfact=ui->lineEdit_numfact->text();
    qtecomm=ui->spinBox_qte->text();
    pu=ui->lineEdit_puprod->text();
    nomprod=ui->lineEdit_nomprod->text();
    connOpen();
    QSqlQuery qry;
    qry.prepare("INSERT INTO facture (numfact,numclient,nomclient,nomprod,pu,qtcommande,montant,date,affaire) VALUES ('"+numfact+"','"+numclient+"','"+nomclient+"','"+nomprod+"','"+pu+"','"+qtecomm+"','"+montant+"','"+date+"',"+aff+")");
    if(verifycommande(nomprod)==true){
        if(numfact==""){
            QMessageBox::information(this,tr("Edit"),tr("le numero de la facture ne doit pas etre vide "));
        }
        else if(numclient==""){
            QMessageBox::information(this,tr("Edit"),tr("le nom du client ne doit pas etre vide "));
        }
        else if(nomclient==""){
            QMessageBox::information(this,tr("Edit"),tr("le num du client ne doit pas etre vide "));
        }
        else{
            qry.exec();
            QMessageBox::information(this,tr("Edit"),tr("facture enregistrer"));
        }
    }

   else{
        QMessageBox::critical(this,tr("Error::"),tr("nom du produit non existant"));
  }
}
//,'""'///,
void facture::on_commandLinkButton_4_clicked()
{
    voirfacture * frmvoirfacture=new voirfacture;
    frmvoirfacture->show();
}

