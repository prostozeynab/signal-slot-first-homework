#include "mytimer.h"
#include <QtCore>
#include <QDebug>

mytimer::mytimer()
{
  timer = new QTimer(this);
  connect(timer,SIGNAL(timeout()),this, SLOT(MySlot()));

  timer->start(1000);
}
void mytimer::MySlot()
{
     qDebug()<<"timer zapushen";
}
