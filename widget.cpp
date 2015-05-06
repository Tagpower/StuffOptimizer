#include "widget.h"
#include "ui_widget.h"
#include <iostream>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    loadIcons();
}

Widget::~Widget()
{
    delete ui;
}
///
/// \brief Widget::loadIcons
/// load all icons from items.json
void Widget::loadIcons() {
    QFile file;
    QString txt;
    file.setFileName(":/resources/items.json");

    file.open(QIODevice::ReadOnly | QIODevice::Text);
    txt = file.readAll();
    file.close();

    // parse JSON
    QJsonDocument doc = QJsonDocument::fromJson(txt.toUtf8());
    QJsonObject obj = doc.object();
    for (auto it = obj.begin(); it != obj.end(); ++it) {
        //QJsonValue id = obj.valueAt(i).toObject().value("id");
        QCheckBox* check = new QCheckBox();
        check->setText((*it).toObject().value("complete_name").toString());
        //check->setIcon(QIcon(":/resources/pictures/abyssal.png"));
        //check->setIconSize(QSize(16,16));
        ui->gridLayout->addWidget(check);
    }
    ui->checkBox->setIcon(QIcon(":/swiftness.png"));
}
