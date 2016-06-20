#pragma once
#include <string>
#include <vector>
#include "Station.h"

class Line {
public:
    std::string line_id;
    std::string line_name;
    std::vector<Station *> station_list;

    Line(const std::string & id, const std::string & name);
    Line(const std::string & id, std::string && name);
    Line(std::string && id, const std::string & name);
    Line(std::string && id, std::string && name);

    void assign_station(std::vector<Station *> slist);
    void assign_station(std::initializer_list<Station *> ilist);

    void insert_station(size_t index, const Station & station);
    void insert_station(size_t index, std::initializer_list<Station *> ilist);

    void delete_station(size_t index);
    void delete_station(size_t begin_index, size_t end_index);

    void reorder_station(size_t from_index, size_t to_index);
};