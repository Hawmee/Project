#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client.h"
#include "produit.h"
#include "commandes.h"
#include "facture.h"
#include <QMessageBox>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connOpen();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnch_clicked()
{    
    QString choice = ui->lineEdit_choix->text() ;

    if(choice == "1")
   {
        /*client cl ;
        cl.setModal(true);
        cl.exec();*/
        cl= new client(this);
        cl->show();
    }


    else if (choice == "2")
    {
        prod= new produit(this);
        prod->show();
    }


    else if (choice == "3")
    {
        comm = new commandes(this);
        comm->show();
    }


    else if (choice == "4")
    {
        fact = new facture(this);
        fact->show();
    }
    else if (choice == "5")
    {
       aff = new chiffreaffaire(this);
        aff->show();
    }
    else if (choice=="6")
    {
        destroy();
    }
}
