/********************************************************************************
** Form generated from reading UI file 'facture.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACTURE_H
#define UI_FACTURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_facture
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QLineEdit *lineEdit_numfact;
    QLabel *label_8;
    QDateEdit *dateEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_numclient;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QTableView *tableView;
    QLabel *label_10;
    QLineEdit *lineEdit_nomclient_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_go_to_modclient;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_4;
    QCommandLinkButton *commandLinkButton_save_facture;
    QCommandLinkButton *commandLinkButton_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_numprod;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QTableView *tableView_2;
    QLabel *label_11;
    QLineEdit *lineEdit_nomprod;
    QLabel *label_7;
    QLineEdit *lineEdit_puprod;
    QLabel *label_6;
    QLineEdit *spinBox_qte;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_gotomod_produit;
    QPushButton *pushButton_6;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QCommandLinkButton *commandLinkButton_4;

    void setupUi(QDialog *facture)
    {
        if (facture->objectName().isEmpty())
            facture->setObjectName(QString::fromUtf8("facture"));
        facture->resize(1133, 743);
        facture->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(facture);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_9 = new QLabel(facture);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("font-size:20px;background:transparent;\n"
"color:black;"));

        verticalLayout->addWidget(label_9);

        lineEdit_numfact = new QLineEdit(facture);
        lineEdit_numfact->setObjectName(QString::fromUtf8("lineEdit_numfact"));
        lineEdit_numfact->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:black;font-size:20px;"));

        verticalLayout->addWidget(lineEdit_numfact);

        label_8 = new QLabel(facture);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("font-size:20px;background:transparent;\n"
"color:black;"));

        verticalLayout->addWidget(label_8);

        dateEdit = new QDateEdit(facture);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setStyleSheet(QString::fromUtf8("font-size:20px;"));

        verticalLayout->addWidget(dateEdit);

        label_2 = new QLabel(facture);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font-size:20px;background:transparent;\n"
"color:black;"));

        verticalLayout->addWidget(label_2);

        lineEdit_numclient = new QLineEdit(facture);
        lineEdit_numclient->setObjectName(QString::fromUtf8("lineEdit_numclient"));
        lineEdit_numclient->setStyleSheet(QString::fromUtf8("font-size:20px;background:transparent;\n"
"color:black;"));

        verticalLayout->addWidget(lineEdit_numclient);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton = new QPushButton(facture);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;"));

        verticalLayout_2->addWidget(pushButton);

        label_3 = new QLabel(facture);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font-size:20px;background:transparent;\n"
"color:black;"));

        verticalLayout_2->addWidget(label_3);

        tableView = new QTableView(facture);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setStyleSheet(QString::fromUtf8("font-size:20px;font-size:20px;background-color: rgb(238, 238, 238);\n"
"color:black;"));
        tableView->setSelectionBehavior(QAbstractItemView::SelectItems);

        verticalLayout_2->addWidget(tableView);

        label_10 = new QLabel(facture);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("font-size:20px;background:transparent;\n"
"color:black;"));

        verticalLayout_2->addWidget(label_10);

        lineEdit_nomclient_2 = new QLineEdit(facture);
        lineEdit_nomclient_2->setObjectName(QString::fromUtf8("lineEdit_nomclient_2"));
        lineEdit_nomclient_2->setStyleSheet(QString::fromUtf8("font-size:20px;background:transparent;\n"
"color:black;"));

        verticalLayout_2->addWidget(lineEdit_nomclient_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_go_to_modclient = new QPushButton(facture);
        pushButton_go_to_modclient->setObjectName(QString::fromUtf8("pushButton_go_to_modclient"));
        pushButton_go_to_modclient->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;"));

        horizontalLayout_2->addWidget(pushButton_go_to_modclient);

        pushButton_3 = new QPushButton(facture);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;"));

        horizontalLayout_2->addWidget(pushButton_3);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        commandLinkButton_save_facture = new QCommandLinkButton(facture);
        commandLinkButton_save_facture->setObjectName(QString::fromUtf8("commandLinkButton_save_facture"));
        commandLinkButton_save_facture->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;"));

        horizontalLayout_4->addWidget(commandLinkButton_save_facture);

        commandLinkButton_3 = new QCommandLinkButton(facture);
        commandLinkButton_3->setObjectName(QString::fromUtf8("commandLinkButton_3"));
        commandLinkButton_3->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;"));

        horizontalLayout_4->addWidget(commandLinkButton_3);


        gridLayout->addLayout(horizontalLayout_4, 2, 0, 1, 3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(facture);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font-size:20px;background:transparent;\n"
"color:black;"));

        verticalLayout_4->addWidget(label_4);

        lineEdit_numprod = new QLineEdit(facture);
        lineEdit_numprod->setObjectName(QString::fromUtf8("lineEdit_numprod"));
        lineEdit_numprod->setStyleSheet(QString::fromUtf8("font-size:20px;background:transparent;\n"
"color:black;"));

        verticalLayout_4->addWidget(lineEdit_numprod);

        pushButton_2 = new QPushButton(facture);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;"));

        verticalLayout_4->addWidget(pushButton_2);

        label_5 = new QLabel(facture);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font-size:20px;background:transparent;\n"
"color:black;"));

        verticalLayout_4->addWidget(label_5);

        tableView_2 = new QTableView(facture);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
"color:black;font-size:20px;"));

        verticalLayout_4->addWidget(tableView_2);

        label_11 = new QLabel(facture);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:black;font-size:20px;"));

        verticalLayout_4->addWidget(label_11);

        lineEdit_nomprod = new QLineEdit(facture);
        lineEdit_nomprod->setObjectName(QString::fromUtf8("lineEdit_nomprod"));
        lineEdit_nomprod->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:black;font-size:20px;"));

        verticalLayout_4->addWidget(lineEdit_nomprod);

        label_7 = new QLabel(facture);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:black;font-size:20px;"));

        verticalLayout_4->addWidget(label_7);

        lineEdit_puprod = new QLineEdit(facture);
        lineEdit_puprod->setObjectName(QString::fromUtf8("lineEdit_puprod"));
        lineEdit_puprod->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:black;font-size:20px;"));

        verticalLayout_4->addWidget(lineEdit_puprod);

        label_6 = new QLabel(facture);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:black;font-size:20px;"));

        verticalLayout_4->addWidget(label_6);

        spinBox_qte = new QLineEdit(facture);
        spinBox_qte->setObjectName(QString::fromUtf8("spinBox_qte"));
        spinBox_qte->setStyleSheet(QString::fromUtf8("font-size:20px;background:transparent;\n"
"color:black;"));

        verticalLayout_4->addWidget(spinBox_qte);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_gotomod_produit = new QPushButton(facture);
        pushButton_gotomod_produit->setObjectName(QString::fromUtf8("pushButton_gotomod_produit"));
        pushButton_gotomod_produit->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;"));

        horizontalLayout_3->addWidget(pushButton_gotomod_produit);

        pushButton_6 = new QPushButton(facture);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;"));

        horizontalLayout_3->addWidget(pushButton_6);


        verticalLayout_4->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout_4, 1, 2, 1, 1);

        line_4 = new QFrame(facture);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(facture);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("\n"
"*{\n"
"font: 8pt \"MV Boli\";\n"
"\n"
"font-size:35px;\n"
"color: black;\n"
"border-radius:0px;\n"
"}"));

        horizontalLayout->addWidget(label);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 3);

        commandLinkButton_4 = new QCommandLinkButton(facture);
        commandLinkButton_4->setObjectName(QString::fromUtf8("commandLinkButton_4"));
        commandLinkButton_4->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;"));

        gridLayout->addWidget(commandLinkButton_4, 3, 0, 1, 2);


        retranslateUi(facture);

        QMetaObject::connectSlotsByName(facture);
    } // setupUi

    void retranslateUi(QDialog *facture)
    {
        facture->setWindowTitle(QApplication::translate("facture", "Dialog", nullptr));
        label_9->setText(QApplication::translate("facture", "Num facture :", nullptr));
        label_8->setText(QApplication::translate("facture", "Date de facturation (mois-jour-annee):", nullptr));
        label_2->setText(QApplication::translate("facture", "Num client :", nullptr));
        pushButton->setText(QApplication::translate("facture", "rechercher", nullptr));
        label_3->setText(QApplication::translate("facture", "Resultat du recherche :", nullptr));
        label_10->setText(QApplication::translate("facture", "Nom du client trouv\303\251e :", nullptr));
        pushButton_go_to_modclient->setText(QApplication::translate("facture", "Modifier/creer", nullptr));
        pushButton_3->setText(QApplication::translate("facture", "supprimer", nullptr));
        commandLinkButton_save_facture->setText(QApplication::translate("facture", "Enregister", nullptr));
        commandLinkButton_3->setText(QApplication::translate("facture", "Fin", nullptr));
        label_4->setText(QApplication::translate("facture", "Num produit :", nullptr));
        pushButton_2->setText(QApplication::translate("facture", "Rechercher", nullptr));
        label_5->setText(QApplication::translate("facture", "resultat du recherche :", nullptr));
        label_11->setText(QApplication::translate("facture", "Nom du produit trouv\303\251e:", nullptr));
        label_7->setText(QApplication::translate("facture", "Pu du produit :", nullptr));
        label_6->setText(QApplication::translate("facture", "Qte\303\251 commande\303\251", nullptr));
        pushButton_gotomod_produit->setText(QApplication::translate("facture", "Modifier/creer", nullptr));
        pushButton_6->setText(QApplication::translate("facture", "supprimer", nullptr));
        label->setText(QApplication::translate("facture", "                            Edition d une facture", nullptr));
        commandLinkButton_4->setText(QApplication::translate("facture", "voir la facture du client", nullptr));
    } // retranslateUi

};

namespace Ui {
    class facture: public Ui_facture {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTURE_H
