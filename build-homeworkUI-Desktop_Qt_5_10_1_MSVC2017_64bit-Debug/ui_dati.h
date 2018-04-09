/********************************************************************************
** Form generated from reading UI file 'dati.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATI_H
#define UI_DATI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actiongsddgs;
    QWidget *centralWidget;
    QWidget *wdati;
    QLabel *lable;
    QLineEdit *timu;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QLineEdit *lineEdit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_8;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(983, 649);
        actiongsddgs = new QAction(MainWindow);
        actiongsddgs->setObjectName(QStringLiteral("actiongsddgs"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        wdati = new QWidget(centralWidget);
        wdati->setObjectName(QStringLiteral("wdati"));
        wdati->setGeometry(QRect(0, 50, 991, 581));
        lable = new QLabel(wdati);
        lable->setObjectName(QStringLiteral("lable"));
        lable->setGeometry(QRect(300, 30, 431, 81));
        QFont font;
        font.setPointSize(40);
        lable->setFont(font);
        timu = new QLineEdit(wdati);
        timu->setObjectName(QStringLiteral("timu"));
        timu->setEnabled(false);
        timu->setGeometry(QRect(140, 200, 761, 91));
        QFont font1;
        font1.setFamily(QStringLiteral("Engravers MT"));
        font1.setPointSize(36);
        timu->setFont(font1);
        label = new QLabel(wdati);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(700, 120, 91, 41));
        QFont font2;
        font2.setPointSize(16);
        label->setFont(font2);
        lcdNumber = new QLCDNumber(wdati);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(830, 130, 121, 23));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial Narrow"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        lcdNumber->setFont(font3);
        lcdNumber->setProperty("value", QVariant(20));
        lineEdit = new QLineEdit(wdati);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(390, 340, 221, 71));
        QFont font4;
        font4.setFamily(QStringLiteral("Calisto MT"));
        font4.setPointSize(40);
        lineEdit->setFont(font4);
        horizontalLayoutWidget = new QWidget(wdati);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(210, 450, 561, 131));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setSpacing(80);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(-1, 0, 401, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout_5->addWidget(pushButton_7);

        pushButton_6 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_5->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_5->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_5->addWidget(pushButton_4);

        pushButton_8 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        horizontalLayout_5->addWidget(pushButton_8);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\233\233\345\210\231\350\277\220\347\256\227", nullptr));
        actiongsddgs->setText(QApplication::translate("MainWindow", "gsddgs", nullptr));
        lable->setText(QApplication::translate("MainWindow", "\345\260\217\345\255\246\347\224\237\347\232\204\350\257\225\347\202\274\344\271\213\345\234\260", nullptr));
        label->setText(QApplication::translate("MainWindow", "\345\200\222\350\256\241\346\227\266", nullptr));
        lineEdit->setText(QApplication::translate("MainWindow", "\350\276\223\345\205\245\347\273\223\346\236\234", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\347\255\224\351\242\230", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\346\224\276\345\274\203\346\255\244\351\242\230", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "\347\255\224\351\242\230", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "\350\256\276\345\256\232", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "\347\255\224\351\242\230\350\256\260\345\275\225", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "\346\210\220\347\273\251\345\210\206\344\272\253", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "\350\201\224\347\263\273\346\210\221\344\273\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATI_H
