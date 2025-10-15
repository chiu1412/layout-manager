#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
class QPushButton;
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    QPushButton *hellowbutton;
};
#endif // WIDGET_H
