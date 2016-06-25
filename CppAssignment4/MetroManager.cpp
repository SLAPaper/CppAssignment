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
            auto index = std::stoull(id.substr(2)) - 1;
            try
            {
                return line->station_list.at(index);
            }
            catch (const std::out_of_range &)
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
            auto line = get_line_by_id(id.substr(0, i + 1));
            if (line)
            {
                auto index = std::stoull(id.substr(i + 1)) - 1;
                try
                {
                    return line->station_list.at(index);
                }
                catch (const std::out_of_range &)
                {
                    return boost::none;
                }
            }
        }
        else
            return boost::none;
    }
    return boost::none;
}

boost::optional<Station &> MetroManager::get_station_by_id(std::string&& id)
{
    if (id.length() == 4)
    {
        auto line = get_line_by_id(id.substr(0, 2));
        if (line)
        {
            auto index = std::stoull(id.substr(2)) - 1;
            try
            {
                return line->station_list.at(index);
            }
            catch (const std::out_of_range &)
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
            auto line = get_line_by_id(id.substr(0, i + 1));
            if (line)
            {
                auto index = std::stoull(id.substr(i + 1)) - 1;
                try
                {
                    return line->station_list.at(index);
                }
                catch (const std::out_of_range &)
                {
                    return boost::none;
                }
            }
        }
        else
            return boost::none;
    }
    return boost::none;
}
// ReSharper restore CppRedundantElseKeywordInsideCompoundStatement

std::vector<Station *> MetroManager::find_path(Station& s1, Station& s2)
{
    auto node_set = std::unordered_map<Station *, std::tuple<size_t, Station *>>();
    auto calculated_nodes = std::unordered_map<Station *, std::tuple<size_t, Station *>>();
    auto result = std::vector<Station *>();

    node_set[&s1] = { 0, nullptr };

    while (!node_set.empty())
    {
        auto i = std::min_element(node_set.begin(), node_set.end(), [](decltype(node_set)::const_reference a, decltype(node_set)::const_reference b) -> size_t { return std::get<0>(a.second) < std::get<0>(b.second); });
        auto s = *i;
        node_set.erase(i);
        calculated_nodes[s.first] = s.second;

        if (s.first == &s2) // shortest path to s2 found
        {
            break;
        }

        for (const auto & neighbor : station_distances[s.first])
        {
            if (calculated_nodes.find(neighbor.station) != calculated_nodes.end())  // calculated, skip
            {
                continue;
            }

            auto new_dist = neighbor.distance + std::get<0>(calculated_nodes[s.first]);
            if (node_set.find(neighbor.station) == node_set.end())  // not exist, insert dist
            {
                node_set[neighbor.station] = { new_dist, s.first };
            }
            else
            {
                if (new_dist < std::get<0>(node_set[neighbor.station])) // found a shorter path to neighbor.station
                {
                    node_set[neighbor.station] = { new_dist, s.first };
                }
            }
        }
    }

    auto p = &s2;
    while (calculated_nodes.find(p) != calculated_nodes.end())
    {
        result.emplace_back(p);
        p = std::get<1>(calculated_nodes[p]);
    }

    return result;
}

void MetroManager::refresh_lines()
{
    for (auto l : lines)
    {
        l.build_station_list();
    }
}