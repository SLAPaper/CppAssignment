#include "MetroManager.h"

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