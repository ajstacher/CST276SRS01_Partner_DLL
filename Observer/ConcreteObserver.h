#pragma once
#include "Observer.h"
#include "Subject.h"
#include "ConcreteSubject.h"
#include <functional>

class ConcreteObserver : public Observer
{

public:

	void update() override;

private:

	ConcreteSubject subject;
	bool observerState{ false };

};

