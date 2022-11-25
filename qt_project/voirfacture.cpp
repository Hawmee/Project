#include "voirfacture.h"
#include "ui_voirfacture.h"


voirfacture::voirfacture(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::voirfacture)
{
    ui->setupUi(this);
    tab=ui->tableView_fact;
    tab1=ui->tableView_totale;
}

voirfacture::~voirfacture()
{
    delete ui;
}


void voirfacture::on_pushButton_recherchfact_clicked()
{
    QString numfact;
    numfact=ui->lineEdit_numfact->text();
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery * Qry=new QSqlQuery();
    Qry->prepare("SELECT numfact,numclient,nomclient,nomprod,pu,qtcommande,montant FROM facture  WHERE numclient LIKE '"+numfact+"'");
    if(numfact==""){
        QMessageBox::critical(this,tr("Erreur"),tr("Erreur vous devez entrrer un numero"));
    }

    else if(Qry->exec()){
        modal->setQuery(*Qry);
        tab->setModel(modal);
    }
    else{

         QMessageBox::critical(this,tr("Erreur"),tr("Erreur facture non trouver "));
    }
    QSqlQueryModel * modale = new QSqlQueryModel();
    QSqlQuery * qrt=new QSqlQuery();
    qrt->prepare("SELECT SUM(montant) AS montant_total  FROM facture WHERE numclient LIKE '"+numfact+"' " ) ;
    if(qrt->exec()){
        modale->setQuery(*qrt);
        tab1->setModel(modale);
    }
    else{

         QMessageBox::critical(this,tr("Erreur"),tr("Erreur total non trouver "));
    }

}


void voirfacture::on_pushButton_showallfact_clicked()
{
    QSqlQueryModel * modal = new QSqlQueryModel();
    connOpen();
    QSqlQuery qry;
    qry.prepare("select numfact,numclient,nomclient,nomprod,pu,qtcommande,montant from facture");
    qry.exec();
    modal->setQuery(qry);
    ui->tableView_fact->setModel(modal);
}


void voirfacture::on_commandLinkButton_quit_clicked()
{
    this->close();
}


void voirfacture::on_commandLinkButton_supfact_clicked()
{
    QString numfact;
    numfact=ui->lineEdit_numfact->text();

    connOpen();
    QSqlQuery qry;
    qry.prepare(" DELETE FROM facture WHERE numclient='"+numfact+"'");
        if(numfact==""){
            QMessageBox::critical(this,tr("Erreur"),tr("Erreur vous devez entrer la facture a supprimer"));
        }
    else if(qry.exec()){
        QMessageBox::information(this,tr("Supprimer"),tr("facture supprimer"));
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }

}

