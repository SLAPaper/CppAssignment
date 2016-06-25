#pragma once
#include <string>
#include <vector>
#include "Station.h"
#include "unicode/unistr.h"

class Station;

class Line {
public:
    std::string line_id;    // 线路标识符（两位数字，或任意英文字母）
    icu::UnicodeString line_name;   // 线路名称
    bool is_circle;  // 是否环线
    std::vector<Station> station_list;  // 线路站点列表

    Line(const std::string & id, const icu::UnicodeString & name, bool is_circle = false);
    Line(const std::string & id, icu::UnicodeString && name, bool is_circle = false);
    Line(std::string && id, const icu::UnicodeString & name, bool is_circle = false);
    Line(std::string && id, icu::UnicodeString && name, bool is_circle = false);
    Line(const std::string & id, const icu::UnicodeString & name, bool is_circle, const std::vector<Station> & station_list);
    Line(std::string && id, icu::UnicodeString && name, bool is_circle, std::vector<Station> && station_list);
    Line(const std::string & id, const icu::UnicodeString & name, bool is_circle, std::initializer_list<Station> & station_list);

    void assign_station(const std::vector<Station> & slist);
    void assign_station(std::vector<Station> && slist);
    void assign_station(std::initializer_list<Station> ilist);

    void insert_station(size_t index, Station & station);
    void insert_station(size_t index, std::initializer_list<Station> ilist);

    void delete_station(size_t index);
    void delete_station(size_t begin_index, size_t end_index);

    void reorder_station(size_t from_index, size_t to_index);

    void build_station_list();

    void clear();
};
