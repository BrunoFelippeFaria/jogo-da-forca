/********************************************************************************
** Form generated from reading UI file 'jogoForca.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef JOGOFORCA_H
#define JOGOFORCA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *TemaLabel;
    QLabel *Forca;
    QPushButton *btnQ;
    QPushButton *btnW;
    QPushButton *btnE;
    QPushButton *btnT;
    QPushButton *btnY;
    QPushButton *btnI;
    QPushButton *btnO;
    QPushButton *bntU;
    QPushButton *btnP;
    QPushButton *btnG;
    QPushButton *btnA;
    QPushButton *btnD;
    QPushButton *btnH;
    QPushButton *btnF;
    QPushButton *btnJ;
    QPushButton *btnS;
    QPushButton *btnL;
    QPushButton *btnK;
    QPushButton *btnN;
    QPushButton *btnB;
    QPushButton *btnX;
    QPushButton *btnZ;
    QPushButton *btnC;
    QPushButton *btnV;
    QPushButton *btnM;
    QLabel *txtLabel;
    QPushButton *btnR;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(511, 400);
        TemaLabel = new QLabel(Form);
        TemaLabel->setObjectName("TemaLabel");
        TemaLabel->setGeometry(QRect(260, 30, 141, 51));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setUnderline(true);
        TemaLabel->setFont(font);
        TemaLabel->setStyleSheet(QString::fromUtf8("text-align: center;\n"
""));
        Forca = new QLabel(Form);
        Forca->setObjectName("Forca");
        Forca->setGeometry(QRect(-70, -30, 291, 271));
        Forca->setPixmap(QPixmap(QString::fromUtf8(":/forca/forca.png")));
        btnQ = new QPushButton(Form);
        btnQ->setObjectName("btnQ");
        btnQ->setGeometry(QRect(70, 270, 31, 31));
        btnQ->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnW = new QPushButton(Form);
        btnW->setObjectName("btnW");
        btnW->setGeometry(QRect(110, 270, 31, 31));
        btnW->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnE = new QPushButton(Form);
        btnE->setObjectName("btnE");
        btnE->setGeometry(QRect(150, 270, 31, 31));
        btnE->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnT = new QPushButton(Form);
        btnT->setObjectName("btnT");
        btnT->setGeometry(QRect(230, 270, 31, 31));
        btnT->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnY = new QPushButton(Form);
        btnY->setObjectName("btnY");
        btnY->setGeometry(QRect(270, 270, 31, 31));
        btnY->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnI = new QPushButton(Form);
        btnI->setObjectName("btnI");
        btnI->setGeometry(QRect(350, 270, 30, 31));
        btnI->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnO = new QPushButton(Form);
        btnO->setObjectName("btnO");
        btnO->setGeometry(QRect(390, 270, 30, 31));
        btnO->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        bntU = new QPushButton(Form);
        bntU->setObjectName("bntU");
        bntU->setGeometry(QRect(310, 270, 30, 31));
        bntU->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnP = new QPushButton(Form);
        btnP->setObjectName("btnP");
        btnP->setGeometry(QRect(430, 270, 30, 31));
        btnP->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnG = new QPushButton(Form);
        btnG->setObjectName("btnG");
        btnG->setGeometry(QRect(250, 310, 29, 31));
        btnG->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnA = new QPushButton(Form);
        btnA->setObjectName("btnA");
        btnA->setGeometry(QRect(90, 310, 30, 31));
        btnA->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnD = new QPushButton(Form);
        btnD->setObjectName("btnD");
        btnD->setGeometry(QRect(170, 310, 30, 31));
        btnD->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnH = new QPushButton(Form);
        btnH->setObjectName("btnH");
        btnH->setGeometry(QRect(290, 310, 29, 31));
        btnH->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnF = new QPushButton(Form);
        btnF->setObjectName("btnF");
        btnF->setGeometry(QRect(210, 310, 30, 31));
        btnF->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnJ = new QPushButton(Form);
        btnJ->setObjectName("btnJ");
        btnJ->setGeometry(QRect(330, 310, 29, 31));
        btnJ->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnS = new QPushButton(Form);
        btnS->setObjectName("btnS");
        btnS->setGeometry(QRect(130, 310, 30, 31));
        btnS->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnL = new QPushButton(Form);
        btnL->setObjectName("btnL");
        btnL->setGeometry(QRect(410, 310, 30, 31));
        btnL->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnK = new QPushButton(Form);
        btnK->setObjectName("btnK");
        btnK->setGeometry(QRect(370, 310, 30, 31));
        btnK->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnN = new QPushButton(Form);
        btnN->setObjectName("btnN");
        btnN->setGeometry(QRect(330, 350, 29, 31));
        btnN->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnB = new QPushButton(Form);
        btnB->setObjectName("btnB");
        btnB->setGeometry(QRect(290, 350, 29, 31));
        btnB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnX = new QPushButton(Form);
        btnX->setObjectName("btnX");
        btnX->setGeometry(QRect(170, 350, 30, 31));
        btnX->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnZ = new QPushButton(Form);
        btnZ->setObjectName("btnZ");
        btnZ->setGeometry(QRect(130, 350, 30, 31));
        btnZ->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnC = new QPushButton(Form);
        btnC->setObjectName("btnC");
        btnC->setGeometry(QRect(210, 350, 30, 31));
        btnC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnV = new QPushButton(Form);
        btnV->setObjectName("btnV");
        btnV->setGeometry(QRect(250, 350, 29, 31));
        btnV->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        btnM = new QPushButton(Form);
        btnM->setObjectName("btnM");
        btnM->setGeometry(QRect(370, 350, 30, 31));
        btnM->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));
        txtLabel = new QLabel(Form);
        txtLabel->setObjectName("txtLabel");
        txtLabel->setGeometry(QRect(160, 90, 301, 111));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setKerning(true);
        txtLabel->setFont(font1);
        txtLabel->setStyleSheet(QString::fromUtf8("letter-spacing: 5px;"));
        txtLabel->setAlignment(Qt::AlignCenter);
        btnR = new QPushButton(Form);
        btnR->setObjectName("btnR");
        btnR->setGeometry(QRect(190, 270, 31, 31));
        btnR->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    border: 1px solid black;\n"
"    border-radius: 25px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(64, 64, 64);\n"
"    color: white;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(128, 128, 128); /* Cinza mais claro */\n"
"    color: white; /* Mant\303\251m o contraste do texto */\n"
"}"));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Jogo da forca", nullptr));
        TemaLabel->setText(QCoreApplication::translate("Form", "Tema", nullptr));
        Forca->setText(QString());
        btnQ->setText(QCoreApplication::translate("Form", "Q", nullptr));
#if QT_CONFIG(shortcut)
        btnQ->setShortcut(QCoreApplication::translate("Form", "Q", nullptr));
#endif // QT_CONFIG(shortcut)
        btnW->setText(QCoreApplication::translate("Form", "W", nullptr));
#if QT_CONFIG(shortcut)
        btnW->setShortcut(QCoreApplication::translate("Form", "W", nullptr));
#endif // QT_CONFIG(shortcut)
        btnE->setText(QCoreApplication::translate("Form", "E", nullptr));
#if QT_CONFIG(shortcut)
        btnE->setShortcut(QCoreApplication::translate("Form", "E", nullptr));
#endif // QT_CONFIG(shortcut)
        btnT->setText(QCoreApplication::translate("Form", "T", nullptr));
#if QT_CONFIG(shortcut)
        btnT->setShortcut(QCoreApplication::translate("Form", "T", nullptr));
#endif // QT_CONFIG(shortcut)
        btnY->setText(QCoreApplication::translate("Form", "Y", nullptr));
#if QT_CONFIG(shortcut)
        btnY->setShortcut(QCoreApplication::translate("Form", "Y", nullptr));
#endif // QT_CONFIG(shortcut)
        btnI->setText(QCoreApplication::translate("Form", "I", nullptr));
#if QT_CONFIG(shortcut)
        btnI->setShortcut(QCoreApplication::translate("Form", "I", nullptr));
#endif // QT_CONFIG(shortcut)
        btnO->setText(QCoreApplication::translate("Form", "O", nullptr));
#if QT_CONFIG(shortcut)
        btnO->setShortcut(QCoreApplication::translate("Form", "O", nullptr));
#endif // QT_CONFIG(shortcut)
        bntU->setText(QCoreApplication::translate("Form", "U", nullptr));
#if QT_CONFIG(shortcut)
        bntU->setShortcut(QCoreApplication::translate("Form", "U", nullptr));
#endif // QT_CONFIG(shortcut)
        btnP->setText(QCoreApplication::translate("Form", "P", nullptr));
#if QT_CONFIG(shortcut)
        btnP->setShortcut(QCoreApplication::translate("Form", "P", nullptr));
#endif // QT_CONFIG(shortcut)
        btnG->setText(QCoreApplication::translate("Form", "G", nullptr));
#if QT_CONFIG(shortcut)
        btnG->setShortcut(QCoreApplication::translate("Form", "G", nullptr));
#endif // QT_CONFIG(shortcut)
        btnA->setText(QCoreApplication::translate("Form", "A", nullptr));
#if QT_CONFIG(shortcut)
        btnA->setShortcut(QCoreApplication::translate("Form", "A", nullptr));
#endif // QT_CONFIG(shortcut)
        btnD->setText(QCoreApplication::translate("Form", "D", nullptr));
#if QT_CONFIG(shortcut)
        btnD->setShortcut(QCoreApplication::translate("Form", "D", nullptr));
#endif // QT_CONFIG(shortcut)
        btnH->setText(QCoreApplication::translate("Form", "H", nullptr));
#if QT_CONFIG(shortcut)
        btnH->setShortcut(QCoreApplication::translate("Form", "H", nullptr));
#endif // QT_CONFIG(shortcut)
        btnF->setText(QCoreApplication::translate("Form", "F", nullptr));
#if QT_CONFIG(shortcut)
        btnF->setShortcut(QCoreApplication::translate("Form", "F", nullptr));
#endif // QT_CONFIG(shortcut)
        btnJ->setText(QCoreApplication::translate("Form", "J", nullptr));
#if QT_CONFIG(shortcut)
        btnJ->setShortcut(QCoreApplication::translate("Form", "J", nullptr));
#endif // QT_CONFIG(shortcut)
        btnS->setText(QCoreApplication::translate("Form", "S", nullptr));
#if QT_CONFIG(shortcut)
        btnS->setShortcut(QCoreApplication::translate("Form", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        btnL->setText(QCoreApplication::translate("Form", "L", nullptr));
#if QT_CONFIG(shortcut)
        btnL->setShortcut(QCoreApplication::translate("Form", "L", nullptr));
#endif // QT_CONFIG(shortcut)
        btnK->setText(QCoreApplication::translate("Form", "K", nullptr));
#if QT_CONFIG(shortcut)
        btnK->setShortcut(QCoreApplication::translate("Form", "K", nullptr));
#endif // QT_CONFIG(shortcut)
        btnN->setText(QCoreApplication::translate("Form", "N", nullptr));
#if QT_CONFIG(shortcut)
        btnN->setShortcut(QCoreApplication::translate("Form", "N", nullptr));
#endif // QT_CONFIG(shortcut)
        btnB->setText(QCoreApplication::translate("Form", "B", nullptr));
#if QT_CONFIG(shortcut)
        btnB->setShortcut(QCoreApplication::translate("Form", "B", nullptr));
#endif // QT_CONFIG(shortcut)
        btnX->setText(QCoreApplication::translate("Form", "X", nullptr));
#if QT_CONFIG(shortcut)
        btnX->setShortcut(QCoreApplication::translate("Form", "X", nullptr));
#endif // QT_CONFIG(shortcut)
        btnZ->setText(QCoreApplication::translate("Form", "Z", nullptr));
#if QT_CONFIG(shortcut)
        btnZ->setShortcut(QCoreApplication::translate("Form", "Z", nullptr));
#endif // QT_CONFIG(shortcut)
        btnC->setText(QCoreApplication::translate("Form", "C", nullptr));
#if QT_CONFIG(shortcut)
        btnC->setShortcut(QCoreApplication::translate("Form", "C", nullptr));
#endif // QT_CONFIG(shortcut)
        btnV->setText(QCoreApplication::translate("Form", "V", nullptr));
#if QT_CONFIG(shortcut)
        btnV->setShortcut(QCoreApplication::translate("Form", "V", nullptr));
#endif // QT_CONFIG(shortcut)
        btnM->setText(QCoreApplication::translate("Form", "M", nullptr));
#if QT_CONFIG(shortcut)
        btnM->setShortcut(QCoreApplication::translate("Form", "M", nullptr));
#endif // QT_CONFIG(shortcut)
        txtLabel->setText(QCoreApplication::translate("Form", "____________", nullptr));
        btnR->setText(QCoreApplication::translate("Form", "R", nullptr));
#if QT_CONFIG(shortcut)
        btnR->setShortcut(QCoreApplication::translate("Form", "R", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // JOGOFORCA_H
