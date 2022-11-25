/********************************************************************************
** Form generated from reading UI file 'chiffreaffaire.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHIFFREAFFAIRE_H
#define UI_CHIFFREAFFAIRE_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chiffreaffaire
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_5;
    QSpinBox *spinBox;
    QPushButton *pushButton_affiche_affaire;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QCommandLinkButton *commandLinkButton;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableView;

    void setupUi(QMainWindow *chiffreaffaire)
    {
        if (chiffreaffaire->objectName().isEmpty())
            chiffreaffaire->setObjectName(QString::fromUtf8("chiffreaffaire"));
        chiffreaffaire->resize(1389, 678);
        chiffreaffaire->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(chiffreaffaire);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("*{\n"
"font: 8pt \"MV Boli\";\n"
"font-size:35px;\n"
"color: black;\n"
"border-radius:0px;\n"
"}"));

        verticalLayout->addWidget(label);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background:transparent;\n"
"color:black;\n"
""));

        verticalLayout_2->addWidget(label_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        verticalLayout_2->addLayout(gridLayout);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background:transparent;\n"
"color:black;\n"
""));

        verticalLayout_2->addWidget(label_2);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background:transparent;\n"
"color:black;\n"
""));

        verticalLayout_2->addWidget(label_5);

        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color: rgba(207, 207, 207, 207);\n"
"color:black;\n"
""));

        verticalLayout_2->addWidget(spinBox);

        pushButton_affiche_affaire = new QPushButton(centralwidget);
        pushButton_affiche_affaire->setObjectName(QString::fromUtf8("pushButton_affiche_affaire"));
        pushButton_affiche_affaire->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:black;\n"
"background-color: rgb(207, 207, 207);"));

        verticalLayout_2->addWidget(pushButton_affiche_affaire);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        verticalLayout_2->addLayout(horizontalLayout_2);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background:transparent;\n"
"color:black;\n"
""));

        verticalLayout_2->addWidget(label_6);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background:transparent;\n"
"color:black;\n"
""));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background:transparent;\n"
"color:black;\n"
""));

        verticalLayout_2->addWidget(lineEdit_2);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:black;\n"
"background-color: rgb(207, 207, 207);"));

        verticalLayout_2->addWidget(pushButton_2);

        commandLinkButton = new QCommandLinkButton(centralwidget);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setStyleSheet(QString::fromUtf8("background-color: rgb(207, 207, 207);\n"
"color:black;\n"
"font-size:20px;\n"
"\n"
""));

        verticalLayout_2->addWidget(commandLinkButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"\n"
"color:black;"));

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));

        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:black;\n"
"background-color: rgb(207, 207, 207);"));

        gridLayout_2->addWidget(tableView, 2, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        gridLayout_3->addLayout(horizontalLayout, 1, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout_3);

        chiffreaffaire->setCentralWidget(centralwidget);

        retranslateUi(chiffreaffaire);

        QMetaObject::connectSlotsByName(chiffreaffaire);
    } // setupUi

    void retranslateUi(QMainWindow *chiffreaffaire)
    {
        chiffreaffaire->setWindowTitle(QApplication::translate("chiffreaffaire", "MainWindow", nullptr));
        label->setText(QApplication::translate("chiffreaffaire", "             chiffre d'affaire par client", nullptr));
        label_4->setText(QApplication::translate("chiffreaffaire", "Date :", nullptr));
        label_2->setText(QApplication::translate("chiffreaffaire", "Annuel :", nullptr));
        label_5->setText(QApplication::translate("chiffreaffaire", "entrer l'ann\303\251e  :", nullptr));
        pushButton_affiche_affaire->setText(QApplication::translate("chiffreaffaire", "confirmer", nullptr));
        label_6->setText(QApplication::translate("chiffreaffaire", "entrer les dates (ann\303\251e-mois-jour):", nullptr));
        pushButton_2->setText(QApplication::translate("chiffreaffaire", "confirmer", nullptr));
        commandLinkButton->setText(QApplication::translate("chiffreaffaire", "Fin", nullptr));
        pushButton->setText(QApplication::translate("chiffreaffaire", "          afficher la liste d'affaire par clients :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chiffreaffaire: public Ui_chiffreaffaire {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHIFFREAFFAIRE_H
