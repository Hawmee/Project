#include "commandes.h"
#include "ui_commandes.h"

commandes::commandes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::commandes)
{
    ui->setupUi(this);
    tab3=ui->tableView_3;
    tab0=ui->tableViewcomm;
}

commandes::~commandes()
{
    delete ui;
}

void commandes::on_commandLinkButton_clicked()
{
    close();
}

void commandes::on_pushButton_4_clicked()
{
    showtable("commande",tab3);
}


void commandes::on_pushButton_addcommande_clicked()
{
    QString numclient,nomproduit,qtecommande,date,numproduit,nomclient;
//    int Qtcomm=ui->lineEdit_qtecommande->text().toInt();
//    int stckini=1000000;
    numclient=ui->lineEdit_numclient->text();
    nomproduit=ui->lineEdit_nomproduit->text();
    qtecommande=ui->lineEdit_qtecommande->text();
    date=ui->dateEdit_commade->text();

    connOpen();
    QSqlQuery qry;
    qry.prepare("INSERT INTO commande(numclient,nomproduit,qtecommandeé,datecommande) VALUES ('"+numclient+"','"+nomproduit+"','"+qtecommande+"','"+date+"')");

    if(verifycommande(nomproduit)== true){
        if(numclient==""){
             QMessageBox::critical(this,tr("Erreur"),tr("nom du client ne doit pas etre vide"));
        }
        else if(qry.exec())
        {
            QMessageBox::information(this,tr("Edit"),tr("commande enregistrer"));
        }
        else{
            QMessageBox::critical(this,tr("Erreur"),tr("commande non enregistrer"));
        }
    }
     else{
        QMessageBox::critical(this,tr("Error::"),tr("produit non existant "));
    }
}


void commandes::on_pushButton_modcommande_clicked()
{
    QString numclient,nomproduit,qtecommande,date;
    numclient=ui->lineEdit_numclient->text();
    nomproduit=ui->lineEdit_nomproduit->text();
    qtecommande=ui->lineEdit_qtecommande->text();
    date=ui->dateEdit_commade->date().toString();

    connOpen();
    QSqlQuery qry2;
    qry2.exec("UPDATE commande SET numclient='"+numclient+"',nomproduit='"+nomproduit+"',qtecommandeé='"+qtecommande+"',datecommande='"+date+"' WHERE numclient='"+numclient+"'");
    if(numclient==""){
         QMessageBox::critical(this,tr("Error::"),tr("client non sectioner"));
    }
    else if(qry2.exec()){
         QMessageBox::information(this,tr("Edit"),tr("commande modifier"));
    }
    else{
        QMessageBox::critical(this,tr("Error::"),qry2.lastError().text());
    }
}


void commandes::on_pushButton_supcommande_clicked()
{
    QString numclient;
    numclient=ui->lineEdit_numclient->text();

    connOpen();
    QSqlQuery Qry;
    Qry.prepare(" DELETE FROM commande  WHERE numclient='"+numclient+"'");
    if(Qry.exec()){
        QMessageBox::critical(this,tr("Supprimer"),tr("client supprimer"));
    }
    else{
        QMessageBox::critical(this,tr("Error::"),Qry.lastError().text());
    }
}


void commandes::on_pushButton_5_clicked()
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


