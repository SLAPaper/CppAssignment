#pragma once

#include <string>
#include <vector>
#include <tuple>
#include <map>
#include "Line.h"

class Station {
public:
    std::string name;
    std::vector<Line*> line;
    std::map<Station*, size_t> connectivity;

    Station(std::string name, std::map<Station*, size_t> connectivity = std::map<Station*, size_t>());

    std::string get_id(size_t line_index = 0) const;

    add_neighbor(Station* neighbor, size_t distance);

    remove_neighbor(Station* neighbor);
};