#include "Station.h"

Station::Station(std::string name, std::vector<conn_t> connectivity) : name(name), line(std::vector<line_t>()), connectivity(connectivity)
{
}

std::string Station::get_id(size_t line_index) const
{
    std::ostringstream temp;
    temp << line[line_index].line->line_id;
    // TODO: finish Station id
    return temp.str();
}
