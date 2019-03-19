#ifndef STEP6_H
#define STEP6_H

#include <QWidget>
#include<QPainter>
#include<QPen>
namespace Ui {
class Step6;
}

class Step6 : public QWidget
{
    Q_OBJECT

public:
    explicit Step6(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
    ~Step6();

private:
    Ui::Step6 *ui;
};

#endif // STEP6_H
