/********************************************************************************
** Form generated from reading UI file 'airlineproject.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIRLINEPROJECT_H
#define UI_AIRLINEPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Airlineproject
{
public:
    QWidget *centralWidget;
    QLabel *title;
    QLabel *Username;
    QLabel *Password;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *Signin;
    QVBoxLayout *verticalLayout;
    QLineEdit *Uinput;
    QLineEdit *lineEdit_2;
    QPushButton *SignInButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Airlineproject)
    {
        if (Airlineproject->objectName().isEmpty())
            Airlineproject->setObjectName(QStringLiteral("Airlineproject"));
        Airlineproject->resize(766, 478);
        Airlineproject->setStyleSheet(QStringLiteral("background-image: url(:/resources/img/simple 3.jpg);"));
        centralWidget = new QWidget(Airlineproject);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        title = new QLabel(centralWidget);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(10, 10, 561, 31));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        title->setFont(font);
        Username = new QLabel(centralWidget);
        Username->setObjectName(QStringLiteral("Username"));
        Username->setGeometry(QRect(330, 130, 71, 16));
        Username->setCursor(QCursor(Qt::ArrowCursor));
        Password = new QLabel(centralWidget);
        Password->setObjectName(QStringLiteral("Password"));
        Password->setGeometry(QRect(330, 160, 71, 16));
        Password->setCursor(QCursor(Qt::ArrowCursor));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(400, 60, 231, 146));
        layoutWidget->setCursor(QCursor(Qt::ArrowCursor));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        Signin = new QLabel(layoutWidget);
        Signin->setObjectName(QStringLiteral("Signin"));
        QFont font1;
        font1.setPointSize(14);
        Signin->setFont(font1);
        Signin->setCursor(QCursor(Qt::ArrowCursor));

        verticalLayout_2->addWidget(Signin);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Uinput = new QLineEdit(layoutWidget);
        Uinput->setObjectName(QStringLiteral("Uinput"));
        Uinput->setCursor(QCursor(Qt::ArrowCursor));
        Uinput->setStyleSheet(QStringLiteral(""));

        verticalLayout->addWidget(Uinput);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setCursor(QCursor(Qt::ArrowCursor));
        lineEdit_2->setStyleSheet(QStringLiteral(""));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_2);

        SignInButton = new QPushButton(layoutWidget);
        SignInButton->setObjectName(QStringLiteral("SignInButton"));
        SignInButton->setCursor(QCursor(Qt::ArrowCursor));
        SignInButton->setStyleSheet(QLatin1String(" color:black;\n"
"font-style:italic;\n"
"font:bold italic large \"Times New Roman\";"));

        verticalLayout->addWidget(SignInButton);


        verticalLayout_2->addLayout(verticalLayout);

        Airlineproject->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Airlineproject);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 766, 21));
        Airlineproject->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Airlineproject);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Airlineproject->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Airlineproject);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Airlineproject->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        Username->setBuddy(Uinput);
        Password->setBuddy(lineEdit_2);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(Uinput, lineEdit_2);

        retranslateUi(Airlineproject);

        QMetaObject::connectSlotsByName(Airlineproject);
    } // setupUi

    void retranslateUi(QMainWindow *Airlineproject)
    {
        Airlineproject->setWindowTitle(QApplication::translate("Airlineproject", "Airlineproject", 0));
        title->setText(QApplication::translate("Airlineproject", "<font color = black>WELCOME To AIRWAYS SYSTEM", 0));
        Username->setText(QApplication::translate("Airlineproject", "<html><head/><body><p><span style=\" font-weight:600; color:black;\">UserName</span></p></body></html>", 0));
        Password->setText(QApplication::translate("Airlineproject", "<html><head/><body><p><span style=\" font-weight:600; color:black;\">PassWord</span></p></body></html>", 0));
        Signin->setText(QApplication::translate("Airlineproject", "<font color = black>SIGN IN", 0));
        SignInButton->setText(QApplication::translate("Airlineproject", "Sign In", 0));
    } // retranslateUi

};

namespace Ui {
    class Airlineproject: public Ui_Airlineproject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIRLINEPROJECT_H
