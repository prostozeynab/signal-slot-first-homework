#include "dialog.h"
#include <QApplication>
#include "mytimer.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();


    mytimer mtimer;

    return a.exec();
}
