#pragma once

#include "Line.h"

class Line;

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

    line_t(const line_t & other)
    {
        line = other.line;
        index = other.index;
    }

    line_t(line_t && other)
    {
        line = other.line;
        index = other.index;
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

    Station(const Station & other);
    Station(Station && other);
    Station & operator=(const Station & other);
    Station & operator=(Station && other);

    std::string get_id() const;
};