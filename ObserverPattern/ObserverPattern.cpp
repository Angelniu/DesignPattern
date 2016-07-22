// ObserverPattern.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include "Observer.h"
#include "Subject.h"
#include "ConcreteObserver.h"
#include "ConcreteSubject.h"
using namespace std;

int main(int argc, char* argv[])
{
	ConcreteSubject *csub = new ConcreteSubject();
	CurrentConditionsDisplay* currentDisplay = new CurrentConditionsDisplay(csub);
	ForecastDisplay* forecastDisplay = new ForecastDisplay(csub);
	csub->setMeasurements(80, 65, 30.4);
	csub->setMeasurements(82, 70, 29.2);
	csub->setMeasurements(78, 90, 29.2);
	return 0;
}

