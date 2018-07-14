#pragma once
#include <functional>
#include "AbstractViewer.h"
#include <vector>

class AbstractStation
{
public:
	virtual ~AbstractStation() = 0;

	virtual void attach(std::reference_wrapper<AbstractViewer>o);
	virtual void detach(std::reference_wrapper<AbstractViewer> obs);
	virtual void notify();

private:
	std::vector<std::reference_wrapper<AbstractViewer>> observers;
};

