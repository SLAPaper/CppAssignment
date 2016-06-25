#include <iostream>
#include <iomanip>
#include <vector>

#include "MetroManager.h"
#include "Line.h"
#include "Station.h"
#include "initializer.h"

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
            std::cout << "վ�� \"" << argv[1] << "\" �����ڣ��������롣" << std::endl;
            std::system("PAUSE");
            return 0;
        }
        auto s2 = mm.get_station_by_id(argv[2]);
        if (s2 == boost::none)
        {
            std::cout << "վ�� \"" << argv[2] << "\" �����ڣ��������롣" << std::endl;
            std::system("PAUSE");
            return 0;
        }
        std::cout << "�� " << s1.value().name << " �� " << s2.value().name << " �����·��Ϊ��" << std::endl;
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