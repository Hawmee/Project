/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

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

class Ui_client
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QFrame *line_3;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_afficheliste;
    QLabel *label_5;
    QTableView *tableView;
    QFrame *line_4;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_2;
    QCommandLinkButton *commandLinkButton;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit_numclient;
    QPushButton *pushButton_reponsnumclient;
    QLabel *label_4;
    QTableView *tableView_numclient;
    QPushButton *pushButton_pushButton_supclient;
    QLabel *label_9;
    QLineEdit *lineEdit_nomclient;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_clientmodif;
    QPushButton *pushButton_creatclient;

    void setupUi(QDialog *client)
    {
        if (client->objectName().isEmpty())
            client->setObjectName(QString::fromUtf8("client"));
        client->resize(985, 538);
        client->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        client->setSizeGripEnabled(true);
        client->setModal(true);
        gridLayout = new QGridLayout(client);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(client);
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
"\n"
"font-size:35px;\n"
"color: black;\n"
"border-radius:0px;\n"
"}"));

        verticalLayout_3->addWidget(label_3);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 2, 4);

        line_3 = new QFrame(client);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 1, 1, 1, 3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_afficheliste = new QPushButton(client);
        pushButton_afficheliste->setObjectName(QString::fromUtf8("pushButton_afficheliste"));
        pushButton_afficheliste->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:black;\n"
"background-color: rgb(207, 207, 207);"));

        verticalLayout->addWidget(pushButton_afficheliste);

        label_5 = new QLabel(client);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background:transparent;\n"
"color:black;"));

        verticalLayout->addWidget(label_5);

        tableView = new QTableView(client);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color: rgb(238, 238, 238);"));

        verticalLayout->addWidget(tableView);


        gridLayout->addLayout(verticalLayout, 2, 3, 2, 1);

        line_4 = new QFrame(client);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 3, 2, 1, 1);

        line_2 = new QFrame(client);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 4, 0, 1, 4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(15, -1, -1, -1);
        commandLinkButton = new QCommandLinkButton(client);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setStyleSheet(QString::fromUtf8("background-color: rgb(207, 207, 207);\n"
"color:black;font-size:20px;"));

        verticalLayout_2->addWidget(commandLinkButton);


        gridLayout->addLayout(verticalLayout_2, 5, 0, 1, 4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label = new QLabel(client);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MV Boli"));
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background:transparent;\n"
"color:black;\n"
""));

        verticalLayout_4->addWidget(label);

        lineEdit_numclient = new QLineEdit(client);
        lineEdit_numclient->setObjectName(QString::fromUtf8("lineEdit_numclient"));
        lineEdit_numclient->setMouseTracking(true);
        lineEdit_numclient->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
""));

        verticalLayout_4->addWidget(lineEdit_numclient);

        pushButton_reponsnumclient = new QPushButton(client);
        pushButton_reponsnumclient->setObjectName(QString::fromUtf8("pushButton_reponsnumclient"));
        pushButton_reponsnumclient->setFont(font1);
        pushButton_reponsnumclient->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color:  rgb(207, 207, 207);\n"
"\n"
"color:black;"));

        verticalLayout_4->addWidget(pushButton_reponsnumclient);

        label_4 = new QLabel(client);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font-size:20px;\n"
"color:black;"));

        verticalLayout_4->addWidget(label_4);

        tableView_numclient = new QTableView(client);
        tableView_numclient->setObjectName(QString::fromUtf8("tableView_numclient"));
        tableView_numclient->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color: rgb(238, 238, 238);"));

        verticalLayout_4->addWidget(tableView_numclient);

        pushButton_pushButton_supclient = new QPushButton(client);
        pushButton_pushButton_supclient->setObjectName(QString::fromUtf8("pushButton_pushButton_supclient"));
        pushButton_pushButton_supclient->setFont(font1);
        pushButton_pushButton_supclient->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color: rgb(207, 207, 207);\n"
"color:black;"));

        verticalLayout_4->addWidget(pushButton_pushButton_supclient);

        label_9 = new QLabel(client);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background:transparent;\n"
"color:black;"));

        verticalLayout_4->addWidget(label_9);

        lineEdit_nomclient = new QLineEdit(client);
        lineEdit_nomclient->setObjectName(QString::fromUtf8("lineEdit_nomclient"));
        lineEdit_nomclient->setFont(font1);
        lineEdit_nomclient->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
""));

        verticalLayout_4->addWidget(lineEdit_nomclient);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        pushButton_clientmodif = new QPushButton(client);
        pushButton_clientmodif->setObjectName(QString::fromUtf8("pushButton_clientmodif"));
        pushButton_clientmodif->setFont(font1);
        pushButton_clientmodif->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:black;\n"
"background-color: rgb(207, 207, 207);\n"
""));

        horizontalLayout_11->addWidget(pushButton_clientmodif);

        pushButton_creatclient = new QPushButton(client);
        pushButton_creatclient->setObjectName(QString::fromUtf8("pushButton_creatclient"));
        pushButton_creatclient->setFont(font1);
        pushButton_creatclient->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"color:black;\n"
"background-color: rgb(207, 207, 207);\n"
""));

        horizontalLayout_11->addWidget(pushButton_creatclient);


        verticalLayout_4->addLayout(horizontalLayout_11);


        gridLayout->addLayout(verticalLayout_4, 2, 0, 2, 3);


        retranslateUi(client);

        QMetaObject::connectSlotsByName(client);
    } // setupUi

    void retranslateUi(QDialog *client)
    {
        client->setWindowTitle(QApplication::translate("client", "Dialog", nullptr));
        label_3->setText(QApplication::translate("client", "Mise a jour Client :", nullptr));
        pushButton_afficheliste->setText(QApplication::translate("client", "Afficher la liste", nullptr));
        label_5->setText(QApplication::translate("client", "liste des clients", nullptr));
        commandLinkButton->setText(QApplication::translate("client", "Fin", nullptr));
        label->setText(QApplication::translate("client", "Numero du Client :", nullptr));
        pushButton_reponsnumclient->setText(QApplication::translate("client", "Rechercher", nullptr));
        label_4->setText(QApplication::translate("client", "Resultat du recherche", nullptr));
        pushButton_pushButton_supclient->setText(QApplication::translate("client", "Supprimer", nullptr));
        label_9->setText(QApplication::translate("client", "Nom du Client :", nullptr));
        pushButton_clientmodif->setText(QApplication::translate("client", "Modifier", nullptr));
        pushButton_creatclient->setText(QApplication::translate("client", "Creer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class client: public Ui_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
