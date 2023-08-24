/********************************************************************************
** Form generated from reading UI file 'SignUpWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPWINDOW_H
#define UI_SIGNUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUpWindowClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *logoLabel;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *userNameErrorLabel;
    QLabel *emailErrorLabel;
    QLabel *passwordErrorLabel;
    QLabel *confirmPasswordErrorLabel;
    QSpacerItem *verticalSpacer;
    QLabel *generalErrorLabel;
    QPushButton *signUpButton;
    QPushButton *logInButton;
    QSpacerItem *horizontalSpacer_2;
    QStatusBar *statusBar;
    QVBoxLayout* lineEditLayout;

    void setupUi(QMainWindow *SignUpWindowClass)
    {
        if (SignUpWindowClass->objectName().isEmpty())
            SignUpWindowClass->setObjectName("SignUpWindowClass");
        SignUpWindowClass->resize(325, 496);
        SignUpWindowClass->setMinimumSize(QSize(325, 496));
        SignUpWindowClass->setMaximumSize(QSize(325, 496));
        SignUpWindowClass->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(SignUpWindowClass);
        centralWidget->setObjectName("centralWidget");
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        lineEditLayout = new QVBoxLayout();
        lineEditLayout->setSpacing(6);
        lineEditLayout->setObjectName("lineEditLayout");

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        logoLabel = new QLabel(centralWidget);
        logoLabel->setObjectName("logoLabel");
        logoLabel->setMinimumSize(QSize(200, 40));
        logoLabel->setMaximumSize(QSize(200, 100));
        logoLabel->setLayoutDirection(Qt::LeftToRight);
        logoLabel->setScaledContents(true);
        logoLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_2->addWidget(logoLabel, 0, Qt::AlignHCenter);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        userNameErrorLabel = new QLabel(centralWidget);
        userNameErrorLabel->setObjectName("userNameErrorLabel");

        verticalLayout->addWidget(userNameErrorLabel);

        emailErrorLabel = new QLabel(centralWidget);
        emailErrorLabel->setObjectName("emailErrorLabel");

        verticalLayout->addWidget(emailErrorLabel);

        passwordErrorLabel = new QLabel(centralWidget);
        passwordErrorLabel->setObjectName("passwordErrorLabel");

        verticalLayout->addWidget(passwordErrorLabel);

        confirmPasswordErrorLabel = new QLabel(centralWidget);
        confirmPasswordErrorLabel->setObjectName("confirmPasswordErrorLabel");

        verticalLayout->addWidget(confirmPasswordErrorLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        generalErrorLabel = new QLabel(centralWidget);
        generalErrorLabel->setObjectName("generalErrorLabel");

        verticalLayout->addWidget(generalErrorLabel);

        signUpButton = new QPushButton(centralWidget);
        signUpButton->setObjectName("signUpButton");

        verticalLayout->addWidget(signUpButton);

        logInButton = new QPushButton(centralWidget);
        logInButton->setObjectName("logInButton");

        verticalLayout->addWidget(logInButton);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        SignUpWindowClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SignUpWindowClass);
        statusBar->setObjectName("statusBar");
        SignUpWindowClass->setStatusBar(statusBar);

        retranslateUi(SignUpWindowClass);

        QMetaObject::connectSlotsByName(SignUpWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *SignUpWindowClass)
    {
        SignUpWindowClass->setWindowTitle(QCoreApplication::translate("SignUpWindowClass", "SignUpWindow", nullptr));
        logoLabel->setText(QString());
        userNameErrorLabel->setText(QString());
        emailErrorLabel->setText(QString());
        passwordErrorLabel->setText(QString());
        confirmPasswordErrorLabel->setText(QString());
        generalErrorLabel->setText(QString());
        signUpButton->setText(QCoreApplication::translate("SignUpWindowClass", "Sign Up", nullptr));
        logInButton->setText(QCoreApplication::translate("SignUpWindowClass", "Log In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpWindowClass: public Ui_SignUpWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWINDOW_H
