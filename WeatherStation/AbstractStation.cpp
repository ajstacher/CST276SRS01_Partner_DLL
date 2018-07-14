#include "stdafx.h"
#include "AbstractStation.h"

AbstractStation::~AbstractStation()
{
	
}

void AbstractStation::attach(std::reference_wrapper<AbstractViewer> o)
{
	observers.push_back(o);
	return;
}

void AbstractStation::detach(std::reference_wrapper<AbstractViewer> obs)
{
	auto const end{ observers.cend() };
	auto iter{ observers.cbegin() };

	//erase if same reference
	while (iter != end)
	{
		if (&iter->get() == &obs.get())
		{
			observers.erase(iter);
		}
		++iter;
	}
	return;
}

void AbstractStation::notify()
{
	for (auto & o : observers)
	{
		o.get().update();
	}
}