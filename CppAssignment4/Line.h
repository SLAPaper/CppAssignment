#pragma once
#include <string>
#include <vector>
#include "Station.h"
#include <algorithm>

class Line {
public:
    std::string line_id;
    std::string line_name;
    std::vector<Station *> station_list;

    Line(const std::string & id, const std::string & name);
    Line(const std::string & id, std::string && name);
    Line(std::string && id, const std::string & name);
    Line(std::string && id, std::string && name);

    void assign_station(const std::vector<Station *> & slist);
    void assign_station(std::vector<Station *> && slist);
    void assign_station(std::initializer_list<Station *> ilist);

    void insert_station(size_t index, Station & station);
    void insert_station(size_t index, std::initializer_list<Station *> ilist);

    void delete_station(size_t index);
    void delete_station(size_t begin_index, size_t end_index);

    void reorder_station(size_t from_index, size_t to_index);
};

static inline std::vector<line_t>::iterator in(Line & line, std::vector<line_t> & lines) {
    return std::find_if(lines.begin(), lines.end(), [&line](const line_t & l) {return l.line == &line; });
}

static inline std::vector<line_t>::const_iterator in(const Line & line, const std::vector<line_t> & lines) {
    return std::find_if(lines.begin(), lines.end(), [&line](const line_t & l) {return l.line == &line; });
}