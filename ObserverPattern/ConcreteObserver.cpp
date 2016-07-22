#include "Subject.h"
#include "Observer.h"
#include "ConcreteObserver.h"
#include "ConcreteSubject.h"
using namespace std;

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject *sub) :subject(sub)
{
	sub->addObserver(this);
}
void CurrentConditionsDisplay::update(Subject* sub)
{
	ConcreteSubject * csub = dynamic_cast<ConcreteSubject *>(sub);
	this->temperature = csub->getTemperature();
	this->humidity = csub->getHumidity();
	this->display();
}
void CurrentConditionsDisplay::display()
{
	printf("Current Conditions: %.2fF degrees and %.2f humidity.\n", temperature, humidity);
}

ForecastDisplay::ForecastDisplay(Subject* sub) :subject(sub), currentPressure(29.92)
{
	sub->addObserver(this);
}

void ForecastDisplay::update(Subject* sub)
{
	ConcreteSubject * csub = dynamic_cast<ConcreteSubject *>(sub);
	this->lastPressure = currentPressure;
	this->currentPressure = csub->getPressure();
	this->display();

}
void ForecastDisplay::display()
{
	if (currentPressure < lastPressure){
		cout << "Forecast: Watch out for cooler, rainy weather" << endl;
	}
	else if (currentPressure > lastPressure){
		cout << "Forecast: Improving weather on the way!" << endl;
	}
	else{
		cout << "Forecast: More of the same" << endl;
	}
	
}