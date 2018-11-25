/********************************************************************************
** Form generated from reading UI file 'qmarks.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMARKS_H
#define UI_QMARKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QMarks
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *operandsLineEdit;
    QLineEdit *sumLineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *b025;
    QPushButton *b05;
    QPushButton *b075;
    QPushButton *b1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *b125;
    QPushButton *b15;
    QPushButton *b175;
    QPushButton *b2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *b225;
    QPushButton *b25;
    QPushButton *b275;
    QPushButton *b3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *b325;
    QPushButton *b35;
    QPushButton *b375;
    QPushButton *b4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *b425;
    QPushButton *b45;
    QPushButton *b475;
    QPushButton *b5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *clearButton;
    QPushButton *undoButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QMarks)
    {
        if (QMarks->objectName().isEmpty())
            QMarks->setObjectName(QStringLiteral("QMarks"));
        QMarks->resize(378, 494);
        centralWidget = new QWidget(QMarks);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 351, 411));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        operandsLineEdit = new QLineEdit(layoutWidget);
        operandsLineEdit->setObjectName(QStringLiteral("operandsLineEdit"));
        QFont font;
        font.setPointSize(13);
        operandsLineEdit->setFont(font);
        operandsLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(operandsLineEdit);

        sumLineEdit = new QLineEdit(layoutWidget);
        sumLineEdit->setObjectName(QStringLiteral("sumLineEdit"));
        QFont font1;
        font1.setPointSize(18);
        sumLineEdit->setFont(font1);
        sumLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(sumLineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        b025 = new QPushButton(layoutWidget);
        b025->setObjectName(QStringLiteral("b025"));
        b025->setFont(font1);

        horizontalLayout->addWidget(b025);

        b05 = new QPushButton(layoutWidget);
        b05->setObjectName(QStringLiteral("b05"));
        b05->setFont(font1);

        horizontalLayout->addWidget(b05);

        b075 = new QPushButton(layoutWidget);
        b075->setObjectName(QStringLiteral("b075"));
        b075->setFont(font1);

        horizontalLayout->addWidget(b075);

        b1 = new QPushButton(layoutWidget);
        b1->setObjectName(QStringLiteral("b1"));
        b1->setFont(font1);

        horizontalLayout->addWidget(b1);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        b125 = new QPushButton(layoutWidget);
        b125->setObjectName(QStringLiteral("b125"));
        b125->setFont(font1);

        horizontalLayout_2->addWidget(b125);

        b15 = new QPushButton(layoutWidget);
        b15->setObjectName(QStringLiteral("b15"));
        b15->setFont(font1);

        horizontalLayout_2->addWidget(b15);

        b175 = new QPushButton(layoutWidget);
        b175->setObjectName(QStringLiteral("b175"));
        b175->setFont(font1);

        horizontalLayout_2->addWidget(b175);

        b2 = new QPushButton(layoutWidget);
        b2->setObjectName(QStringLiteral("b2"));
        b2->setFont(font1);

        horizontalLayout_2->addWidget(b2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        b225 = new QPushButton(layoutWidget);
        b225->setObjectName(QStringLiteral("b225"));
        b225->setFont(font1);

        horizontalLayout_3->addWidget(b225);

        b25 = new QPushButton(layoutWidget);
        b25->setObjectName(QStringLiteral("b25"));
        b25->setFont(font1);

        horizontalLayout_3->addWidget(b25);

        b275 = new QPushButton(layoutWidget);
        b275->setObjectName(QStringLiteral("b275"));
        b275->setFont(font1);

        horizontalLayout_3->addWidget(b275);

        b3 = new QPushButton(layoutWidget);
        b3->setObjectName(QStringLiteral("b3"));
        b3->setFont(font1);

        horizontalLayout_3->addWidget(b3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        b325 = new QPushButton(layoutWidget);
        b325->setObjectName(QStringLiteral("b325"));
        b325->setFont(font1);

        horizontalLayout_4->addWidget(b325);

        b35 = new QPushButton(layoutWidget);
        b35->setObjectName(QStringLiteral("b35"));
        b35->setFont(font1);

        horizontalLayout_4->addWidget(b35);

        b375 = new QPushButton(layoutWidget);
        b375->setObjectName(QStringLiteral("b375"));
        b375->setFont(font1);

        horizontalLayout_4->addWidget(b375);

        b4 = new QPushButton(layoutWidget);
        b4->setObjectName(QStringLiteral("b4"));
        b4->setFont(font1);

        horizontalLayout_4->addWidget(b4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        b425 = new QPushButton(layoutWidget);
        b425->setObjectName(QStringLiteral("b425"));
        b425->setFont(font1);

        horizontalLayout_5->addWidget(b425);

        b45 = new QPushButton(layoutWidget);
        b45->setObjectName(QStringLiteral("b45"));
        b45->setFont(font1);

        horizontalLayout_5->addWidget(b45);

        b475 = new QPushButton(layoutWidget);
        b475->setObjectName(QStringLiteral("b475"));
        b475->setFont(font1);

        horizontalLayout_5->addWidget(b475);

        b5 = new QPushButton(layoutWidget);
        b5->setObjectName(QStringLiteral("b5"));
        b5->setFont(font1);

        horizontalLayout_5->addWidget(b5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        clearButton = new QPushButton(layoutWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        clearButton->setFont(font2);

        horizontalLayout_6->addWidget(clearButton);

        undoButton = new QPushButton(layoutWidget);
        undoButton->setObjectName(QStringLiteral("undoButton"));
        undoButton->setFont(font2);

        horizontalLayout_6->addWidget(undoButton);


        verticalLayout->addLayout(horizontalLayout_6);

        QMarks->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QMarks);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 378, 22));
        QMarks->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QMarks);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QMarks->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QMarks);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QMarks->setStatusBar(statusBar);

        retranslateUi(QMarks);

        QMetaObject::connectSlotsByName(QMarks);
    } // setupUi

    void retranslateUi(QMainWindow *QMarks)
    {
        QMarks->setWindowTitle(QApplication::translate("QMarks", "QMarks", nullptr));
        operandsLineEdit->setText(QApplication::translate("QMarks", "0", nullptr));
        sumLineEdit->setText(QApplication::translate("QMarks", "0", nullptr));
        b025->setText(QApplication::translate("QMarks", "0.25", nullptr));
        b05->setText(QApplication::translate("QMarks", "0.5", nullptr));
        b075->setText(QApplication::translate("QMarks", "0.75", nullptr));
        b1->setText(QApplication::translate("QMarks", "1.0", nullptr));
        b125->setText(QApplication::translate("QMarks", "1.25", nullptr));
        b15->setText(QApplication::translate("QMarks", "1.5", nullptr));
        b175->setText(QApplication::translate("QMarks", "1.75", nullptr));
        b2->setText(QApplication::translate("QMarks", "2.0", nullptr));
        b225->setText(QApplication::translate("QMarks", "2.25", nullptr));
        b25->setText(QApplication::translate("QMarks", "2.5", nullptr));
        b275->setText(QApplication::translate("QMarks", "2.75", nullptr));
        b3->setText(QApplication::translate("QMarks", "3.0", nullptr));
        b325->setText(QApplication::translate("QMarks", "3.25", nullptr));
        b35->setText(QApplication::translate("QMarks", "3.5", nullptr));
        b375->setText(QApplication::translate("QMarks", "3.75", nullptr));
        b4->setText(QApplication::translate("QMarks", "4.0", nullptr));
        b425->setText(QApplication::translate("QMarks", "4.25", nullptr));
        b45->setText(QApplication::translate("QMarks", "4.5", nullptr));
        b475->setText(QApplication::translate("QMarks", "4.75", nullptr));
        b5->setText(QApplication::translate("QMarks", "5.0", nullptr));
        clearButton->setText(QApplication::translate("QMarks", "C", nullptr));
        undoButton->setText(QApplication::translate("QMarks", "Undo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QMarks: public Ui_QMarks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMARKS_H
