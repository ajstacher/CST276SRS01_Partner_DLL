#include "stdafx.h"
#include <iomanip>
#include "station.h"
#include "current.h"
#include <iostream>

namespace WeatherViewer
{
    std::ostream& operator<<(std::ostream& os, WeatherViewer::Current const& current)
    {
        auto const& station{ current.getStation() };

        auto const temperature{ station.getTemperature() };
        auto const humidity{ station.getHumidity() };
        auto const pressure{ station.getPressure() };

		os <<
			"Current Conditions: " << std::endl <<
			std::setw(3) << temperature.get() << "°C, " <<
			std::setw(3) << humidity.get() << "%, " <<
			std::setw(4) << pressure.get() << " in. Hg" << std::endl << std::endl;
			
        return os;
    }

	Current::Current(WeatherStation::Station & station) : station_{ station}
    {
		station_.attach(*this);
    }

	WeatherStation::Station & Current::getStation() const 
	{
		return station_;
	}
	void Current::update()
	{
		std::cout << *this;
	}
}
