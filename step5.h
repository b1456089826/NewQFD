#ifndef STEP5_H
#define STEP5_H

#include <QWidget>

namespace Ui {
class Step5;
}

class Step5 : public QWidget
{
    Q_OBJECT

public:
    explicit Step5(QWidget *parent = nullptr);
    ~Step5();

private:
    Ui::Step5 *ui;
};

#endif // STEP5_H
