#include "Line.h"
#include <algorithm>

Line::Line(const std::string & id, const icu::UnicodeString & name, bool is_circle) : line_id(id), line_name(name), is_circle(is_circle)
{
    station_list = std::vector<Station>();
}

Line::Line(const std::string & id, icu::UnicodeString && name, bool is_circle) : line_id(id), line_name(name), is_circle(is_circle)
{
    station_list = std::vector<Station>();
}

Line::Line(std::string && id, const icu::UnicodeString & name, bool is_circle) : line_id(id), line_name(name), is_circle(is_circle)
{
    station_list = std::vector<Station>();
}

Line::Line(std::string && id, icu::UnicodeString && name, bool is_circle) : line_id(id), line_name(name), is_circle(is_circle)
{
    station_list = std::vector<Station>();
}

Line::Line(const std::string& id, const icu::UnicodeString& name, bool is_circle, const std::vector<Station>& station_list)
{
    line_id = id;
    line_name = name;
    this->is_circle = is_circle;
    this->station_list = station_list;
}

Line::Line(std::string&& id, icu::UnicodeString&& name, bool is_circle, std::vector<Station>&& station_list)
{
    line_id = id;
    line_name = name;
    this->is_circle = is_circle;
    this->station_list = station_list;
}

Line::Line(const std::string& id, const icu::UnicodeString& name, bool is_circle, std::initializer_list<Station>& station_list)
{
    line_id = id;
    line_name = name;
    this->is_circle = is_circle;
    this->station_list = station_list;
}

void Line::assign_station(const std::vector<Station>& slist)
{
    station_list = slist;
    build_station_list();
}

void Line::assign_station(std::vector<Station>&& slist)
{
    station_list = slist;
    build_station_list();
}

void Line::assign_station(std::initializer_list<Station> ilist)
{
    station_list.assign(ilist);
    build_station_list();
}

void Line::insert_station(size_t index, Station & station)
{
    auto i = station_list.begin() + index;
    station_list.insert(i, station);
    build_station_list();
}

void Line::insert_station(size_t index, std::initializer_list<Station> ilist)
{
    auto i = station_list.begin() + index;
    station_list.insert(i, ilist);
    build_station_list();
}

void Line::delete_station(size_t index)
{
    auto i = station_list.begin() + index;
    station_list.erase(i);
    build_station_list();
}

void Line::delete_station(size_t begin_index, size_t end_index)
{
    auto i = station_list.begin() + begin_index;
    auto j = station_list.begin() + end_index;
    station_list.erase(i, j);
    build_station_list();
}

void Line::reorder_station(size_t from_index, size_t to_index)
{
    auto i = station_list.begin() + from_index;
    auto j = station_list.begin() + to_index;
    std::swap(*i, *j);
    build_station_list();
}

void Line::build_station_list()
{
    for (auto i = 0; i < station_list.size(); ++i) {
        station_list[i].line.line = this;
        station_list[i].line.index = i;
    }
}

void Line::clear()
{
    station_list.clear();
}