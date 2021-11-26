#include "myspinbox.h"

myspinbox::myspinbox(QWidget *parent) : QSpinBox(parent)
{
    setRange(1,9);
    setFrame(1);
}
