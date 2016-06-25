#include <iostream>
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
            std::cout << "վ�� " << argv[1] << " �����ڣ��������롣" << std::endl;
            std::system("PAUSE");
            return 0;
        }
        auto s2 = mm.get_station_by_id(argv[2]);
        if (s2 == boost::none)
        {
            std::cout << "վ�� " << argv[2] << " �����ڣ��������롣" << std::endl;
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
        // TODO
    }

    std::system("PAUSE");
    return 0;
}