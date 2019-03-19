#ifndef STEP2_H
#define STEP2_H

#include <QWidget>
#include<QPainter>
#include<QPen>
namespace Ui {
class Step2;
}

class Step2 : public QWidget
{
    Q_OBJECT

public:
    explicit Step2(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
    ~Step2();

private:
    Ui::Step2 *ui;
};

#endif // STEP2_H
