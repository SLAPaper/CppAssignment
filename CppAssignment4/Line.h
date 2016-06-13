#pragma once
#include <string>
#include <vector>
#include "Station.h"

class Line {
public:
    std::string line_name;
    std::vector<Station*> station_list;

    void insert_station(size_t index, const Station& station);
    void delete_station(size_t index);
    void reorder_station(size_t from_index, size_t to_index);
};