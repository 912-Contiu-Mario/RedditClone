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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
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
    QLabel *logoLabel;
    QVBoxLayout *verticalLayout;
    QLineEdit *userNameLineEdit;
    QLabel *userNameErrorLabel;
    QLineEdit *emailLineEdit;
    QLabel *emailErrorLabel;
    QLineEdit *passwordLineEdit;
    QLabel *passwordErrorLabel;
    QLineEdit *confirmPasswordLineEdit;
    QLabel *confirmPasswordErrorLabel;
    QSpacerItem *verticalSpacer;
    QLabel *generalErrorLabel;
    QPushButton *signUpButton;
    QPushButton *logInButton;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SignUpWindowClass)
    {
        if (SignUpWindowClass->objectName().isEmpty())
            SignUpWindowClass->setObjectName("SignUpWindowClass");
        SignUpWindowClass->resize(517, 484);
        SignUpWindowClass->setMinimumSize(QSize(400, 300));
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
        horizontalSpacer = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        logoLabel = new QLabel(centralWidget);
        logoLabel->setObjectName("logoLabel");
        logoLabel->setMinimumSize(QSize(200, 40));
        logoLabel->setMaximumSize(QSize(200, 100));

        verticalLayout_2->addWidget(logoLabel);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        userNameLineEdit = new QLineEdit(centralWidget);
        userNameLineEdit->setObjectName("userNameLineEdit");

        verticalLayout->addWidget(userNameLineEdit);

        userNameErrorLabel = new QLabel(centralWidget);
        userNameErrorLabel->setObjectName("userNameErrorLabel");

        verticalLayout->addWidget(userNameErrorLabel);

        emailLineEdit = new QLineEdit(centralWidget);
        emailLineEdit->setObjectName("emailLineEdit");

        verticalLayout->addWidget(emailLineEdit);

        emailErrorLabel = new QLabel(centralWidget);
        emailErrorLabel->setObjectName("emailErrorLabel");

        verticalLayout->addWidget(emailErrorLabel);

        passwordLineEdit = new QLineEdit(centralWidget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setEchoMode(QLineEdit::Normal);

        verticalLayout->addWidget(passwordLineEdit);

        passwordErrorLabel = new QLabel(centralWidget);
        passwordErrorLabel->setObjectName("passwordErrorLabel");

        verticalLayout->addWidget(passwordErrorLabel);

        confirmPasswordLineEdit = new QLineEdit(centralWidget);
        confirmPasswordLineEdit->setObjectName("confirmPasswordLineEdit");

        verticalLayout->addWidget(confirmPasswordLineEdit);

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

        horizontalSpacer_2 = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        SignUpWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SignUpWindowClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 517, 22));
        SignUpWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SignUpWindowClass);
        mainToolBar->setObjectName("mainToolBar");
        SignUpWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
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
        userNameLineEdit->setText(QString());
        userNameLineEdit->setPlaceholderText(QCoreApplication::translate("SignUpWindowClass", "User Name", nullptr));
        userNameErrorLabel->setText(QString());
        emailLineEdit->setText(QString());
        emailLineEdit->setPlaceholderText(QCoreApplication::translate("SignUpWindowClass", "Email", nullptr));
        emailErrorLabel->setText(QString());
        passwordLineEdit->setText(QString());
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("SignUpWindowClass", "Password", nullptr));
        passwordErrorLabel->setText(QString());
        confirmPasswordLineEdit->setText(QString());
        confirmPasswordLineEdit->setPlaceholderText(QCoreApplication::translate("SignUpWindowClass", "Confirm Password", nullptr));
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
