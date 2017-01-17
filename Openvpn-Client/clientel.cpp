#include "clientel.h"

clientEL::clientEL(QWidget *parent) : QWidget(parent)
{
    QPushButton *clientHolder = new QPushButton(this);
    //clientHolder->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    QHBoxLayout *layout = new QHBoxLayout(clientHolder);
    QLabel *pictogram = new QLabel();
    QLabel *name = new QLabel();
    pictogram->setText("somePictogram");
    name->setText("name");
    layout->addWidget(pictogram);
    layout->addWidget(name);
}
