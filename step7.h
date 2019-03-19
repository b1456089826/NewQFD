#ifndef STEP7_H
#define STEP7_H

#include <QWidget>

namespace Ui {
class Step7;
}

class Step7 : public QWidget
{
    Q_OBJECT

public:
    explicit Step7(QWidget *parent = nullptr);
    ~Step7();

private:
    Ui::Step7 *ui;
};

#endif // STEP7_H
