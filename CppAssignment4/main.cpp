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