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

std::vector<conn_t>::iterator Station::add_neighbor(Station * neighbor, size_t distance)
{
    connectivity.emplace_back(neighbor, distance);
    return --connectivity.end();
}

std::vector<conn_t>::iterator Station::add_neighbor(std::initializer_list<conn_t> ilist)
{
    return connectivity.insert(connectivity.end(), ilist);
}

std::vector<conn_t>::iterator Station::update_neighbor(Station * neighbor, size_t distance)
{
    for (auto i = connectivity.begin(); i != connectivity.end(); ++i) {
        if (i->station == neighbor && i->distance_to_station == distance) {
            i->distance_to_station = distance;
            return i;
        }
    }
    return connectivity.end();
}

std::vector<conn_t>::iterator Station::update_or_add_neighbor(Station * neighbor, size_t distance)
{
    auto i = update_neighbor(neighbor, distance);
    if (i == connectivity.end()) {
        return add_neighbor(neighbor, distance);
    }
    return i;
}

std::vector<conn_t>::iterator Station::remove_neighbor(Station * neighbor)
{
    for (auto i = connectivity.begin(); i != connectivity.end(); ++i) {
        if (i->station == neighbor) {
            return connectivity.erase(i);
        }
    }
    return connectivity.end();
}
