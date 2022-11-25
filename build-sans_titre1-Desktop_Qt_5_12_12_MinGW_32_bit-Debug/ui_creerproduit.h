/********************************************************************************
** Form generated from reading UI file 'creerproduit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREERPRODUIT_H
#define UI_CREERPRODUIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_creerproduit
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *creerproduit)
    {
        if (creerproduit->objectName().isEmpty())
            creerproduit->setObjectName(QString::fromUtf8("creerproduit"));
        creerproduit->resize(736, 554);
        creerproduit->setStyleSheet(QString::fromUtf8("font-size:20px;\n"
"background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(creerproduit);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(206, 19, 301, 51));
        label->setStyleSheet(QString::fromUtf8("color:balck;\n"
"font-size:40px;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 90, 151, 31));
        label_2->setStyleSheet(QString::fromUtf8("color:balck;"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 130, 211, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 190, 47, 31));
        label_3->setStyleSheet(QString::fromUtf8("color:balck;"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(40, 219, 211, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 290, 131, 21));
        label_4->setStyleSheet(QString::fromUtf8("color:balck;"));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(40, 330, 211, 31));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(340, 150, 361, 251));
        plainTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 238);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 400, 101, 31));
        pushButton->setStyleSheet(QString::fromUtf8("color:balck;\n"
"background-color: rgb(207, 207, 207);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 100, 181, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("color:balck;\n"
"background-color: rgb(207, 207, 207);"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(460, 420, 121, 31));
        pushButton_3->setStyleSheet(QString::fromUtf8("color:balck;\n"
"background-color: rgb(207, 207, 207);"));
        creerproduit->setCentralWidget(centralwidget);
        menubar = new QMenuBar(creerproduit);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 736, 33));
        creerproduit->setMenuBar(menubar);
        statusbar = new QStatusBar(creerproduit);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        creerproduit->setStatusBar(statusbar);

        retranslateUi(creerproduit);

        QMetaObject::connectSlotsByName(creerproduit);
    } // setupUi

    void retranslateUi(QMainWindow *creerproduit)
    {
        creerproduit->setWindowTitle(QApplication::translate("creerproduit", "MainWindow", nullptr));
        label->setText(QApplication::translate("creerproduit", "creer produit", nullptr));
        label_2->setText(QApplication::translate("creerproduit", "nom du produit :", nullptr));
        label_3->setText(QApplication::translate("creerproduit", "PU:", nullptr));
        label_4->setText(QApplication::translate("creerproduit", "Stock initial:", nullptr));
        pushButton->setText(QApplication::translate("creerproduit", "Terminer", nullptr));
        pushButton_2->setText(QApplication::translate("creerproduit", "afficher la table", nullptr));
        pushButton_3->setText(QApplication::translate("creerproduit", "retour", nullptr));
    } // retranslateUi

};

namespace Ui {
    class creerproduit: public Ui_creerproduit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREERPRODUIT_H
