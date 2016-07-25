#include "ConcreteObject.h"
#include "BehaviorInterface.h"
#include "ConcreteBehavior.h"
using namespace std;

MallardDuck::MallardDuck()
{
	flyBehavior = new FlyWithWings();
	quackBehavior = new Quack();
}

MallardDuck::~MallardDuck()
{

}

void MallardDuck::display()
{
	cout << "I'm a real Mallard duck." << endl;
}

ModelDuck::ModelDuck()
{
	flyBehavior = new FlyNoWay();
	quackBehavior = new Quack();
}

ModelDuck::~ModelDuck()
{

}

void ModelDuck::display()
{
	cout << "I'm a model duck." << endl;
}