#ifndef _OBSERVER_H
#define _OBSERVER_H
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

class Subject;

class Observer{
public:
	Observer();
	virtual ~Observer(){};
	virtual void update(Subject *sub) = 0;
protected:
private:
};


#endif