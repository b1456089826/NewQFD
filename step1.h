#ifndef STEP1_H
#define STEP1_H

#include <QWidget>
#include<QPainter>
#include<QPen>
namespace Ui {
class Step1;
}

class Step1 : public QWidget
{
    Q_OBJECT

public:
    explicit Step1(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
    ~Step1();

private:
    Ui::Step1 *ui;
};

#endif // STEP1_H
