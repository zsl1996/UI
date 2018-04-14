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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
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
    QWidget *wsheding;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QLabel *label_11;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkBox_21;
    QCheckBox *checkBox_41;
    QCheckBox *checkBox_31;
    QCheckBox *checkBox1;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_13;
    QPushButton *pushButton_12;
    QWidget *wjilu;
    QLabel *label_12;
    QTableWidget *tableWidget;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(987, 707);
        actiongsddgs = new QAction(MainWindow);
        actiongsddgs->setObjectName(QStringLiteral("actiongsddgs"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setEnabled(true);
        wdati = new QWidget(centralWidget);
        wdati->setObjectName(QStringLiteral("wdati"));
        wdati->setEnabled(false);
        wdati->setGeometry(QRect(50, 30, 941, 581));
        lable = new QLabel(wdati);
        lable->setObjectName(QStringLiteral("lable"));
        lable->setGeometry(QRect(250, 30, 431, 81));
        QFont font;
        font.setPointSize(40);
        lable->setFont(font);
        timu = new QLineEdit(wdati);
        timu->setObjectName(QStringLiteral("timu"));
        timu->setEnabled(false);
        timu->setGeometry(QRect(110, 210, 761, 91));
        QFont font1;
        font1.setFamily(QStringLiteral("Engravers MT"));
        font1.setPointSize(36);
        timu->setFont(font1);
        label = new QLabel(wdati);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(600, 130, 91, 41));
        QFont font2;
        font2.setPointSize(16);
        label->setFont(font2);
        lcdNumber = new QLCDNumber(wdati);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(700, 140, 121, 23));
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

        wsheding = new QWidget(centralWidget);
        wsheding->setObjectName(QStringLiteral("wsheding"));
        wsheding->setEnabled(true);
        wsheding->setGeometry(QRect(10, 40, 981, 581));
        label_2 = new QLabel(wsheding);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 30, 271, 51));
        QFont font5;
        font5.setPointSize(15);
        label_2->setFont(font5);
        lineEdit_3 = new QLineEdit(wsheding);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(180, 100, 101, 20));
        lineEdit_4 = new QLineEdit(wsheding);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(180, 150, 101, 20));
        lineEdit_5 = new QLineEdit(wsheding);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(500, 150, 51, 20));
        lineEdit_6 = new QLineEdit(wsheding);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(590, 150, 51, 20));
        label_3 = new QLabel(wsheding);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 90, 81, 31));
        QFont font6;
        font6.setPointSize(12);
        label_3->setFont(font6);
        label_7 = new QLabel(wsheding);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 150, 101, 20));
        label_7->setFont(font6);
        label_8 = new QLabel(wsheding);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(350, 150, 121, 16));
        label_8->setFont(font6);
        label_9 = new QLabel(wsheding);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(560, 150, 21, 21));
        label_9->setFont(font6);
        label_10 = new QLabel(wsheding);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(360, 95, 121, 21));
        label_10->setFont(font6);
        horizontalLayoutWidget_4 = new QWidget(wsheding);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(490, 90, 451, 31));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        checkBox_3 = new QCheckBox(horizontalLayoutWidget_4);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setEnabled(true);
        checkBox_3->setFont(font6);
        checkBox_3->setChecked(true);

        horizontalLayout_7->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(horizontalLayoutWidget_4);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setFont(font6);
        checkBox_4->setChecked(true);

        horizontalLayout_7->addWidget(checkBox_4);

        checkBox_2 = new QCheckBox(horizontalLayoutWidget_4);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setFont(font6);

        horizontalLayout_7->addWidget(checkBox_2);

        checkBox = new QCheckBox(horizontalLayoutWidget_4);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setFont(font6);

        horizontalLayout_7->addWidget(checkBox);

        label_11 = new QLabel(wsheding);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(40, 200, 271, 51));
        label_11->setFont(font5);
        horizontalLayoutWidget_5 = new QWidget(wsheding);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(60, 280, 761, 80));
        horizontalLayout_8 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        checkBox_21 = new QCheckBox(horizontalLayoutWidget_5);
        checkBox_21->setObjectName(QStringLiteral("checkBox_21"));
        checkBox_21->setFont(font6);

        horizontalLayout_8->addWidget(checkBox_21);

        checkBox_41 = new QCheckBox(horizontalLayoutWidget_5);
        checkBox_41->setObjectName(QStringLiteral("checkBox_41"));
        checkBox_41->setFont(font6);

        horizontalLayout_8->addWidget(checkBox_41);

        checkBox_31 = new QCheckBox(horizontalLayoutWidget_5);
        checkBox_31->setObjectName(QStringLiteral("checkBox_31"));
        checkBox_31->setFont(font6);

        horizontalLayout_8->addWidget(checkBox_31);

        checkBox1 = new QCheckBox(horizontalLayoutWidget_5);
        checkBox1->setObjectName(QStringLiteral("checkBox1"));
        checkBox1->setFont(font6);

        horizontalLayout_8->addWidget(checkBox1);

        horizontalLayoutWidget_6 = new QWidget(wsheding);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(130, 430, 611, 80));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_9->setSpacing(356);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        pushButton_13 = new QPushButton(horizontalLayoutWidget_6);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));

        horizontalLayout_9->addWidget(pushButton_13);

        pushButton_12 = new QPushButton(horizontalLayoutWidget_6);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        horizontalLayout_9->addWidget(pushButton_12);

        wjilu = new QWidget(centralWidget);
        wjilu->setObjectName(QStringLiteral("wjilu"));
        wjilu->setGeometry(QRect(30, 40, 1031, 611));
        QFont font7;
        font7.setPointSize(14);
        font7.setUnderline(false);
        wjilu->setFont(font7);
        label_12 = new QLabel(wjilu);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(340, 40, 251, 71));
        label_12->setFont(font);
        tableWidget = new QTableWidget(wjilu);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font6);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font6);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font6);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font6);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font6);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(160, 140, 561, 371));
        QFont font8;
        font8.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font8.setPointSize(17);
        tableWidget->setFont(font8);
        tableWidget->setSortingEnabled(false);
        MainWindow->setCentralWidget(centralWidget);
        horizontalLayoutWidget_2->raise();
        wdati->raise();
        wsheding->raise();
        wjilu->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

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
        label_2->setText(QApplication::translate("MainWindow", "\350\257\267\346\240\271\346\215\256\351\234\200\350\246\201\350\277\233\350\241\214\351\242\230\347\233\256\347\233\270\345\205\263\350\256\276\345\256\232", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\351\242\230\347\233\256\344\270\252\346\225\260\357\274\232", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\346\223\215\344\275\234\346\225\260\344\270\252\346\225\260\357\274\232", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\346\223\215\344\275\234\346\225\260\346\225\260\345\200\274\350\214\203\345\233\264\357\274\232", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\350\207\263", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\350\277\220\347\256\227\347\254\246\347\247\215\347\261\273\357\274\232", nullptr));
        checkBox_3->setText(QApplication::translate("MainWindow", "\345\212\240\346\263\225", nullptr));
        checkBox_4->setText(QApplication::translate("MainWindow", "\345\207\217\346\263\225", nullptr));
        checkBox_2->setText(QApplication::translate("MainWindow", "\344\271\230\346\263\225", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "\351\231\244\346\263\225", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\351\232\276\345\272\246\346\217\220\345\215\207", nullptr));
        checkBox_21->setText(QApplication::translate("MainWindow", "\346\224\257\346\214\201\345\260\217\346\225\260\350\277\220\347\256\227", nullptr));
        checkBox_41->setText(QApplication::translate("MainWindow", "\346\224\257\346\214\201\344\271\230\346\226\271\350\277\220\347\256\227", nullptr));
        checkBox_31->setText(QApplication::translate("MainWindow", "\346\224\257\346\214\201\345\260\217\346\225\260\350\277\220\347\256\227", nullptr));
        checkBox1->setText(QApplication::translate("MainWindow", "\346\224\257\346\214\201\347\234\237\345\210\206\346\225\260\350\277\220\347\256\227", nullptr));
        pushButton_13->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\350\256\276\347\275\256", nullptr));
        pushButton_12->setText(QApplication::translate("MainWindow", "\346\201\242\345\244\215\351\273\230\350\256\244", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "\347\255\224\351\242\230\350\256\260\345\275\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\351\242\230\347\233\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\345\276\227\345\210\206", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\346\255\243\347\241\256\347\255\224\346\241\210", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\345\233\236\347\255\224", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\347\224\250\346\227\266", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATI_H
