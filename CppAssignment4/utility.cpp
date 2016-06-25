#include "utility.h"

#include "MetroManager.h"
#include "Station.h"
#include "Line.h"

#include <iostream>

extern MetroManager mm;

void print_path(const std::string & str1, const std::string & str2)
{
    auto s1 = mm.get_station_by_id(str1);
    if (s1)
    {
        auto s2 = mm.get_station_by_id(str2);
        if (s2)
        {
            std::cout << "从 " << s1->name << " 到 " << s2->name << " 的最短路径为：" << std::endl;
            auto r = mm.find_path(*s1, *s2);
            for (auto i = r.rbegin(); i != r.rend(); ++i)
            {
                std::cout << (*i)->name << "(" << (*i)->line.line->line_name << ")";
                if (i != --r.rend())
                    std::cout << " -> ";
            }
            std::cout << std::endl;
        }
        else
        {
            std::cout << "站点 \"" << str2 << "\" 不存在，请检查输入。" << std::endl;
            std::system("PAUSE");
        }
    }
    else
    {
        std::cout << "站点 \"" << str1 << "\" 不存在，请检查输入。" << std::endl;
        std::system("PAUSE");
    }
}