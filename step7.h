#ifndef STEP7_H
#define STEP7_H

#include <QWidget>
#include<QPainter>
#include<QPen>
namespace Ui {
class Step7;
}

class Step7 : public QWidget
{
    Q_OBJECT

public:
    explicit Step7(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);
    ~Step7();

private:
    Ui::Step7 *ui;
};

#endif // STEP7_H
