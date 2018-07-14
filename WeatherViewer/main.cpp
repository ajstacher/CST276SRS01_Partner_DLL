#include "stdafx.h"
#include <iostream>
#include <random>
#include <chrono>
#include <thread>

#include "station.h"
#include "current.h"
#include "statistics.h"
#include "TheWeatherStation.h"

int main()
{
	//create 
	WeatherStation::Station weather_station;
	WeatherViewer::Current current_weather(weather_station);
	WeatherViewer::Statistics statistics(weather_station);

	for(auto i = 0; i < 3; i++)
	{
		weather_station.measure();
	}

	weather_station.notify();

    /*std::random_device rd;
    std::mt19937 mt{ rd() };
    std::uniform_int_distribution<int> const dist{ 0, 10000 };


    for (int i{0}; i != 10; ++i)
    {
        auto const sporadic{ dist(mt) };
        std::this_thread::sleep_for(std::chrono::milliseconds(sporadic));
        weather_station.measure();
    }*/

	//weather_station.measure();

	//notify here


    return 0;
}
