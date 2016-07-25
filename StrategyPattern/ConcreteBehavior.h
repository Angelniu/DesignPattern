#ifndef _CONCRETEBEHAVIOR_H
#define _CONCRETEBEHAVIOR_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "BehaviorInterface.h"
using namespace std;

class FlyWithWings : public FlyBehavior
{
public:
	~FlyWithWings(){}
	void fly();
};

class FlyNoWay : public FlyBehavior
{
public:
	~FlyNoWay(){}
	void fly();
};

class FlyRocketPowered : public FlyBehavior
{
public:
	~FlyRocketPowered(){}
	void fly();
};

class Quack : public QuackBehavior
{
public:
	~Quack(){}
	void quack();
};

class MuteQuack : public QuackBehavior
{
public:
	~MuteQuack(){}
	void quack();
};

class Squeak : public QuackBehavior
{
public:
	~Squeak(){}
	void quack();
};

#endif