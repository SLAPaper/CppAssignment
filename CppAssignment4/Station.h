#pragma once

#include <string>
#include <vector>
#include <tuple>
#include <map>
#include <sstream>
#include <ios>
#include <iomanip>
#include "Line.h"

struct line_t
{
    Line * line;
    size_t index_in_line;

    line_t(Line * line, size_t i) :line(line), index_in_line(i) {
    }

    line_t & operator=(const line_t & other) {
        line = other.line;
        index_in_line = other.index_in_line;

        return *this;
    }

    line_t & operator=(line_t && other) {
        line = other.line;
        index_in_line = other.index_in_line;

        return *this;
    }

    void swap(line_t & other) {
        std::swap(line, other.line);
        std::swap(index_in_line, other.index_in_line);
    }
};

struct conn_t {
    Station * station;
    size_t distance_to_station;

    conn_t(Station * station, size_t d) : station(station), distance_to_station(d) {
    }
};

class Station {
public:
    std::string name;
    std::vector<line_t> line;
    std::vector<conn_t> connectivity;

    Station(const std::string & name);
    Station(std::string && name);

    Station(const std::string & name, const std::vector<conn_t> & conn_v);
    Station(std::string && name, const std::vector<conn_t> & conn_v);
    Station(const std::string & name, std::vector<conn_t> && conn_v);
    Station(std::string && name, std::vector<conn_t> && conn_v);

    std::string get_id(size_t line_index = 0) const;

    std::vector<conn_t>::iterator add_neighbor(Station * neighbor, size_t distance);
    std::vector<conn_t>::iterator add_neighbor(std::initializer_list<conn_t> ilist);

    std::vector<conn_t>::iterator update_neighbor(Station * neighbor, size_t distance);

    std::vector<conn_t>::iterator update_or_add_neighbor(Station * neighbor, size_t distance);

    std::vector<conn_t>::iterator remove_neighbor(Station * neighbor);
};