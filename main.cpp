#include "qmarks.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMarks w;
    w.show();

    return a.exec();
}
