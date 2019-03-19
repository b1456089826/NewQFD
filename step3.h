#ifndef STEP3_H
#define STEP3_H

#include <QWidget>
#include<QPainter>
#include<QPen>
#include<step3first.h>

namespace Ui {
class Step3;
}

class Step3 : public QWidget
{
    Q_OBJECT

public:
    explicit Step3(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
    ~Step3();

private:
    Ui::Step3 *ui;
};

#endif // STEP3_H
