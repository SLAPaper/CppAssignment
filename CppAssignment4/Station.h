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
    Line * line;    // 所属线路
    size_t index;   // 在线路中的序号

    line_t() {
        line = nullptr;
        index = 0;
    }

    line_t(Line * line, size_t i) :line(line) {
        index = i;
    }

    line_t & operator=(const line_t & other) {
        line = other.line;
        index = other.index;

        return *this;
    }

    line_t & operator=(line_t && other) {
        line = other.line;
        index = other.index;

        return *this;
    }

    void swap(line_t & other) {
        std::swap(line, other.line);
        std::swap(index, other.index);
    }
};

static inline bool operator==(const line_t & l1, const line_t & l2) {
    return l1.line == l2.line;
}

static inline bool operator!=(const line_t & l1, const line_t & l2) {
    return l1.line != l2.line;
}

struct conn_t {
    Station * station;  // 相联站点
    size_t distance;    // 站间距

    conn_t() {
        station = nullptr;
        distance = 0;
    }

    conn_t(Station * station, size_t d) : station(station), distance(d) {
    }
};

static inline bool operator==(const conn_t & c1, const conn_t & c2) {
    return c1.station == c2.station;
}

static inline bool operator!=(const conn_t & c1, const conn_t & c2) {
    return c1.station != c2.station;
}

class Station {
public:
    std::string name;   // 站点名称
    line_t line;    // 所属线路相关信息
    bool is_up;  // 是否上行站点
    bool is_down;   // 是否下行站点

    Station(const std::string & name);
    Station(std::string && name);
    Station(const std::string & name, bool is_up, bool is_down);
    Station(std::string && name, bool is_up, bool is_down);

    std::string get_id() const;
};