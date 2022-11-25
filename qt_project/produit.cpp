#include "produit.h"
#include "ui_produit.h"
#include<QString>
produit::produit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::produit)
{
    ui->setupUi(this);
    tab2=ui->tableViewprod;
    tab0=ui->tableview0;
}

produit::~produit()
{
    delete ui;
}

void produit::on_commandLinkButton_clicked()
{
    close();
}

void produit::on_pushButton_recherchprod_clicked()
{
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
        tab0->setModel(modal);

    }


}


void produit::on_pushButton_modprod_clicked()
{
    QString numprod,nomprod,pu,stkini;
    numprod=ui->lineEdit_numprod->text();
    nomprod=ui->lineEdit_nomprod->text();
    pu=ui->lineEdit_pu->text();
    stkini=ui->lineEdit_stkini->text();

    connOpen();
    QSqlQuery qry;
    qry.prepare("update produit set numproduit='"+numprod+"',desing='"+nomprod+"',PU='"+pu+"',stockinit='"+stkini+"'WHERE numproduit='"+numprod+"'");

    if(qry.exec()){
        QMessageBox::information(this,tr("Edit"),tr("client modifier"));
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
}


void produit::on_pushButton_creatprod_clicked()
{
    QString numprod,nomprod,pu,stkini;
    numprod=ui->lineEdit_numprod->text();
    nomprod=ui->lineEdit_nomprod->text();
    pu=ui->lineEdit_pu->text();
    stkini=ui->lineEdit_stkini->text();

    connOpen();
    QSqlQuery qry;
    qry.prepare("INSERT INTO produit (numproduit,desing,PU,stockinit) VALUES ('"+numprod+"','"+nomprod+"','"+pu+"','"+stkini+"')");
    if(numprod==""){
        QMessageBox::critical(this,tr("Erreur"),tr("Erreur vous devez entrer le num du produit"));
    }
    else if((nomprod=="")==true){
         QMessageBox::critical(this,tr("Erreur"),tr("Erreur vous devez entrer le nom du produit"));
    }
    else if(qry.exec()){
        QMessageBox::information(this,tr("save"),tr("saved"));
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
}

void produit::on_pushButton_5_clicked()
{
    showtable("produit",tab2);
}


void produit::on_pushButton_supprod_clicked()
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
        QMessageBox::critical(this,tr("Supprimer"),tr("produit supprimer"));
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
}


void produit::on_commandLinkButton_2_clicked()
{
    this->close();
}

