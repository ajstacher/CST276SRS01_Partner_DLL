#ifndef WEATHER_VIEWER_STATISTICS_H
#define WEATHER_VIEWER_STATISTICS_H

#include <ostream>
#include <chrono>

namespace WeatherStation
{
    class Station;
}

namespace WeatherViewer
{
    class Statistics : public AbstractViewer
    {
        friend std::ostream& operator<<(std::ostream& os, Statistics const& statistics);

    private:
        WeatherStation::Station & station_;
        std::chrono::system_clock::time_point const begin_{ std::chrono::system_clock::now() };

    public:
        explicit Statistics(WeatherStation::Station & station);

        WeatherStation::Station & getStation() const;

        std::chrono::system_clock::time_point getBegin() const;

		void update() override;
    };
}

#endif // WEATHER_VIEWER_STATISTICS_H
