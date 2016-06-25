#include <iostream>
#include <vector>

#include "MetroManager.h"
#include "Line.h"
#include "Station.h"
#include "initializer.h"

auto mm = MetroManager({
    Line("01",
        "一号线",
        false
    ),
    Line("02",
        "二号线",
        true
    ),
    Line("04",
        "四号线",
        false
    ),
    Line("05",
        "五号线",
        false
    ),
    Line("06",
        "六号线",
        false
    ),
    Line("07",
        "七号线",
        false
    ),
    Line("08",
        "八号线",
        false
    ),
    Line("09",
        "九号线",
        false
    ),
    Line("10",
        "十号线",
        true
    ),
    Line("13",
        "十三号线",
        false
    ),
    Line("14w",
        "十四号线（西段）",
        false
    ),
    Line("14e",
        "十四号线（东段）",
        false
    ),
    Line("15",
        "十五号线",
        false
    ),
    Line("batong",
        "八通线",
        false
    ),
    Line("changping",
        "昌平线",
        false
    ),
    Line("yizhuang",
        "亦庄线",
        false
    ),
    Line("daxing",
        "大兴线",
        false
    ),
    Line("fangshan",
        "房山线",
        false
    ),
    Line("air",
        "机场线",
        true
    )
});

int main(int argc, char* argv[]) {
    initialization();

    //std::cout << "Hello World!" << std::endl;
    //for (auto l : mm.lines)
    //{
    //    std::cout << l.line_id << "\t|\t" << l.line_name << "\t|\t" << l.is_circle << std::endl;
    //    for (auto s : l.station_list)
    //    {
    //        std::cout << "\t" << s.name << "\t|\t" << s.get_id() << std::endl;
    //    }
    //    std::cout << std::endl;
    //}

    //for (auto d : mm.station_distances)
    //{
    //    for (auto s : d.second)
    //    {
    //        if (s.distance > 0)
    //        {
    //            std::cout << d.first->name << "\t" << s.station->name << "\t" << s.distance << std::endl;
    //        }
    //    }
    //}
    auto r = mm.find_path(mm.get_station_by_id("0405").value(), mm.get_station_by_id("0204").value());
    for (auto i = r.rbegin(), stop = --r.rend(); i != r.rend(); ++i)
    {
        std::cout << (*i)->name << "(" << (*i)->line.line->line_name << ")";
        if (i != stop)
            std::cout << "->";
    }
    std::cout << std::endl;
    std::system("PAUSE");
    return 0;
}