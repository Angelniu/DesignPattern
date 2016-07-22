#ifndef _CONCRETEOBSERVER_H
#define _CONCRETEOBSERVER_H

#include "Observer.h"
#include "Subject.h"
using namespace std;

class DisplayElement{
public:
	DisplayElement(){}
	virtual ~DisplayElement(){};
	virtual void display() = 0;
};

class CurrentConditionsDisplay:public Observer,public DisplayElement{
public:
	CurrentConditionsDisplay();
	CurrentConditionsDisplay(Subject *sub);
	~CurrentConditionsDisplay(){}
	void update(Subject* sub);
	void display();
private:
	float temperature;
	float humidity;
	Subject* subject;
};


class ForecastDisplay :public Observer, public DisplayElement{
public:
	ForecastDisplay();
	ForecastDisplay(Subject *sub);
	~ForecastDisplay(){}
	void update(Subject* sub);
	void display();
private:
	float currentPressure;
	float lastPressure;
	Subject* subject;
};


#endif