#include <iostream>
#include <iomanip>
#include <vector>

#include "MetroManager.h"
#include "Line.h"
#include "Station.h"
#include "initializer.h"
#include "Shell.h"
#include "utility.h"

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

Shell::command_type base_shell = {
    {
        "help",
        [](std::vector<std::string> args) -> int {
            std::cout << "# 北京地铁最短路径计算器" << std::endl
                << "------------------------------" << std::endl
                << "## help" << std::endl
                << "显示本帮助。" << std::endl << std::endl
                << "## list" << std::endl
                << "列出所有线路。" << std::endl << std::endl
                << "## use [地铁线路编号]" << std::endl
                << "进入对应线路命令行。" << std::endl << std::endl
                << "path [站点编号1] [站点编号2]" << std::endl
                << "计算从站点1到站点2的最短路径。" << std::endl << std::endl
                << "## exit" << std::endl
                << "退出。" << std::endl;
            return 0;
        }
    },
    {
        "list",
        [](std::vector<std::string> args) -> int {
            std::cout << "北京市地铁线路有：" << std::endl;
            for (const auto & l : mm.lines)
            {
                std::cout << std::setw(10) << l.line_id << "\t" << l.line_name << std::endl;
            }
            return 0;
        }
    },
    {
        "use",
        [](std::vector<std::string> args) -> int {
            auto l = mm.get_line_by_id(args[0]);
            if (l)
            {
                Shell::command_type list_shell = {
                    {
                        "help",
                        [](std::vector<std::string> args) -> int {
                            std::cout << "# 线路操作" << std::endl
                                << "----------------------" << std::endl
                                << "## help" << std::endl
                                << "显示本帮助。" << std::endl << std::endl
                                << "## list" << std::endl
                                << "列出该线路下所有站点。" << std::endl << std::endl
                                << "## show" << std::endl
                                << "展示该线路相关信息。" << std::endl << std::endl
                                << "## rename [新名字]" << std::endl
                                << "更改线路名称" << std::endl << std::endl
                                << "## use [站点编号]" << std::endl
                                << "进入站点操作命令行。" << std::endl << std::endl
                                << "## exit" << std::endl
                                << "退出。" << std::endl;
                            return 0;
                        }
                    },
                    {
                        "list",
                        [&l](std::vector<std::string> args) -> int {
                            for (const auto & s : l.value().station_list)
                            {
                                std::cout << std::setfill('0') << std::setw(2) << s.line.index + 1 << "\t" << s.name << std::endl;
                            }
                            return 0;
                        }
                    },
                    {
                        "show",
                        [&l](std::vector<std::string> args) -> int {
                            std::cout
                                << "线路名：\t" << l.value().line_name << std::endl
                                << "线路编号：\t" << l.value().line_id << std::endl
                                << "是否环线：\t" << std::boolalpha << l.value().is_circle << std::endl
                                << "站点个数：\t" << l.value().station_list.size() << std::endl;
                            return 0;
                        }
                    },
                    {
                        "rename",
                        [&l](std::vector<std::string> args) -> int {
                            if (args.empty())
                            {
                                l.value().line_name = "";
                                std::cout << "线路名已清空。" << std::endl;
                            }
                            else
                            {
                                l.value().line_name = args[0];
                                std::cout << "线路名已更改为 \"" << args[0] << "\"。" << std::endl;
                            }
                            return 0;
                        }
                    },
                    {
                        "use",
                        [&l](std::vector<std::string> args) -> int {
                            std::cout << "施工中……" << std::endl;
                            return 0;
                        }
                    }
                };
                auto shell = Shell(list_shell, l.value().line_name + "(" + l.value().line_id + ")");
                shell.run();
            }
            else
            {
                std::cout << "线路 \"" << args[1] << "\" 不存在，请检查输入。" << std::endl;
                std::system("PAUSE");
            }
            return 0;
        }
    },
    {
        "path",
        [](std::vector<std::string> args) -> int {
            print_path(args[0], args[1]);
            return 0;
        }
    },
};

int main(int argc, char* argv[]) {
    initialization();

    if (argc < 2)   // shell mode
    {
        auto shell = Shell(base_shell);
        shell.run();
    }
    else if (argc == 3)
    {
        print_path(argv[1], argv[2]);
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