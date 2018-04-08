/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *dati;
    QLCDNumber *daojishi;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit;
    QLineEdit *jieguo;
    QPushButton *queren;
    QPushButton *chongzhi;
    QPushButton *fangqi;
    QWidget *shezhi;
    QTextEdit *textEdit_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(584, 496);
        dati = new QWidget(Widget);
        dati->setObjectName(QStringLiteral("dati"));
        dati->setGeometry(QRect(10, 30, 561, 451));
        daojishi = new QLCDNumber(dati);
        daojishi->setObjectName(QStringLiteral("daojishi"));
        daojishi->setGeometry(QRect(410, 110, 121, 23));
        label = new QLabel(dati);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 20, 261, 41));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label_2 = new QLabel(dati);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(410, 80, 111, 20));
        QFont font1;
        font1.setPointSize(16);
        label_2->setFont(font1);
        textEdit = new QTextEdit(dati);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(80, 150, 401, 71));
        jieguo = new QLineEdit(dati);
        jieguo->setObjectName(QStringLiteral("jieguo"));
        jieguo->setGeometry(QRect(180, 260, 211, 31));
        queren = new QPushButton(dati);
        queren->setObjectName(QStringLiteral("queren"));
        queren->setGeometry(QRect(140, 340, 75, 23));
        chongzhi = new QPushButton(dati);
        chongzhi->setObjectName(QStringLiteral("chongzhi"));
        chongzhi->setGeometry(QRect(260, 340, 75, 23));
        fangqi = new QPushButton(dati);
        fangqi->setObjectName(QStringLiteral("fangqi"));
        fangqi->setGeometry(QRect(390, 340, 75, 23));
        shezhi = new QWidget(dati);
        shezhi->setObjectName(QStringLiteral("shezhi"));
        shezhi->setGeometry(QRect(-10, 0, 571, 481));
        textEdit_2 = new QTextEdit(shezhi);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(100, 40, 101, 31));
        horizontalLayoutWidget = new QWidget(Widget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 301, 25));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(horizontalLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(horizontalLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(horizontalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "\345\260\217\345\255\246\347\224\237\347\232\204\350\257\225\347\202\274\344\271\213\345\234\260", nullptr));
        label_2->setText(QApplication::translate("Widget", "\346\234\254\351\242\230\345\200\222\350\256\241\346\227\266", nullptr));
        queren->setText(QApplication::translate("Widget", "\347\241\256\350\256\244", nullptr));
        chongzhi->setText(QApplication::translate("Widget", "\351\207\215\347\275\256", nullptr));
        fangqi->setText(QApplication::translate("Widget", "\346\224\276\345\274\203\346\255\244\351\242\230", nullptr));
        pushButton_4->setText(QApplication::translate("Widget", "\347\255\224\351\242\230", nullptr));
        pushButton_3->setText(QApplication::translate("Widget", "\350\256\276\347\275\256", nullptr));
        pushButton_2->setText(QApplication::translate("Widget", "\345\216\206\345\217\262\350\256\260\345\275\225", nullptr));
        pushButton->setText(QApplication::translate("Widget", "\346\210\220\347\273\251\345\210\206\344\272\253", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
