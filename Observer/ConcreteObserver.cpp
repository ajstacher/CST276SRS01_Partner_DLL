#include "stdafx.h"
#include "ConcreteObserver.h"

void ConcreteObserver::update()
{
	observerState = subject.getState();
	return;
}
