#include "Line.h"

Line::Line(const std::string & id, const std::string & name) : line_id(id), line_name(name)
{
    station_list = std::vector<Station *>();
}

Line::Line(const std::string & id, std::string && name) : line_id(id), line_name(name)
{
    station_list = std::vector<Station *>();
}

Line::Line(std::string && id, const std::string & name) : line_id(id), line_name(name)
{
    station_list = std::vector<Station *>();
}

Line::Line(std::string && id, std::string && name) : line_id(id), line_name(name)
{
    station_list = std::vector<Station *>();
}
