#ifndef MYSPINBOX_H
#define MYSPINBOX_H

#include <QWidget>
#include <QSpinBox>

class myspinbox : public QSpinBox
{
    Q_OBJECT
public:
    explicit myspinbox(QWidget *parent = nullptr);

signals:

};

#endif // MYSPINBOX_H
