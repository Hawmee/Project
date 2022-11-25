/********************************************************************************
** Form generated from reading UI file 'produit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUIT_H
#define UI_PRODUIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
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

class Ui_produit
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_numprod;
    QPushButton *pushButton_recherchprod;
    QLabel *label_5;
    QTableView *tableview0;
    QPushButton *pushButton_supprod;
    QLabel *label_9;
    QLineEdit *lineEdit_nomprod;
    QLabel *label_2;
    QLineEdit *lineEdit_pu;
    QLabel *label_4;
    QLineEdit *lineEdit_stkini;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_modprod;
    QPushButton *pushButton_creatprod;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_5;
    QLabel *label_6;
    QTableView *tableViewprod;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_3;
    QCommandLinkButton *commandLinkButton_2;

    void setupUi(QDialog *produit)
    {
        if (produit->objectName().isEmpty())
            produit->setObjectName(QString::fromUtf8("produit"));
        produit->resize(974, 686);
        produit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(produit);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(produit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setFamily(QString::fromUtf8("MV Boli"));
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(true);
        font.setWeight(50);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("*{\n"
"font: 8pt \"MV Boli\";\n"
"	background-color: rgb(255, 255, 255);\n"
"font-size:35px;\n"
"color: black;\n"
"border-radius:0px;\n"
"}"));

        horizontalLayout->addWidget(label_3);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(produit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background:transparent;\n"
"color:black;"));

        verticalLayout->addWidget(label);

        lineEdit_numprod = new QLineEdit(produit);
        lineEdit_numprod->setObjectName(QString::fromUtf8("lineEdit_numprod"));
        lineEdit_numprod->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:black;font-size:20px;"));

        verticalLayout->addWidget(lineEdit_numprod);

        pushButton_recherchprod = new QPushButton(produit);
        pushButton_recherchprod->setObjectName(QString::fromUtf8("pushButton_recherchprod"));
        pushButton_recherchprod->setFont(font);
        pushButton_recherchprod->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;"));

        verticalLayout->addWidget(pushButton_recherchprod);

        label_5 = new QLabel(produit);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:black;font-size:20px;"));

        verticalLayout->addWidget(label_5);

        tableview0 = new QTableView(produit);
        tableview0->setObjectName(QString::fromUtf8("tableview0"));
        tableview0->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
"color:black;font-size:15px;"));

        verticalLayout->addWidget(tableview0);

        pushButton_supprod = new QPushButton(produit);
        pushButton_supprod->setObjectName(QString::fromUtf8("pushButton_supprod"));
        pushButton_supprod->setFont(font);
        pushButton_supprod->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;"));

        verticalLayout->addWidget(pushButton_supprod);

        label_9 = new QLabel(produit);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("font-size:20px;background:transparent;\n"
"color:black;"));

        verticalLayout->addWidget(label_9);

        lineEdit_nomprod = new QLineEdit(produit);
        lineEdit_nomprod->setObjectName(QString::fromUtf8("lineEdit_nomprod"));
        lineEdit_nomprod->setFont(font);
        lineEdit_nomprod->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:black;font-size:20px;"));

        verticalLayout->addWidget(lineEdit_nomprod);

        label_2 = new QLabel(produit);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:black;font-size:20px;"));

        verticalLayout->addWidget(label_2);

        lineEdit_pu = new QLineEdit(produit);
        lineEdit_pu->setObjectName(QString::fromUtf8("lineEdit_pu"));
        lineEdit_pu->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:black;font-size:20px;"));

        verticalLayout->addWidget(lineEdit_pu);

        label_4 = new QLabel(produit);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:black;font-size:20px;"));

        verticalLayout->addWidget(label_4);

        lineEdit_stkini = new QLineEdit(produit);
        lineEdit_stkini->setObjectName(QString::fromUtf8("lineEdit_stkini"));
        lineEdit_stkini->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:black;font-size:20px;"));

        verticalLayout->addWidget(lineEdit_stkini);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_modprod = new QPushButton(produit);
        pushButton_modprod->setObjectName(QString::fromUtf8("pushButton_modprod"));
        pushButton_modprod->setFont(font);
        pushButton_modprod->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;"));

        horizontalLayout_2->addWidget(pushButton_modprod);

        pushButton_creatprod = new QPushButton(produit);
        pushButton_creatprod->setObjectName(QString::fromUtf8("pushButton_creatprod"));
        pushButton_creatprod->setFont(font);
        pushButton_creatprod->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;"));

        horizontalLayout_2->addWidget(pushButton_creatprod);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_5 = new QPushButton(produit);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;"));

        verticalLayout_2->addWidget(pushButton_5);

        label_6 = new QLabel(produit);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:black;font-size:20px;"));

        verticalLayout_2->addWidget(label_6);

        tableViewprod = new QTableView(produit);
        tableViewprod->setObjectName(QString::fromUtf8("tableViewprod"));
        tableViewprod->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);\n"
"color:black;font-size:15px;"));

        verticalLayout_2->addWidget(tableViewprod);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 1);

        line_3 = new QFrame(produit);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 2, 0, 1, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        commandLinkButton_2 = new QCommandLinkButton(produit);
        commandLinkButton_2->setObjectName(QString::fromUtf8("commandLinkButton_2"));
        commandLinkButton_2->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;"));

        verticalLayout_3->addWidget(commandLinkButton_2);


        gridLayout->addLayout(verticalLayout_3, 3, 0, 1, 2);


        retranslateUi(produit);

        QMetaObject::connectSlotsByName(produit);
    } // setupUi

    void retranslateUi(QDialog *produit)
    {
        produit->setWindowTitle(QApplication::translate("produit", "Dialog", nullptr));
        label_3->setText(QApplication::translate("produit", "Mise a jour Produit :", nullptr));
        label->setText(QApplication::translate("produit", "Numero du Produit :", nullptr));
        pushButton_recherchprod->setText(QApplication::translate("produit", "Rechercher", nullptr));
        label_5->setText(QApplication::translate("produit", "resultat de recherche :", nullptr));
        pushButton_supprod->setText(QApplication::translate("produit", "Supprimer", nullptr));
        label_9->setText(QApplication::translate("produit", "Nom du Produit :", nullptr));
        lineEdit_nomprod->setText(QString());
        label_2->setText(QApplication::translate("produit", "PU    :", nullptr));
        label_4->setText(QApplication::translate("produit", "stock initial :", nullptr));
        pushButton_modprod->setText(QApplication::translate("produit", "Modifier", nullptr));
        pushButton_creatprod->setText(QApplication::translate("produit", "Creer", nullptr));
        pushButton_5->setText(QApplication::translate("produit", "Afficher la liste", nullptr));
        label_6->setText(QApplication::translate("produit", "Liste des Produits :", nullptr));
        commandLinkButton_2->setText(QApplication::translate("produit", "Fin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class produit: public Ui_produit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUIT_H
