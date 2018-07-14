#include "stdafx.h"
#include "Subject.h"


void Subject::attach(std::reference_wrapper<Observer> o)
{
	//place observer references in our vector
	observers.push_back(o);
	return;
}

void Subject::detach(std::reference_wrapper<Observer> obs)
{
	auto const end{ observers.cend() };
	auto iter{ observers.cbegin() };

	//iterate through and erase
	while (iter != end)
	{
		if(&iter->get() == &obs.get())
		{
			observers.erase(iter);
		}
		++iter;
	}
	return;
}

void Subject::notify()
{
	//call update on each of our observers
	for (auto & o : observers)
	{
		o.get().update();
	}
}
