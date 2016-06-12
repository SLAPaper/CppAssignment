#pragma once

#include <vector>
#include <tuple>

using conn_t = std::vector<std::tuple<std::string, int>>; // use a class maybe better

class Station {
public:
    std::string id;
    std::string name;
    conn_t connectivity;    // 使用邻接表表示站间关系

    Station(std::string id, std::string name, conn_t connectivity = conn_t()) : id(id), name(name), connectivity(connectivity) {
    }
};