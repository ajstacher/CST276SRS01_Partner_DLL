#include "stdafx.h"
#include "station.h"
#include "current.h"
#include "statistics.h"

int main()
{
	//for rand() in station
	srand(time(NULL));

	//create 
	WeatherStation::Station weather_station;

	//attached upon construction
	WeatherViewer::Current current_weather(weather_station);
	WeatherViewer::Statistics statistics(weather_station);

	//get data and notify observers
	for(auto i = 0; i < 3; i++)
	{
		weather_station.measure();
		weather_station.notify();
	}

    return 0;
}
