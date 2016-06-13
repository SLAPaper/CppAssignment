#include "Station.h"

inline Station::Station(std::string name, std::map<Station*, size_t> connectivity) : name(name), connectivity(connectivity) {
    line = std::vector<Line*>();
}

std::string Station::get_id(size_t line_index) const
{
    return std::string();
}
