#pragma once

#include <string>
#include <vector>
#include <tuple>
#include <map>
#include <sstream>
#include "Line.h"

struct line_t
{
    Line* line;
    size_t index_in_line;

    line_t(Line* line, size_t i) :line(line), index_in_line(i) {
    }
};

struct conn_t {
    Station* station;
    size_t distance_to_station;

    conn_t(Station* station, size_t d) : station(station), distance_to_station(d) {
    }
};

class Station {
public:
    std::string name;
    std::vector<line_t> line;
    std::vector<conn_t> connectivity;

    Station(std::string name, std::vector<conn_t> connectivity = std::vector<conn_t>());

    std::string get_id(size_t line_index = 0) const;

    add_neighbor(Station* neighbor, size_t distance);

    remove_neighbor(Station* neighbor);
};