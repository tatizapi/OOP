/********************************************************************************
** Form generated from reading UI file 'screenwriting.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENWRITING_H
#define UI_SCREENWRITING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScreenwritingClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *descriptionLE;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *actLE;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addBtn;
    QPushButton *acceptBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ScreenwritingClass)
    {
        if (ScreenwritingClass->objectName().isEmpty())
            ScreenwritingClass->setObjectName(QStringLiteral("ScreenwritingClass"));
        ScreenwritingClass->resize(600, 400);
        centralWidget = new QWidget(ScreenwritingClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout_3->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        descriptionLE = new QLineEdit(centralWidget);
        descriptionLE->setObjectName(QStringLiteral("descriptionLE"));

        verticalLayout->addWidget(descriptionLE);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        actLE = new QLineEdit(centralWidget);
        actLE->setObjectName(QStringLiteral("actLE"));

        verticalLayout_2->addWidget(actLE);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        addBtn = new QPushButton(centralWidget);
        addBtn->setObjectName(QStringLiteral("addBtn"));

        horizontalLayout_2->addWidget(addBtn);

        acceptBtn = new QPushButton(centralWidget);
        acceptBtn->setObjectName(QStringLiteral("acceptBtn"));

        horizontalLayout_2->addWidget(acceptBtn);


        verticalLayout_3->addLayout(horizontalLayout_2);

        ScreenwritingClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ScreenwritingClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        ScreenwritingClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ScreenwritingClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ScreenwritingClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ScreenwritingClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ScreenwritingClass->setStatusBar(statusBar);

        retranslateUi(ScreenwritingClass);

        QMetaObject::connectSlotsByName(ScreenwritingClass);
    } // setupUi

    void retranslateUi(QMainWindow *ScreenwritingClass)
    {
        ScreenwritingClass->setWindowTitle(QApplication::translate("ScreenwritingClass", "Screenwriting", 0));
        label->setText(QApplication::translate("ScreenwritingClass", "Add new idea:", 0));
        label_2->setText(QApplication::translate("ScreenwritingClass", "Description", 0));
        label_3->setText(QApplication::translate("ScreenwritingClass", "Act", 0));
        addBtn->setText(QApplication::translate("ScreenwritingClass", "ADD", 0));
        acceptBtn->setText(QApplication::translate("ScreenwritingClass", "ACCEPT", 0));
    } // retranslateUi

};

namespace Ui {
    class ScreenwritingClass: public Ui_ScreenwritingClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENWRITING_H
