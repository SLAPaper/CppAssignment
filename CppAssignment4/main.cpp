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
        [](Shell & shell, std::vector<std::string> args) -> int {
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
        [](Shell & shell, std::vector<std::string> args) -> int {
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
        [](Shell & shell, std::vector<std::string> args) -> int {
            auto l = mm.get_line_by_id(args[0]);
            if (l)
            {
                Shell::command_type list_shell = {
                    {
                        "help",
                        [](Shell & shell, std::vector<std::string> args) -> int {
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
                        [&l](Shell & shell, std::vector<std::string> args) -> int {
                            for (const auto & s : l.value().station_list)
                            {
                                std::cout << std::setfill('0') << std::setw(2) << s.line.index + 1 << "\t" << s.name << std::endl;
                            }
                            return 0;
                        }
                    },
                    {
                        "show",
                        [&l](Shell & shell, std::vector<std::string> args) -> int {
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
                        [&l](Shell & shell, std::vector<std::string> args) -> int {
                            if (args.empty())
                            {
                                l.value().line_name = "";
                                shell.prefix = "��· ";
                                std::cout << "��·������ա�" << std::endl;
                            }
                            else
                            {
                                l.value().line_name = args[0];
                                shell.prefix = "��· " + l.value().line_name + "(" + l.value().line_id + ")";
                                std::cout << "��·���Ѹ���Ϊ \"" << args[0] << "\"��" << std::endl;
                            }
                            return 0;
                        }
                    },
                    {
                        "use",
                        [&l](Shell & shell, std::vector<std::string> args) -> int {
                            if (args.size() < 1)
                            {
                                std::cout << "û������վ�㣬�����ԡ�" << std::endl;
                            }
                            else
                            {
                                auto index = std::stoull(args[0]) - 1;
                                if (index >= l.value().station_list.size())
                                {
                                    std::cout << "û�����վ�㣬�����ԡ�" << std::endl;
                                }
                                else
                                {
                                    auto & s = l.value().station_list[index];
                                    Shell::command_type station_shell = {
                                        // TODO
                                        {
                                            "help",
                                            [](Shell & shell, std::vector<std::string> args) -> int {
                                                std::cout << "# վ�����" << std::endl
                                                    << "----------------------" << std::endl
                                                    << "## help" << std::endl
                                                    << "��ʾ��������" << std::endl << std::endl
                                                    << "## show" << std::endl
                                                    << "չʾ��վ�������Ϣ��" << std::endl << std::endl
                                                    << "## rename [������]" << std::endl
                                                    << "����վ������" << std::endl << std::endl
                                                    << "## exit" << std::endl
                                                    << "�˳���" << std::endl;
                                                return 0;
                                            }
                                        },
                                        {
                                            "show",
                                            [&s](Shell & shell, std::vector<std::string> args) -> int {
                                                std::cout << "վ������" << "\t" << s.name << std::endl
                                                    << "վ����" << "\t" << s.get_id() << std::endl
                                                    << "������·" << "\t" << s.line.line->line_name << "(" << s.line.index + 1 << ")" << std::endl
                                                    << "�Ƿ�����վ" << "\t" << std::boolalpha << s.is_up << std::endl
                                                    << "�Ƿ�����վ" << "\t" << std::boolalpha << s.is_down << std::endl;
                                                return 0;
                                            }
                                        },
                                        {
                                            "rename",
                                            [&s](Shell & shell, std::vector<std::string> args) -> int {
                                                if (args.empty())
                                                {
                                                    s.name = "";
                                                    shell.prefix = "վ�� ";
                                                    std::cout << "վ��������ա�" << std::endl;
                                                }
                                                else
                                                {
                                                    s.name = args[0];
                                                    shell.prefix = "վ�� " + s.name + "(" + s.get_id() + ")";
                                                    std::cout << "վ�����Ѹ���Ϊ \"" << args[0] << "\"��" << std::endl;
                                                }
                                                return 0;
                                            }
                                        }
                                    };
                                    auto sh = Shell(station_shell, "վ�� " + s.name + "(" + s.get_id() + ")");
                                    sh.run();
                                }
                            }
                            return 0;
                        }
                    }
                };
                auto sh = Shell(list_shell, "��· " + l.value().line_name + "(" + l.value().line_id + ")");
                sh.run();
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
        [](Shell & shell, std::vector<std::string> args) -> int {
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