/********************************************************************************
** Form generated from reading UI file 'voirfacture.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOIRFACTURE_H
#define UI_VOIRFACTURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_voirfacture
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QCommandLinkButton *commandLinkButton_quit;
    QCommandLinkButton *commandLinkButton_supfact;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_numfact;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_recherchfact;
    QPushButton *pushButton_showallfact;
    QSpacerItem *verticalSpacer;
    QTableView *tableView_fact;
    QHBoxLayout *horizontalLayout_3;
    QTableView *tableView_totale;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;

    void setupUi(QMainWindow *voirfacture)
    {
        if (voirfacture->objectName().isEmpty())
            voirfacture->setObjectName(QString::fromUtf8("voirfacture"));
        voirfacture->resize(923, 678);
        voirfacture->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(voirfacture);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("*{\n"
"font: 8pt \"MV Boli\";\n"
"\n"
"font-size:35px;\n"
"color: black;\n"
"border-radius:0px;\n"
"}"));

        verticalLayout->addWidget(label);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        commandLinkButton_quit = new QCommandLinkButton(centralwidget);
        commandLinkButton_quit->setObjectName(QString::fromUtf8("commandLinkButton_quit"));
        commandLinkButton_quit->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;\n"
"font-size:20px;\n"
""));

        horizontalLayout->addWidget(commandLinkButton_quit);

        commandLinkButton_supfact = new QCommandLinkButton(centralwidget);
        commandLinkButton_supfact->setObjectName(QString::fromUtf8("commandLinkButton_supfact"));
        commandLinkButton_supfact->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;\n"
"font-size:20px;\n"
""));

        horizontalLayout->addWidget(commandLinkButton_supfact);


        gridLayout_2->addLayout(horizontalLayout, 4, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font--size:20px;\n"
"background:transparent;\n"
"color:black;\n"
"font-size:20px;"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_numfact = new QLineEdit(centralwidget);
        lineEdit_numfact->setObjectName(QString::fromUtf8("lineEdit_numfact"));
        lineEdit_numfact->setStyleSheet(QString::fromUtf8("font--size:20px;\n"
"background:transparent;\n"
"color:black;\n"
"font-size:20px;"));

        verticalLayout_2->addWidget(lineEdit_numfact);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_recherchfact = new QPushButton(centralwidget);
        pushButton_recherchfact->setObjectName(QString::fromUtf8("pushButton_recherchfact"));
        pushButton_recherchfact->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;\n"
"font-size:20px;\n"
""));

        horizontalLayout_4->addWidget(pushButton_recherchfact);

        pushButton_showallfact = new QPushButton(centralwidget);
        pushButton_showallfact->setObjectName(QString::fromUtf8("pushButton_showallfact"));
        pushButton_showallfact->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;\n"
"font-size:20px;\n"
""));

        horizontalLayout_4->addWidget(pushButton_showallfact);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        tableView_fact = new QTableView(centralwidget);
        tableView_fact->setObjectName(QString::fromUtf8("tableView_fact"));
        tableView_fact->setStyleSheet(QString::fromUtf8("font--size:20px;\n"
"background-color: rgb(238, 238, 238);\n"
"color:black;\n"
""));

        verticalLayout_2->addWidget(tableView_fact);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        tableView_totale = new QTableView(centralwidget);
        tableView_totale->setObjectName(QString::fromUtf8("tableView_totale"));
        tableView_totale->setStyleSheet(QString::fromUtf8("font--size:20px;\n"
"background-color: rgb(238, 238, 238);\n"
"color:black;\n"
""));

        horizontalLayout_3->addWidget(tableView_totale);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        verticalLayout_2->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout_2, 2, 0, 1, 1);

        voirfacture->setCentralWidget(centralwidget);

        retranslateUi(voirfacture);

        QMetaObject::connectSlotsByName(voirfacture);
    } // setupUi

    void retranslateUi(QMainWindow *voirfacture)
    {
        voirfacture->setWindowTitle(QApplication::translate("voirfacture", "MainWindow", nullptr));
        label->setText(QApplication::translate("voirfacture", " Facture  des clients", nullptr));
        commandLinkButton_quit->setText(QApplication::translate("voirfacture", "retour", nullptr));
        commandLinkButton_supfact->setText(QApplication::translate("voirfacture", "supprimer", nullptr));
        label_2->setText(QApplication::translate("voirfacture", "Num client :", nullptr));
        pushButton_recherchfact->setText(QApplication::translate("voirfacture", "Rechercher ", nullptr));
        pushButton_showallfact->setText(QApplication::translate("voirfacture", "voir tous les facture", nullptr));
    } // retranslateUi

};

namespace Ui {
    class voirfacture: public Ui_voirfacture {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOIRFACTURE_H
