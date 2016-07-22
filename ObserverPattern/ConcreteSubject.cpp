#include "ConcreteSubject.h"

using namespace std;

ConcreteSubject::ConcreteSubject()
{
}

void ConcreteSubject::measurementsChanged()
{
	setChanged();
	notifyObservers();
	clearChanged();
}

void ConcreteSubject::setMeasurements(float temperature, float humidity, float pressure)
{
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	measurementsChanged();
}

float ConcreteSubject::getTemperature()
{
	return temperature;
}
float ConcreteSubject::getHumidity()
{
	return humidity;
}
float ConcreteSubject::getPressure()
{
	return pressure;
}