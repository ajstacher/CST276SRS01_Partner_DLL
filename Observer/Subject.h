#pragma once
#include "Observer.h"
#include <vector>

class Subject
{

public:
	virtual ~Subject() = 0;

	virtual void attach(std::reference_wrapper<Observer> o);
	virtual void detach(std::reference_wrapper<Observer> obs);
	virtual void notify();

private:

	std::vector<std::reference_wrapper<Observer>> observers;


};

