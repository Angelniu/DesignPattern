#ifndef _SUBJECT_H
#define _SUBJECT_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Observer;

class Subject{
public:
	Subject();
	virtual ~Subject(){}
	void addObserver(Observer* ob);
	void deleteObserver(Observer* ob);
	void setChanged();
	void clearChanged();
	void notifyObservers();
protected:
	
private:
	vector<Observer *> m_cvtObs;
	bool changed;
};

#endif