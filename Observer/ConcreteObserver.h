#pragma once
#include "Observer.h"
#include "ConcreteSubject.h"

class ConcreteObserver : public Observer
{

public:

	void update() override;

private:

	ConcreteSubject subject;
	bool observerState{ false };

};

