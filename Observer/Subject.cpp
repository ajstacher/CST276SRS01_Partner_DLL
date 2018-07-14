#include "stdafx.h"
#include "Subject.h"


void Subject::attach(std::reference_wrapper<Observer> o)
{
	observers.push_back(o);
	return;
}

void Subject::detach(std::reference_wrapper<Observer> obs)
{
	auto const end{ observers.cend() };
	auto iter{ observers.cbegin() };

	//erase if same reference
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
	for (auto & o : observers)
	{
		o.get().update();
	}
}
