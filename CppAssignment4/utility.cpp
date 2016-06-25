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
            std::cout << "�� " << s1->name << " �� " << s2->name << " �����·��Ϊ��" << std::endl;
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
            std::cout << "վ�� \"" << str2 << "\" �����ڣ��������롣" << std::endl;
            std::system("PAUSE");
        }
    }
    else
    {
        std::cout << "վ�� \"" << str1 << "\" �����ڣ��������롣" << std::endl;
        std::system("PAUSE");
    }
}