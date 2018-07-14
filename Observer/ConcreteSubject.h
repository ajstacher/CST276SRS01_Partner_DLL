#pragma once
#include "Subject.h"
class ConcreteSubject : public Subject
{

public:

	int getState() const;
	void setState(const bool s);

private:

	bool subjectState{ false };
	
};

