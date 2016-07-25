// StrategyPattern.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include "AbstractObject.h"
#include "BehaviorInterface.h"
#include "ConcreteBehavior.h"
#include "ConcreteObject.h"
using namespace std;


int main(int argc, char* argv[])
{
	Duck* mallard = new MallardDuck();
	mallard->display();
	mallard->performFly();
	mallard->performQuack();
	Duck* model = new ModelDuck();
	model->display();
	model->performFly();
	model->setFlyBehavior(new FlyRocketPowered());
	model->performFly();
	return 0;
}

