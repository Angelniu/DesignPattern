#include "ConcreteBehavior.h"
#include "BehaviorInterface.h"

using namespace std;

void FlyWithWings::fly()
{
	cout << "I'm flying!!" << endl;
}

void FlyNoWay::fly()
{
	cout << "I can't fly!" << endl;
}

void FlyRocketPowered::fly()
{
	cout << "I'm flying with a rocket!" << endl;
}

void Quack::quack()
{
	cout << "Quack!!!" << endl;
}

void MuteQuack::quack()
{
	cout << "<< Silence >>" << endl;
}

void Squeak::quack()
{
	cout << "Squeak!!!" << endl;
}