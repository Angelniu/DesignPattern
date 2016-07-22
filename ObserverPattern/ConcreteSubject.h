#ifndef _CONCRETESUBJECT_H
#define _CONCRETESUBJECT_H
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "Subject.h"
using namespace std;

class ConcreteSubject:public Subject
{
public:
	ConcreteSubject();
	~ConcreteSubject(){}
	void measurementsChanged();
	void setMeasurements(float temperature, float humidity, float pressure);
	float getTemperature();
	float getHumidity();
	float getPressure();
private:
	float temperature;
	float humidity;
	float pressure;
};


#endif