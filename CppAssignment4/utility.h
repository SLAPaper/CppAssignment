#pragma once

#include <string>
#include <sstream>
#include <vector>

void print_path(const std::string & s1, const std::string & s2);

inline std::vector<std::string> & split(const std::string & s, char delim, std::vector<std::string> & elems)
{
    std::stringstream sstream(s);
    std::string item;
    while (std::getline(sstream, item, delim))
    {
        elems.push_back(item);
    }
    return elems;
}

inline std::vector<std::string> split(const std::string & s, char delim)
{
    std::vector<std::string> elems;
    split(s, delim, elems);
    return elems;
}