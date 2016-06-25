#pragma once
#include <string>
#include <vector>
#include "Station.h"
#include "unicode/unistr.h"

class Station;

class Line {
public:
    std::string line_id;    // ��·��ʶ������λ���֣�������Ӣ����ĸ��
    icu::UnicodeString line_name;   // ��·����
    bool is_circle;  // �Ƿ���
    std::vector<Station> station_list;  // ��·վ���б�

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
