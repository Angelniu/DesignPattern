#ifndef _BEHAVIORINTERFACE_H
#define _BEHAVIORINTERFACE_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

class FlyBehavior{
public:
	FlyBehavior(){}
	virtual ~FlyBehavior(){}
	virtual void fly() = 0;
};

class QuackBehavior{
public:
	QuackBehavior(){}
	virtual ~QuackBehavior(){}
	virtual void quack() = 0;
};


#endif