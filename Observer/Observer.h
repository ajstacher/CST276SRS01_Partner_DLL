#pragma once
class Observer
{

public:
	//Abstract class, pure virtual
	virtual ~Observer() = 0;

	virtual void update();

};

