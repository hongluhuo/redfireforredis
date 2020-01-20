#include "redfireforredis.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	RedfireForRedis w;
	w.show();
	return a.exec();
}
