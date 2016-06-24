#include "MetroManager.h"

#include <string>
#include <stdexcept>
#include <unordered_map>
#include <tuple>
#include <queue>

boost::optional<Line &> MetroManager::get_line_by_id(const std::string& id)
{
    for (auto i = lines.begin(); i != lines.end(); ++i)
    {
        if (i->line_id == id)
        {
            return *i;
        }
    }
    return boost::none;
}

boost::optional<Line &> MetroManager::get_line_by_id(std::string&& id)
{
    for (auto i = lines.begin(); i != lines.end(); ++i)
    {
        if (i->line_id == id)
        {
            return *i;
        }
    }
    return boost::none;
}

// ReSharper disable CppRedundantElseKeywordInsideCompoundStatement
boost::optional<Station &> MetroManager::get_station_by_id(const std::string& id)
{
    if (id.length() == 4)
    {
        auto line = get_line_by_id(id.substr(0, 2));
        if (line)
        {
            auto index = std::stoull(id.substr(2));
            try
            {
                return line->station_list.at(index);
            }
            catch (const std::out_of_range & e)
            {
                return boost::none;
            }
        }
        else
        {
            return boost::none;
        }
    }
    else
    {
        auto i = id.find_last_not_of("0123456789");
        if (i != std::string::npos)
        {
            auto line = get_line_by_id(id.substr(0, i));
            if (line)
            {
                auto index = std::stoull(id.substr(i));
                try
                {
                    return line->station_list.at(index);
                }
                catch (const std::out_of_range & e)
                {
                    return boost::none;
                }
            }
        }
        return boost::none;
    }
}

boost::optional<Station &> MetroManager::get_station_by_id(std::string&& id)
{
    if (id.length() == 4)
    {
        auto line = get_line_by_id(id.substr(0, 2));
        if (line)
        {
            auto index = std::stoull(id.substr(2));
            try
            {
                return line->station_list.at(index);
            }
            catch (const std::out_of_range & e)
            {
                return boost::none;
            }
        }
        else
            return boost::none;
    }
    else
    {
        auto i = id.find_last_not_of("0123456789");
        if (i != std::string::npos)
        {
            auto line = get_line_by_id(id.substr(0, i));
            if (line)
            {
                auto index = std::stoull(id.substr(i));
                try
                {
                    return line->station_list.at(index);
                }
                catch (const std::out_of_range & e)
                {
                    return boost::none;
                }
            }
        }
        else
            return boost::none;
    }
}
// ReSharper restore CppRedundantElseKeywordInsideCompoundStatement

const std::vector<Station *> & MetroManager::find_path(Station& s1, Station& s2)
{
    auto node_set = std::unordered_map<Station *, std::tuple<size_t, Station *>>();
    auto result = std::vector<Station *>();

    for (const auto & sl : station_distances)
    {
        node_set[sl.first] = { 0, nullptr };
        for (auto s : sl.second)
        {
            node_set[s.station] = { 0, nullptr };
        }
    }

    node_set[&s1] = { 0, nullptr };

    while (!node_set.empty())
    {
        // TODO: complete Dijkstra
        auto s = std::min_element(node_set.begin(), node_set.end(), []() {});
    }

    return result;
}