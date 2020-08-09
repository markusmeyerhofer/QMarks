/********************************************************************************
** Form generated from reading UI file 'qmarks.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QMARKS_H
#define UI_QMARKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *operandsLineEdit;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *averageLineEdit;
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
            QMarks->setObjectName(QString::fromUtf8("QMarks"));
        QMarks->resize(436, 431);
        centralWidget = new QWidget(QMarks);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        operandsLineEdit = new QLineEdit(centralWidget);
        operandsLineEdit->setObjectName(QString::fromUtf8("operandsLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(operandsLineEdit->sizePolicy().hasHeightForWidth());
        operandsLineEdit->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(16);
        operandsLineEdit->setFont(font);
        operandsLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(operandsLineEdit);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        averageLineEdit = new QLineEdit(centralWidget);
        averageLineEdit->setObjectName(QString::fromUtf8("averageLineEdit"));
        QFont font1;
        font1.setPointSize(18);
        averageLineEdit->setFont(font1);
        averageLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(averageLineEdit);

        sumLineEdit = new QLineEdit(centralWidget);
        sumLineEdit->setObjectName(QString::fromUtf8("sumLineEdit"));
        sumLineEdit->setFont(font1);
        sumLineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(sumLineEdit);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        b025 = new QPushButton(centralWidget);
        b025->setObjectName(QString::fromUtf8("b025"));
        b025->setFont(font1);

        horizontalLayout->addWidget(b025);

        b05 = new QPushButton(centralWidget);
        b05->setObjectName(QString::fromUtf8("b05"));
        b05->setFont(font1);

        horizontalLayout->addWidget(b05);

        b075 = new QPushButton(centralWidget);
        b075->setObjectName(QString::fromUtf8("b075"));
        b075->setFont(font1);

        horizontalLayout->addWidget(b075);

        b1 = new QPushButton(centralWidget);
        b1->setObjectName(QString::fromUtf8("b1"));
        b1->setFont(font1);

        horizontalLayout->addWidget(b1);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        b125 = new QPushButton(centralWidget);
        b125->setObjectName(QString::fromUtf8("b125"));
        b125->setFont(font1);

        horizontalLayout_2->addWidget(b125);

        b15 = new QPushButton(centralWidget);
        b15->setObjectName(QString::fromUtf8("b15"));
        b15->setFont(font1);

        horizontalLayout_2->addWidget(b15);

        b175 = new QPushButton(centralWidget);
        b175->setObjectName(QString::fromUtf8("b175"));
        b175->setFont(font1);

        horizontalLayout_2->addWidget(b175);

        b2 = new QPushButton(centralWidget);
        b2->setObjectName(QString::fromUtf8("b2"));
        b2->setFont(font1);

        horizontalLayout_2->addWidget(b2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        b225 = new QPushButton(centralWidget);
        b225->setObjectName(QString::fromUtf8("b225"));
        b225->setFont(font1);

        horizontalLayout_3->addWidget(b225);

        b25 = new QPushButton(centralWidget);
        b25->setObjectName(QString::fromUtf8("b25"));
        b25->setFont(font1);

        horizontalLayout_3->addWidget(b25);

        b275 = new QPushButton(centralWidget);
        b275->setObjectName(QString::fromUtf8("b275"));
        b275->setFont(font1);

        horizontalLayout_3->addWidget(b275);

        b3 = new QPushButton(centralWidget);
        b3->setObjectName(QString::fromUtf8("b3"));
        b3->setFont(font1);

        horizontalLayout_3->addWidget(b3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        b325 = new QPushButton(centralWidget);
        b325->setObjectName(QString::fromUtf8("b325"));
        b325->setFont(font1);

        horizontalLayout_4->addWidget(b325);

        b35 = new QPushButton(centralWidget);
        b35->setObjectName(QString::fromUtf8("b35"));
        b35->setFont(font1);

        horizontalLayout_4->addWidget(b35);

        b375 = new QPushButton(centralWidget);
        b375->setObjectName(QString::fromUtf8("b375"));
        b375->setFont(font1);

        horizontalLayout_4->addWidget(b375);

        b4 = new QPushButton(centralWidget);
        b4->setObjectName(QString::fromUtf8("b4"));
        b4->setFont(font1);

        horizontalLayout_4->addWidget(b4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        b425 = new QPushButton(centralWidget);
        b425->setObjectName(QString::fromUtf8("b425"));
        b425->setFont(font1);

        horizontalLayout_5->addWidget(b425);

        b45 = new QPushButton(centralWidget);
        b45->setObjectName(QString::fromUtf8("b45"));
        b45->setFont(font1);

        horizontalLayout_5->addWidget(b45);

        b475 = new QPushButton(centralWidget);
        b475->setObjectName(QString::fromUtf8("b475"));
        b475->setFont(font1);

        horizontalLayout_5->addWidget(b475);

        b5 = new QPushButton(centralWidget);
        b5->setObjectName(QString::fromUtf8("b5"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(b5->sizePolicy().hasHeightForWidth());
        b5->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setPointSize(16);
        font2.setKerning(false);
        b5->setFont(font2);

        horizontalLayout_5->addWidget(b5);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        clearButton->setFont(font3);

        horizontalLayout_6->addWidget(clearButton);

        undoButton = new QPushButton(centralWidget);
        undoButton->setObjectName(QString::fromUtf8("undoButton"));
        undoButton->setFont(font3);

        horizontalLayout_6->addWidget(undoButton);


        verticalLayout->addLayout(horizontalLayout_6);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        QMarks->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QMarks);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 436, 22));
        QMarks->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QMarks);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QMarks->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QMarks);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QMarks->setStatusBar(statusBar);

        retranslateUi(QMarks);

        QMetaObject::connectSlotsByName(QMarks);
    } // setupUi

    void retranslateUi(QMainWindow *QMarks)
    {
        QMarks->setWindowTitle(QCoreApplication::translate("QMarks", "QMarks", nullptr));
        operandsLineEdit->setText(QCoreApplication::translate("QMarks", "0", nullptr));
        averageLineEdit->setText(QCoreApplication::translate("QMarks", "\342\250\217 0", nullptr));
        sumLineEdit->setText(QCoreApplication::translate("QMarks", "\342\210\221 0", nullptr));
        b025->setText(QCoreApplication::translate("QMarks", "0.25", nullptr));
        b05->setText(QCoreApplication::translate("QMarks", "0.5", nullptr));
        b075->setText(QCoreApplication::translate("QMarks", "0.75", nullptr));
        b1->setText(QCoreApplication::translate("QMarks", "1.0", nullptr));
        b125->setText(QCoreApplication::translate("QMarks", "1.25", nullptr));
        b15->setText(QCoreApplication::translate("QMarks", "1.5", nullptr));
        b175->setText(QCoreApplication::translate("QMarks", "1.75", nullptr));
        b2->setText(QCoreApplication::translate("QMarks", "2.0", nullptr));
        b225->setText(QCoreApplication::translate("QMarks", "2.25", nullptr));
        b25->setText(QCoreApplication::translate("QMarks", "2.5", nullptr));
        b275->setText(QCoreApplication::translate("QMarks", "2.75", nullptr));
        b3->setText(QCoreApplication::translate("QMarks", "3.0", nullptr));
        b325->setText(QCoreApplication::translate("QMarks", "3.25", nullptr));
        b35->setText(QCoreApplication::translate("QMarks", "3.5", nullptr));
        b375->setText(QCoreApplication::translate("QMarks", "3.75", nullptr));
        b4->setText(QCoreApplication::translate("QMarks", "4.0", nullptr));
        b425->setText(QCoreApplication::translate("QMarks", "4.25", nullptr));
        b45->setText(QCoreApplication::translate("QMarks", "4.5", nullptr));
        b475->setText(QCoreApplication::translate("QMarks", "4.75", nullptr));
        b5->setText(QCoreApplication::translate("QMarks", "5.0", nullptr));
        clearButton->setText(QCoreApplication::translate("QMarks", "C", nullptr));
        undoButton->setText(QCoreApplication::translate("QMarks", "Undo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QMarks: public Ui_QMarks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QMARKS_H
