#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_redfireforredis.h"

class RedfireForRedis : public QMainWindow
{
	Q_OBJECT

public:
	RedfireForRedis(QWidget *parent = Q_NULLPTR);

private:
	Ui::RedfireForRedisClass ui;
};
