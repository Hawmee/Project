/********************************************************************************
** Form generated from reading UI file 'commandes.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMANDES_H
#define UI_COMMANDES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_commandes
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_supcommande;
    QPushButton *pushButton_addcommande;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_4;
    QTableView *tableView_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_numclient;
    QPushButton *pushButton_5;
    QLabel *label_3;
    QTableView *tableViewcomm;
    QLabel *label_4;
    QLineEdit *lineEdit_nomproduit;
    QLabel *label_5;
    QLineEdit *lineEdit_qtecommande;
    QLabel *label_6;
    QDateEdit *dateEdit_commade;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_modcommande;
    QVBoxLayout *verticalLayout_6;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *commandes)
    {
        if (commandes->objectName().isEmpty())
            commandes->setObjectName(QString::fromUtf8("commandes"));
        commandes->resize(1160, 671);
        commandes->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout_2 = new QGridLayout(commandes);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(commandes);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("\n"
"*{\n"
"font: 8pt \"MV Boli\";\n"
"font-size:35px;\n"
"color: black;\n"
"border-radius:0px;\n"
"font-size:40px;\n"
" \n"
"}"));

        verticalLayout->addWidget(label);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        pushButton_supcommande = new QPushButton(commandes);
        pushButton_supcommande->setObjectName(QString::fromUtf8("pushButton_supcommande"));
        pushButton_supcommande->setStyleSheet(QString::fromUtf8("font-size:15px;font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;"));

        verticalLayout_5->addWidget(pushButton_supcommande);


        gridLayout_2->addLayout(verticalLayout_5, 3, 1, 1, 1);

        pushButton_addcommande = new QPushButton(commandes);
        pushButton_addcommande->setObjectName(QString::fromUtf8("pushButton_addcommande"));
        pushButton_addcommande->setStyleSheet(QString::fromUtf8("font-size:15px;font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;"));

        gridLayout_2->addWidget(pushButton_addcommande, 3, 0, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        pushButton_4 = new QPushButton(commandes);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("font-size:15px;font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;"));

        verticalLayout_4->addWidget(pushButton_4);


        verticalLayout_3->addLayout(verticalLayout_4);

        tableView_3 = new QTableView(commandes);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));
        tableView_3->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
"font-size:20px;\n"
"color:black;"));

        verticalLayout_3->addWidget(tableView_3);


        gridLayout->addLayout(verticalLayout_3, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(commandes);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font-size:20px;\n"
"color:black;font-size:20px;"));

        verticalLayout_2->addWidget(label_2);

        lineEdit_numclient = new QLineEdit(commandes);
        lineEdit_numclient->setObjectName(QString::fromUtf8("lineEdit_numclient"));
        lineEdit_numclient->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font-size:20px;\n"
"color:black;"));

        verticalLayout_2->addWidget(lineEdit_numclient);

        pushButton_5 = new QPushButton(commandes);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("font-size:15px;font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;"));

        verticalLayout_2->addWidget(pushButton_5);

        label_3 = new QLabel(commandes);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font-size:20px;\n"
"color:black;font-size:20px;"));

        verticalLayout_2->addWidget(label_3);

        tableViewcomm = new QTableView(commandes);
        tableViewcomm->setObjectName(QString::fromUtf8("tableViewcomm"));
        tableViewcomm->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
"font-size:20px;\n"
"color:black;"));

        verticalLayout_2->addWidget(tableViewcomm);

        label_4 = new QLabel(commandes);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font-size:20px;\n"
"color:black;font-size:20px;"));

        verticalLayout_2->addWidget(label_4);

        lineEdit_nomproduit = new QLineEdit(commandes);
        lineEdit_nomproduit->setObjectName(QString::fromUtf8("lineEdit_nomproduit"));
        lineEdit_nomproduit->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font-size:20px;\n"
"color:black;"));

        verticalLayout_2->addWidget(lineEdit_nomproduit);

        label_5 = new QLabel(commandes);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font-size:20px;\n"
"color:black;font-size:20px;"));

        verticalLayout_2->addWidget(label_5);

        lineEdit_qtecommande = new QLineEdit(commandes);
        lineEdit_qtecommande->setObjectName(QString::fromUtf8("lineEdit_qtecommande"));
        lineEdit_qtecommande->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font-size:20px;\n"
"color:black;"));

        verticalLayout_2->addWidget(lineEdit_qtecommande);

        label_6 = new QLabel(commandes);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font-size:20px;\n"
"color:black;font-size:20px;"));

        verticalLayout_2->addWidget(label_6);

        dateEdit_commade = new QDateEdit(commandes);
        dateEdit_commade->setObjectName(QString::fromUtf8("dateEdit_commade"));
        dateEdit_commade->setStyleSheet(QString::fromUtf8("\n"
"font-size:20px;\n"
""));

        verticalLayout_2->addWidget(dateEdit_commade);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        verticalLayout_7->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout_7, 1, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        gridLayout_2->addLayout(horizontalLayout, 2, 1, 1, 1);

        pushButton_modcommande = new QPushButton(commandes);
        pushButton_modcommande->setObjectName(QString::fromUtf8("pushButton_modcommande"));
        pushButton_modcommande->setStyleSheet(QString::fromUtf8("font-size:15px;font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;"));

        gridLayout_2->addWidget(pushButton_modcommande, 4, 0, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        commandLinkButton = new QCommandLinkButton(commandes);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setStyleSheet(QString::fromUtf8("background-color: rgb(207, 207, 207);\n"
"color:black;font-size:20px;"));

        verticalLayout_6->addWidget(commandLinkButton);


        gridLayout_2->addLayout(verticalLayout_6, 4, 1, 1, 1);


        retranslateUi(commandes);

        QMetaObject::connectSlotsByName(commandes);
    } // setupUi

    void retranslateUi(QDialog *commandes)
    {
        commandes->setWindowTitle(QApplication::translate("commandes", "Dialog", nullptr));
        label->setText(QApplication::translate("commandes", "SAISIE DE COMMANDE", nullptr));
        pushButton_supcommande->setText(QApplication::translate("commandes", "Supprimer", nullptr));
        pushButton_addcommande->setText(QApplication::translate("commandes", "Enregistrer", nullptr));
        pushButton_4->setText(QApplication::translate("commandes", "afficher la liste de commande", nullptr));
        label_2->setText(QApplication::translate("commandes", "Numclient : ", nullptr));
        pushButton_5->setText(QApplication::translate("commandes", "rechercher", nullptr));
        label_3->setText(QApplication::translate("commandes", "resultat du recherche :", nullptr));
        label_4->setText(QApplication::translate("commandes", "nom du produit :", nullptr));
        label_5->setText(QApplication::translate("commandes", "Qte commande\303\251", nullptr));
        label_6->setText(QApplication::translate("commandes", "Date de commande", nullptr));
        pushButton_modcommande->setText(QApplication::translate("commandes", "Modifier", nullptr));
        commandLinkButton->setText(QApplication::translate("commandes", "Fin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class commandes: public Ui_commandes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMANDES_H
