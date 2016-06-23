#pragma once

#include "boost/optional.hpp"

#include "Station.h"
#include "Line.h"

struct conn_t {
    Station * station1; // ����վ��1
    Station * station2; // ����վ��2
    size_t distance;    // վ���
    enum directional { unidirectional, bidirectional } direction; // ������˫��

    conn_t() {
        station1 = nullptr;
        station2 = nullptr;
        distance = 0;
        direction = bidirectional;
    }

    conn_t(Station * s1, Station * s2, size_t d, directional direct = bidirectional) {
        station1 = s1;
        station2 = s2;
        distance = d;
        direction = direct;
    }
};

static bool operator==(const conn_t & c1, const conn_t & c2) {
    auto test1 = c1.station1 == c2.station1 && c1.station2 == c2.station2;
    auto test2 = c1.station1 == c2.station2 && c1.station2 == c2.station1;
    return test1 || test2;
}

static bool operator!=(const conn_t & c1, const conn_t & c2) {
    auto test1 = c1.station1 != c2.station1 || c1.station2 != c2.station2;
    auto test2 = c1.station1 != c2.station2 || c1.station2 != c2.station1;
    return test1 && test2;
}

class MetroManager {
public:
    std::vector<Line> lines;    // ������·
    std::vector<conn_t> trans_stations; // ����վ�б�

    boost::optional<Line &> get_line_by_id(const std::string & id);
    boost::optional<Line &> get_line_by_id(std::string && id);

    Station & get_station_by_id(const std::string & id);
    Station & get_station_by_id(std::string && id);

    std::vector<Station *> find_path(const Station & s1, const Station & s2);
};