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
        "һ����",
        false
    ),
    Line("02",
        "������",
        true
    ),
    Line("04",
        "�ĺ���",
        false
    ),
    Line("05",
        "�����",
        false
    ),
    Line("06",
        "������",
        false
    ),
    Line("07",
        "�ߺ���",
        false
    ),
    Line("08",
        "�˺���",
        false
    ),
    Line("09",
        "�ź���",
        false
    ),
    Line("10",
        "ʮ����",
        true
    ),
    Line("13",
        "ʮ������",
        false
    ),
    Line("14w",
        "ʮ�ĺ��ߣ����Σ�",
        false
    ),
    Line("14e",
        "ʮ�ĺ��ߣ����Σ�",
        false
    ),
    Line("15",
        "ʮ�����",
        false
    ),
    Line("batong",
        "��ͨ��",
        false
    ),
    Line("changping",
        "��ƽ��",
        false
    ),
    Line("yizhuang",
        "��ׯ��",
        false
    ),
    Line("daxing",
        "������",
        false
    ),
    Line("fangshan",
        "��ɽ��",
        false
    ),
    Line("air",
        "������",
        true
    )
});

Shell::command_type base_shell = {
    {
        "help",
        [](std::vector<std::string> args) -> int {
            std::cout << "# �����������·��������" << std::endl
                << "------------------------------" << std::endl
                << "## help" << std::endl
                << "��ʾ��������" << std::endl << std::endl
                << "## list" << std::endl
                << "�г�������·��" << std::endl << std::endl
                << "## use [������·���]" << std::endl
                << "�����Ӧ��·�����С�" << std::endl << std::endl
                << "path [վ����1] [վ����2]" << std::endl
                << "�����վ��1��վ��2�����·����" << std::endl << std::endl
                << "## exit" << std::endl
                << "�˳���" << std::endl;
            return 0;
        }
    },
    {
        "list",
        [](std::vector<std::string> args) -> int {
            std::cout << "�����е�����·�У�" << std::endl;
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
                            std::cout << "# ��·����" << std::endl
                                << "----------------------" << std::endl
                                << "## help" << std::endl
                                << "��ʾ��������" << std::endl << std::endl
                                << "## list" << std::endl
                                << "�г�����·������վ�㡣" << std::endl << std::endl
                                << "## show" << std::endl
                                << "չʾ����·�����Ϣ��" << std::endl << std::endl
                                << "## rename [������]" << std::endl
                                << "������·����" << std::endl << std::endl
                                << "## use [վ����]" << std::endl
                                << "����վ����������С�" << std::endl << std::endl
                                << "## exit" << std::endl
                                << "�˳���" << std::endl;
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
                                << "��·����\t" << l.value().line_name << std::endl
                                << "��·��ţ�\t" << l.value().line_id << std::endl
                                << "�Ƿ��ߣ�\t" << std::boolalpha << l.value().is_circle << std::endl
                                << "վ�������\t" << l.value().station_list.size() << std::endl;
                            return 0;
                        }
                    },
                    {
                        "rename",
                        [&l](std::vector<std::string> args) -> int {
                            if (args.empty())
                            {
                                l.value().line_name = "";
                                std::cout << "��·������ա�" << std::endl;
                            }
                            else
                            {
                                l.value().line_name = args[0];
                                std::cout << "��·���Ѹ���Ϊ \"" << args[0] << "\"��" << std::endl;
                            }
                            return 0;
                        }
                    },
                    {
                        "use",
                        [&l](std::vector<std::string> args) -> int {
                            std::cout << "ʩ���С���" << std::endl;
                            return 0;
                        }
                    }
                };
                auto shell = Shell(list_shell, l.value().line_name + "(" + l.value().line_id + ")");
                shell.run();
            }
            else
            {
                std::cout << "��· \"" << args[1] << "\" �����ڣ��������롣" << std::endl;
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
            std::cout << "# �����������·��������" << std::endl
                << "--------------------" << std::endl
                << "## �޲�������" << std::endl
                << "���� shell mode" << std::endl << std::endl
                << "## help" << std::endl
                << "��ʾ������" << std::endl << std::endl
                << "## lines" << std::endl
                << "�г����е�����·" << std::endl << std::endl
                << "## line [������·���] stations" << std::endl
                << "�г�ĳ��·������վ��" << std::endl << std::endl;
        }
        else if (argv1 == "lines")
        {
            std::cout << "�����е�����·�У�" << std::endl;
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
                std::cout << "��· \"" << argv[2] << "\" �����ڣ��������롣" << std::endl;
                std::system("PAUSE");
                return 0;
            }
            std::cout << "��· " << l.value().line_name << "(" << l.value().line_id << ") ��վ���У�" << std::endl;
            for (auto s : l.value().station_list)
            {
                std::cout << s.get_id() << "\t" << s.name << std::endl;
            }
        }
        else
        {
            std::cout << "���� \"" << argv[1] << "\" �޷�ʶ���������롣" << std::endl;
        }
    }

    std::system("PAUSE");
    return 0;
}