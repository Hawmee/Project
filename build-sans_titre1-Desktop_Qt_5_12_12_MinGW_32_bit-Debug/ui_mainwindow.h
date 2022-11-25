/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionMain_menu;
    QAction *actionExit;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *lbltitle;
    QLabel *lblclient;
    QLabel *lblprod;
    QLabel *lblcom;
    QLabel *lblfact;
    QLabel *lblaf;
    QLabel *lblfin;
    QVBoxLayout *lotchoix_2;
    QLabel *lblchoix;
    QLineEdit *lineEdit_choix;
    QPushButton *btnch;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1082, 620);
        MainWindow->setSizeIncrement(QSize(12, 12));
        MainWindow->setBaseSize(QSize(12, 12));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        actionMain_menu = new QAction(MainWindow);
        actionMain_menu->setObjectName(QString::fromUtf8("actionMain_menu"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbltitle = new QLabel(centralWidget);
        lbltitle->setObjectName(QString::fromUtf8("lbltitle"));
        lbltitle->setMinimumSize(QSize(12, 12));
        QFont font;
        font.setFamily(QString::fromUtf8("MV Boli"));
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(true);
        font.setWeight(50);
        lbltitle->setFont(font);
        lbltitle->setStyleSheet(QString::fromUtf8("\n"
"font-size: 40px ;\n"
"color:black;\n"
"\n"
""));
        lbltitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbltitle);

        lblclient = new QLabel(centralWidget);
        lblclient->setObjectName(QString::fromUtf8("lblclient"));
        lblclient->setMinimumSize(QSize(12, 12));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MV Boli"));
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        lblclient->setFont(font1);
        lblclient->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color: black;\n"
"background:transparent;"));

        verticalLayout->addWidget(lblclient);

        lblprod = new QLabel(centralWidget);
        lblprod->setObjectName(QString::fromUtf8("lblprod"));
        lblprod->setMinimumSize(QSize(12, 12));
        lblprod->setFont(font1);
        lblprod->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color: black;\n"
"background:transparent;"));

        verticalLayout->addWidget(lblprod);

        lblcom = new QLabel(centralWidget);
        lblcom->setObjectName(QString::fromUtf8("lblcom"));
        lblcom->setMinimumSize(QSize(12, 12));
        lblcom->setFont(font1);
        lblcom->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color: black;\n"
"background:transparent;"));

        verticalLayout->addWidget(lblcom);

        lblfact = new QLabel(centralWidget);
        lblfact->setObjectName(QString::fromUtf8("lblfact"));
        lblfact->setMinimumSize(QSize(12, 12));
        lblfact->setFont(font1);
        lblfact->setStyleSheet(QString::fromUtf8("color: black;font-size:20px;\n"
"background:transparent;"));

        verticalLayout->addWidget(lblfact);

        lblaf = new QLabel(centralWidget);
        lblaf->setObjectName(QString::fromUtf8("lblaf"));
        lblaf->setMinimumSize(QSize(12, 12));
        lblaf->setFont(font1);
        lblaf->setStyleSheet(QString::fromUtf8("color: black\n"
";font-size:20px;\n"
"background:transparent;"));

        verticalLayout->addWidget(lblaf);

        lblfin = new QLabel(centralWidget);
        lblfin->setObjectName(QString::fromUtf8("lblfin"));
        lblfin->setMinimumSize(QSize(12, 12));
        lblfin->setFont(font1);
        lblfin->setStyleSheet(QString::fromUtf8("color: black;font-size:20px;\n"
"background:transparent;"));

        verticalLayout->addWidget(lblfin);

        lotchoix_2 = new QVBoxLayout();
        lotchoix_2->setSpacing(10);
        lotchoix_2->setObjectName(QString::fromUtf8("lotchoix_2"));
        lotchoix_2->setSizeConstraint(QLayout::SetMaximumSize);
        lotchoix_2->setContentsMargins(10, 10, 10, 10);
        lblchoix = new QLabel(centralWidget);
        lblchoix->setObjectName(QString::fromUtf8("lblchoix"));
        lblchoix->setMinimumSize(QSize(12, 12));
        lblchoix->setFont(font);
        lblchoix->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"text-decoration:underline;\n"
"color: black;\n"
"background:transparent;"));

        lotchoix_2->addWidget(lblchoix);

        lineEdit_choix = new QLineEdit(centralWidget);
        lineEdit_choix->setObjectName(QString::fromUtf8("lineEdit_choix"));
        lineEdit_choix->setMinimumSize(QSize(12, 12));
        lineEdit_choix->setStyleSheet(QString::fromUtf8("back-ground:rgb(211, 211, 211);\n"
"font-size:20px;"));

        lotchoix_2->addWidget(lineEdit_choix);

        btnch = new QPushButton(centralWidget);
        btnch->setObjectName(QString::fromUtf8("btnch"));
        btnch->setEnabled(true);
        btnch->setMinimumSize(QSize(12, 12));
        btnch->setCursor(QCursor(Qt::PointingHandCursor));
        btnch->setMouseTracking(false);
        btnch->setTabletTracking(false);
        btnch->setStyleSheet(QString::fromUtf8("background-color: rgb(207, 207, 207);\n"
"font-size:25px;\n"
"color: black;\n"
"\n"
"border-radius:10px;\n"
"hover:#f1f1f1;"));

        lotchoix_2->addWidget(btnch);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font-weight:bold;\n"
"background:transparent;\n"
""));

        lotchoix_2->addWidget(label);


        verticalLayout->addLayout(lotchoix_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionMain_menu->setText(QApplication::translate("MainWindow", "Main menu", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        lbltitle->setText(QApplication::translate("MainWindow", "Menu Principal :", nullptr));
        lblclient->setText(QApplication::translate("MainWindow", "                                      <1>   Mise a jour Client", nullptr));
        lblprod->setText(QApplication::translate("MainWindow", "                                      <2>   Mise a jour Produit", nullptr));
        lblcom->setText(QApplication::translate("MainWindow", "                                      <3>   Saisie de commande ", nullptr));
        lblfact->setText(QApplication::translate("MainWindow", "                                      <4>   Edition d'une facture d'un client", nullptr));
        lblaf->setText(QApplication::translate("MainWindow", "                                      <5>   CHiffre d'affaires par Client", nullptr));
        lblfin->setText(QApplication::translate("MainWindow", "                                      <6>   Fin", nullptr));
        lblchoix->setText(QApplication::translate("MainWindow", "Entrez votre choix :", nullptr));
        btnch->setText(QApplication::translate("MainWindow", "Choisir", nullptr));
        label->setText(QApplication::translate("MainWindow", "Statut", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
