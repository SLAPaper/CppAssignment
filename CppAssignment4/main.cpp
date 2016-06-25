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

    if (argc < 2)   // shell mode
    {
        // TODO
    }
    else if (argc == 3)
    {
        auto s1 = mm.get_station_by_id(argv[1]);
        if (s1 == boost::none)
        {
            std::cout << "站点 " << argv[1] << " 不存在，请检查输入。" << std::endl;
            std::system("PAUSE");
            return 0;
        }
        auto s2 = mm.get_station_by_id(argv[2]);
        if (s2 == boost::none)
        {
            std::cout << "站点 " << argv[2] << " 不存在，请检查输入。" << std::endl;
            std::system("PAUSE");
            return 0;
        }
        std::cout << "从 " << s1.value().name << " 到 " << s2.value().name << " 的最短路径为：" << std::endl;
        auto r = mm.find_path(s1.value(), s2.value());
        for (auto i = r.rbegin(); i != r.rend(); ++i)
        {
            std::cout << (*i)->name << "(" << (*i)->line.line->line_name << ")";
            if (i != --r.rend())
                std::cout << " -> ";
        }
        std::cout << std::endl;
    }
    else    // command mode
    {
        // TODO
    }

    std::system("PAUSE");
    return 0;
}