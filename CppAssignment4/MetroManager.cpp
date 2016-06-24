#include "MetroManager.h"

#include <string>
#include <stdexcept>

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
        // TODO: find last not number
        if (id.find_last_not_of("0123456789"))
        {
        }
        return boost::none;
    }
}

boost::optional<Station &> MetroManager::get_station_by_id(std::string&& id)
{
}

std::vector<Station*> MetroManager::find_path(const Station& s1, const Station& s2)
{
}

// ReSharper restore CppRedundantElseKeywordInsideCompoundStatement