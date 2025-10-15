#include "widget.h"
#include <QPushButton>
#include <QGridLayout>
#include <QSpacerItem>
#include <QSizePolicy>
#include <QWidget>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    hellowbutton = new QPushButton("helloworld 41343218邱明邑",this);
    QGridLayout *gridLayout = new QGridLayout(this);
    gridLayout->addItem(new QSpacerItem( 0, 0, QSizePolicy::Expanding, QSizePolicy::Expanding),0,1);
    gridLayout->addItem(new QSpacerItem( 0, 0, QSizePolicy::Expanding, QSizePolicy::Expanding),1,0);
    gridLayout->addWidget(hellowbutton,1,1,Qt::AlignCenter);
    gridLayout->addItem(new QSpacerItem( 0, 0, QSizePolicy::Expanding, QSizePolicy::Expanding),1,2);
    gridLayout->addItem(new QSpacerItem( 0, 0, QSizePolicy::Expanding, QSizePolicy::Expanding),2,1);
    this->resize(600,500);
}

Widget::~Widget() {}
