#pragma once
#include <ostream>

namespace WeatherViewer
{
    class Current : public AbstractViewer
    {
        friend std::ostream& operator<<(std::ostream& os, Current const& current);

    private:
		WeatherStation::Station & station_;

    public:

		explicit Current(WeatherStation::Station & station);

        WeatherStation::Station & getStation() const;

		void update() override;

    };
}


