#include "Station.h"

Station::Station(const std::string & name) : Station(name, std::vector<conn_t>())
{
}

Station::Station(std::string && name) : Station(name, std::vector<conn_t>())
{
}

Station::Station(const std::string & name, const std::vector<conn_t>& conn_v) : name(name)
{
    line = std::vector<line_t>();
    connectivity = conn_v;
}

Station::Station(std::string && name, const std::vector<conn_t>& conn_v) : name(name)
{
    line = std::vector<line_t>();
    connectivity = conn_v;
}

Station::Station(const std::string & name, std::vector<conn_t>&& conn_v) : name(name)
{
    line = std::vector<line_t>();
    connectivity = conn_v;
}

Station::Station(std::string && name, std::vector<conn_t>&& conn_v) : name(name)
{
    line = std::vector<line_t>();
    connectivity = conn_v;
}

std::string Station::get_id(size_t line_index) const
{
    std::ostringstream temp;
    temp << std::setfill('0') << std::right << std::setw(2) << line[line_index].line->line_id << std::setw(2) << line[line_index].index_in_line;
    return temp.str();
}
