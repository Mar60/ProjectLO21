#include <QApplication>
#include "Profiler.h"



int main(int argc, char* argv[]) {

    QApplication app(argc, argv);
    Profiler profiler;
    profiler.show();
    return app.exec();
}
