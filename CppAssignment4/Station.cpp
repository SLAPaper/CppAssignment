#include "Station.h"
#include <string>
#include <sstream>
#include <ios>
#include <iomanip>

Station::Station(const std::string & name) : Station(name, true, true)
{
}

Station::Station(std::string && name) : Station(name, true, true)
{
}

Station::Station(const std::string & name, bool is_up, bool is_down) : name(name), is_up(is_up), is_down(is_down)
{
    line = line_t();
}

Station::Station(std::string && name, bool is_up, bool is_down) : name(name), is_up(is_up), is_down(is_down)
{
    line = line_t();
}

Station::Station(const Station& other)
{
    name = other.name;
    line = other.line;
    is_up = other.is_up;
    is_down = other.is_down;
}

Station::Station(Station&& other)
{
    name = std::move(other.name);
    line = std::move(other.line);
    is_up = std::move(other.is_up);
    is_down = std::move(other.is_down);
}

Station& Station::operator=(const Station& other)
{
    name = other.name;
    line = other.line;
    is_up = other.is_up;
    is_down = other.is_down;

    return *this;
}

Station& Station::operator=(Station&& other)
{
    name = std::move(other.name);
    line = std::move(other.line);
    is_up = std::move(other.is_up);
    is_down = std::move(other.is_down);

    return *this;
}

std::string Station::get_id() const
{
    std::ostringstream temp;
    temp << std::setfill('0') << std::right << std::setw(2) << line.line->line_id << std::setw(2) << line.index + 1;
    return temp.str();
}