#ifndef _ABSTRACTOBJECT_H
#define _ABSTRACTOBJECT_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "BehaviorInterface.h"
using namespace std;

class Duck{
protected:
	FlyBehavior* flyBehavior;
	QuackBehavior* quackBehavior;
public:
	Duck(){}
	virtual ~Duck();
	virtual void display();
	void performFly();
	void performQuack();
	void setFlyBehavior(FlyBehavior* fb);
	void setQuackBehavior(QuackBehavior* qb);
	void swim();
};



#endif