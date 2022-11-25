#include "chiffreaffaire.h"
#include "ui_chiffreaffaire.h"

chiffreaffaire::chiffreaffaire(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::chiffreaffaire)
{
    ui->setupUi(this);
    tab=ui->tableView;
    ui->spinBox->setMaximum(3000);
}

chiffreaffaire::~chiffreaffaire()
{
    delete ui;
}

void chiffreaffaire::on_commandLinkButton_clicked()
{
    this->close();
}


void chiffreaffaire::on_pushButton_affiche_affaire_clicked()
{
 QDate jour1,jour2;
 int years;
 years = ui->spinBox->value();
 jour1.setDate(years,1,1);
 jour2.setDate(years,31,12);
// QSqlQuery qry;
// qry.prepare("SELECT SUM(affaire) AS chiffre_daffaire numclient,nomclient,date,affaire FROM facture WHERE date BETWEEN ':jour1' AND ':jour2'");
//             qry.bindValue(":jour1",jour1);
//             qry.bindValue(":jour2",jour2);
//             if(years='0'){
//                     QSqlQuery Qry;
//                     Qry.prepare("SELECT SUM(affaire) AS chiffre_daffaire numclient,nomclient,date,affaire FROM commande WHERE date BETWEEN ':date1' AND ':date2'");
//                                 Qry.bindValue(":date1",date1);
//                                 Qry.bindValue(":date2",date2);
//                                 if(Qry.exec())
//                                 {
//                                     qDebug () << "date Afficher";
//                                 }
//                                 else
//                                 {
//                                     qDebug () << " date pas Afficher";
//                                 }}
//             else if(qry.exec())
//             {
//                 qDebug () << "Afficher ";
//             }
//             else
//             {
//                 qDebug () << " pas Afficher";
//             }
 QSqlQueryModel * modale = new QSqlQueryModel();
 QSqlQuery * qrt=new QSqlQuery();
  qrt->prepare("SELECT SUM(affaire) AS chiffre_daffaire  from facture where date>=':jour1' AND date<=':jour2'");
  qrt->exec();
  qrt->bindValue(":jour1",jour1);
   qrt->bindValue(":jour2",jour2);
  if(qrt->exec()){
     modale->setQuery(*qrt);
     ui->tableView->setModel(modale);
 }
 else{

      QMessageBox::critical(this,tr("Erreur"),tr("Erreur chiffre_affaire non trouver "));
 }

}


void chiffreaffaire::on_pushButton_clicked()
{
    QSqlQueryModel * modal = new QSqlQueryModel();
    connOpen();
    QSqlQuery qry;
    qry.prepare("select numclient,nomclient,date,affaire from facture");
    qry.exec();
    modal->setQuery(qry);
    ui->tableView->setModel(modal);
}


void chiffreaffaire::on_pushButton_2_clicked()
{
    QString date1,date2;
    date1=ui->lineEdit->text();
    date2=ui->lineEdit_2->text();
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery * qry=new QSqlQuery();
     qry->prepare("SELECT SUM(affaire) AS chiffre_daffaire  from facture where date between':date1' AND ':date2'");
     qry->exec();
     qry->bindValue(":date1",date1);
      qry->bindValue(":date2",date2);
     if(qry->exec()){
        modal->setQuery(*qry);
        ui->tableView->setModel(modal);
    }
    else{

         QMessageBox::critical(this,tr("Erreur"),tr("Erreur chiffre_affaire non trouver "));
    }

   }

