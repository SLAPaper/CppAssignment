#pragma once

#include <vector>
#include <tuple>

using conn_t = std::vector<std::tuple<std::string, int>>; // use a class maybe better

class Station {
public:
    std::string id;
    std::string name;
    conn_t connectivity;    // ʹ���ڽӱ��ʾվ���ϵ

    Station(std::string id, std::string name, conn_t connectivity = conn_t()) : id(id), name(name), connectivity(connectivity) {
    }
};