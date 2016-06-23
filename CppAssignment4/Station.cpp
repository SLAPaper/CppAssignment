#include "Station.h"
#include <string>
#include <sstream>
#include <ios>
#include <iomanip>

Station::Station(const icu::UnicodeString & name) : Station(name, true, true)
{
}

Station::Station(icu::UnicodeString && name) : Station(name, true, true)
{
}

Station::Station(const icu::UnicodeString & name, bool is_up, bool is_down) : name(name), is_up(is_up), is_down(is_down)
{
    line = line_t();
}

Station::Station(icu::UnicodeString && name, bool is_up, bool is_down) : name(name), is_up(is_up), is_down(is_down)
{
    line = line_t();
}

std::string Station::get_id() const
{
    std::ostringstream temp;
    temp << std::setfill('0') << std::right << std::setw(2) << line.line->line_id << std::setw(2) << line.index;
    return temp.str();
}