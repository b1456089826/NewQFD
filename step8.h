#ifndef STEP8_H
#define STEP8_H

#include <QWidget>
#include<QPainter>
#include<QPen>
namespace Ui {
class Step8;
}

class Step8 : public QWidget
{
    Q_OBJECT

public:
    explicit Step8(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
    ~Step8();

private:
    Ui::Step8 *ui;
};

#endif // STEP8_H
