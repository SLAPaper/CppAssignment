#include "MetroManager.h"

Line& MetroManager::get_line_by_id(const std::string& id)
{
    for (auto i = lines.begin(); i != lines.end(); ++i)
    {
        if (i->line_id == id)
        {
            return *i;
        }
    }
    // TODO: what should return if not found?
}

Line& MetroManager::get_line_by_id(std::string&& id)
{
}