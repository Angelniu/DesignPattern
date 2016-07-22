#include "Subject.h"
#include "Observer.h"
using namespace std;

Subject::Subject():changed(false){
	cout << "create a subject..." << endl;
}

void Subject::addObserver(Observer* ob)
{
	m_cvtObs.push_back(ob);
}
void Subject::deleteObserver(Observer* ob)
{
	for (vector<Observer *>::iterator it = m_cvtObs.begin(); it != m_cvtObs.end(); ++it){
		if (*it == ob){
			m_cvtObs.erase(it);
			return;
		}
	}
}
void Subject::setChanged()
{
	changed = true;
}

void Subject::clearChanged()
{
	changed = false;
}
void Subject::notifyObservers()
{
	if (changed){
		for (vector<Observer *>::iterator it = m_cvtObs.begin(); it != m_cvtObs.end(); ++it){
			(*it)->update(this);
		}
	}
}