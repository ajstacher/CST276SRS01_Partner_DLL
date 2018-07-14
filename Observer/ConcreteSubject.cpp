#include "stdafx.h"
#include "ConcreteSubject.h"

int ConcreteSubject::getState() const
{
	return subjectState;
}

void ConcreteSubject::setState(const bool s)
{
	subjectState = s;
	return;
}
