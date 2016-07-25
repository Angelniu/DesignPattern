#ifndef _CONCRETEOBJECT_H
#define _CONCRETEOBJECT_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "AbstractObject.h"
using namespace std;

class MallardDuck :public Duck
{
public:
	MallardDuck();
	~MallardDuck();
	void display();
};

class ModelDuck : public Duck
{
public:
	ModelDuck();
	~ModelDuck();
	void display();
};


#endif