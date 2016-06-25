#include <iostream>
#include <iomanip>
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
            std::cout << "站点 \"" << argv[1] << "\" 不存在，请检查输入。" << std::endl;
            std::system("PAUSE");
            return 0;
        }
        auto s2 = mm.get_station_by_id(argv[2]);
        if (s2 == boost::none)
        {
            std::cout << "站点 \"" << argv[2] << "\" 不存在，请检查输入。" << std::endl;
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
        auto argv1 = std::string(argv[1]);
        if (argv1 == "help")
        {
            std::cout << "# 北京地铁最短路径计算器" << std::endl
                << "--------------------" << std::endl
                << "## 无参数启动" << std::endl
                << "进入 shell mode" << std::endl << std::endl
                << "## help" << std::endl
                << "显示本帮助" << std::endl << std::endl
                << "## lines" << std::endl
                << "列出所有地铁线路" << std::endl << std::endl
                << "## line [地铁线路编号] stations" << std::endl
                << "列出某线路的所有站点" << std::endl << std::endl;
        }
        else if (argv1 == "lines")
        {
            std::cout << "北京市地铁线路有：" << std::endl;
            for (const auto & l : mm.lines)
            {
                std::cout << std::setw(10) << l.line_id << "\t" << l.line_name << std::endl;
            }
        }
        else if (argv1 == "line")
        {
            auto l = mm.get_line_by_id(argv[2]);
            if (l == boost::none)
            {
                std::cout << "线路 \"" << argv[2] << "\" 不存在，请检查输入。" << std::endl;
                std::system("PAUSE");
                return 0;
            }
            std::cout << "线路 " << l.value().line_name << "(" << l.value().line_id << ") 的站点有：" << std::endl;
            for (auto s : l.value().station_list)
            {
                std::cout << s.get_id() << "\t" << s.name << std::endl;
            }
        }
        else
        {
            std::cout << "输入 \"" << argv[1] << "\" 无法识别，请检查输入。" << std::endl;
        }
    }

    std::system("PAUSE");
    return 0;
}