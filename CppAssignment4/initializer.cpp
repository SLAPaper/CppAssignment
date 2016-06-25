#include "initializer.h"

extern MetroManager mm;

inline void initialize_stations()
{
    mm.get_line_by_id("01").value().assign_station({
        Station{ "ƻ��԰" },
        Station{ "�ų�" },
        Station{ "�˽�����԰" },
        Station{ "�˱�ɽ" },
        Station{ "��Ȫ·" },
        Station{ "�����" },
        Station{ "����·" },
        Station{ "������" },
        Station{ "���²����" },
        Station{ "ľ�ص�" },
        Station{ "����ʿ·" },
        Station{ "������" },
        Station{ "����" },
        Station{ "�찲����" },
        Station{ "�찲�Ŷ�" },
        Station{ "������" },
        Station{ "����" },
        Station{ "������" },
        Station{ "������" },
        Station{ "��ó" },
        Station{ "����·" },
        Station{ "�Ļ�" },
        Station{ "�Ļݶ�" }
    });
    mm.get_line_by_id("02").value().assign_station({
        Station{ "��ֱ��" },
        Station{ "����ׯ" },
        Station{ "������" },
        Station{ "������" },
        Station{ "������" },
        Station{ "������" },
        Station{ "��ƽ��" },
        Station{ "ǰ��" },
        Station{ "������" },
        Station{ "����վ" },
        Station{ "������" },
        Station{ "������" },
        Station{ "����ʮ��" },
        Station{ "��ֱ��" },
        Station{ "Ӻ�͹�" },
        Station{ "������" },
        Station{ "��¥���" },
        Station{ "��ˮ̶" }
    });
    mm.get_line_by_id("04").value().assign_station({
        Station{ "�����ű�" },
        Station{ "������" },
        Station{ "��Է" },
        Station{ "Բ��԰" },
        Station{ "������ѧ����" },
        Station{ "�йش�" },
        Station{ "�����ׯ" },
        Station{ "�����ѧ" },
        Station{ "κ����" },
        Station{ "����ͼ���" },
        Station{ "����԰" },
        Station{ "��ֱ��" },
        Station{ "�½ֿ�" },
        Station{ "ƽ����" },
        Station{ "����" },
        Station{ "�龳��ͬ" },
        Station{ "����" },
        Station{ "������" },
        Station{ "���п�" },
        Station{ "��Ȼͤ" },
        Station{ "������վ" },
        Station{ "��ұ�" },
        Station{ "������" },
        Station{ "��������" }
    });
    mm.get_line_by_id("05").value().assign_station({
        Station{ "��ͨԷ��" },
        Station{ "��ͨԷ" },
        Station{ "��ͨԷ��" },
        Station{ "��ˮ��" },
        Station{ "��ˮ����" },
        Station{ "��Է·��" },
        Station{ "����·��" },
        Station{ "�������ֱ���" },
        Station{ "���������Ͽ�" },
        Station{ "��ƽ����" },
        Station{ "��ƽ�ﱱ��" },
        Station{ "Ӻ�͹�" },
        Station{ "������" },
        Station{ "������·" },
        Station{ "����" },
        Station{ "���п�" },
        Station{ "����" },
        Station{ "������" },
        Station{ "������" },
        Station{ "��̳����" },
        Station{ "�ѻ���" },
        Station{ "����Ҥ" },
        Station{ "�μ�ׯ" }
    });
    mm.get_line_by_id("06").value().assign_station({
        Station{ "������·��" },
        Station{ "������" },
        Station{ "��԰��" },
        Station{ "��ʯ����" },
        Station{ "����ׯ��" },
        Station{ "����ׯ" },
        Station{ "ƽ����" },
        Station{ "������" },
        Station{ "�������" },
        Station{ "����" },
        Station{ "������" },
        Station{ "������" },
        Station{ "����¥" },
        Station{ "��̨·" },
        Station{ "ʮ�ﱤ" },
        Station{ "����·" },
        Station{ "������" },
        Station{ "����" },
        Station{ "��Ӫ" },
        Station{ "�ݷ�" },
        Station{ "����ѧԺ·" },
        Station{ "ͨ�ݱ���" },
        Station{ "ͨ����" },
        Station{ "���˺���" },
        Station{ "���˺Ӷ�" },
        Station{ "�¼Ҹ�" },
        Station{ "����԰" },
        Station{ "º��" }
    });
    mm.get_line_by_id("07").value().assign_station({
        Station{ "������վ" },
        Station{ "����" },
        Station{ "���Ӫ" },
        Station{ "�㰲����" },
        Station{ "���п�" },
        Station{ "������" },
        Station{ "���п�" },
        Station{ "����" },
        Station{ "������" },
        Station{ "��������" },
        Station{ "��������" },
        Station{ "˫��" },
        Station{ "����ɽ" },
        Station{ "��ͤ" },
        Station{ "������" },
        Station{ "����" },
        Station{ "��¥��ׯ" },
        Station{ "���ֹȾ���" },
        Station{ "��ͷ" },
        Station{ "˫��" },
        Station{ "������" }
    });
    mm.get_line_by_id("08").value().assign_station({
        Station{ "����ׯ" },
        Station{ "��֪·" },
        Station{ "ƽ����" },
        Station{ "�����۶����" },
        Station{ "��Ӫ" },
        Station{ "����" },
        Station{ "��С��" },
        Station{ "��̩ׯ" },
        Station{ "������" },
        Station{ "ɭ�ֹ�԰����" },
        Station{ "����ƥ�˹�԰" },
        Station{ "��������" },
        Station{ "������" },
        Station{ "������" },
        Station{ "�����ﱱ��" },
        Station{ "��¥���" },
        Station{ "ʲɲ��" },
        Station{ "�������" }
    });
    mm.get_line_by_id("09").value().assign_station({
        Station{ "����ͼ���" },
        Station{ "��ʯ����" },
        Station{ "�׶���" },
        Station{ "���²����" },
        Station{ "������վ" },
        Station{ "�����Ŷ�" },
        Station{ "������" },
        Station{ "����ׯ" },
        Station{ "��̨�����" },
        Station{ "��̨��·" },
        Station{ "����·" },
        Station{ "��̨�Ƽ�԰" },
        Station{ "����ׯ" }
    });
    mm.get_line_by_id("10").value().assign_station({
        Station{ "�͹�" },
        Station{ "���ݽ�" },
        Station{ "�����ׯ" },
        Station{ "֪����" },
        Station{ "֪��·" },
        Station{ "������" },
        Station{ "ĵ��԰" },
        Station{ "������" },
        Station{ "������" },
        Station{ "������" },
        Station{ "���������Ͽ�" },
        Station{ "��ҩ��" },
        Station{ "̫����" },
        Station{ "��Ԫ��" },
        Station{ "������" },
        Station{ "ũҵչ����" },
        Station{ "�Ž��" },
        Station{ "����¥" },
        Station{ "��̨Ϧ��" },
        Station{ "��ó" },
        Station{ "˫��" },
        Station{ "����" },
        Station{ "�˼�԰" },
        Station{ "ʮ���" },
        Station{ "������" },
        Station{ "������" },
        Station{ "�μ�ׯ" },
        Station{ "ʯ��ׯ" },
        Station{ "�����" },
        Station{ "���Ŷ�" },
        Station{ "������" },
        Station{ "����" },
        Station{ "�ͼ���" },
        Station{ "�׾�ó" },
        Station{ "��̨վ" },
        Station{ "����" },
        Station{ "����" },
        Station{ "������" },
        Station{ "������" },
        Station{ "������" },
        Station{ "������̨" },
        Station{ "������" },
        Station{ "������" },
        Station{ "������" },
        Station{ "����Ӫ" }
    });
    mm.get_line_by_id("13").value().assign_station({
        Station{ "��ֱ��" },
        Station{ "������" },
        Station{ "֪��·" },
        Station{ "�����" },
        Station{ "�ϵ�" },
        Station{ "������" },
        Station{ "����" },
        Station{ "������" },
        Station{ "��Ӫ" },
        Station{ "��ˮ��" },
        Station{ "��Է" },
        Station{ "������" },
        Station{ "��ҩ��" },
        Station{ "������" },
        Station{ "����" },
        Station{ "��ֱ��" }
    });
    mm.get_line_by_id("14e").value().assign_station({
        Station{ "������վ" },
        Station{ "��Ȼ��" },
        Station{ "��������" },
        Station{ "��̩" },
        Station{ "�ѻ���" },
        Station{ "��ׯ" },
        Station{ "ʮ���" },
        Station{ "�ϰ���ׯ" },
        Station{ "����������" },
        Station{ "ƽ��԰" },
        Station{ "����ɽ" },
        Station{ "����·" },
        Station{ "����" },
        Station{ "��̨·" },
        Station{ "������԰" },
        Station{ "��Ӫ" },
        Station{ "���籱��" },
        Station{ "��̨" },
        Station{ "�߼�԰" },
        Station{ "������" },
        Station{ "��ͨ" },
        Station{ "����" },
        Station{ "������" },
        Station{ "����Ӫ" },
        Station{ "�Ƹ�ׯ" }
    });
    mm.get_line_by_id("14w").value().assign_station({
        Station{ "�Ź�ׯ" },
        Station{ "԰��԰" },
        Station{ "����Ҥ" },
        Station{ "��ׯ��" },
        Station{ "��" },
        Station{ "����ׯ" },
        Station{ "����" }
    });
    mm.get_line_by_id("15").value().assign_station({
        Station{ "�廪��·����" },
        Station{ "������" },
        Station{ "��ɳ̲" },
        Station{ "����ƥ�˹�԰" },
        Station{ "����·" },
        Station{ "����·��" },
        Station{ "��ׯ" },
        Station{ "������" },
        Station{ "����" },
        Station{ "������" },
        Station{ "�޸�ׯ" },
        Station{ "��ȪӪ" },
        Station{ "���" },
        Station{ "��չ" },
        Station{ "���濲" },
        Station{ "��ɳ��" },
        Station{ "�Ϸ���" },
        Station{ "ʯ��" },
        Station{ "˳��" },
        Station{ "ٺ��" }
    });
    mm.get_line_by_id("air").value().assign_station({
        Station{ "��ֱ��" },
        Station{ "��Ԫ��" },
        Station{ "T3��վ¥" , false, true },
        Station{ "T2��վ¥" , false, true }
    });
    mm.get_line_by_id("batong").value().assign_station({
        Station{ "�Ļ�" },
        Station{ "�Ļݶ�" },
        Station{ "�߱���" },
        Station{ "��ý��ѧ" },
        Station{ "˫��" },
        Station{ "��ׯ" },
        Station{ "������" },
        Station{ "ͨ�ݱ�Է" },
        Station{ "��԰" },
        Station{ "�ſ���" },
        Station{ "��԰" },
        Station{ "�ٺ���" },
        Station{ "����" }
    });
    mm.get_line_by_id("changping").value().assign_station({
        Station{ "��ƽ��ɽ��" },
        Station{ "ʮ���꾰��" },
        Station{ "��ƽ" },
        Station{ "��ƽ����" },
        Station{ "������" },
        Station{ "����" },
        Station{ "ɳ�Ӹ߽�԰" },
        Station{ "ɳ��" },
        Station{ "������" },
        Station{ "����ׯ" },
        Station{ "������ѧ԰" },
        Station{ "������" }
    });
    mm.get_line_by_id("daxing").value().assign_station({
        Station{ "��������" },
        Station{ "�¹�" },
        Station{ "������" },
        Station{ "���׵걱" },
        Station{ "���׵���" },
        Station{ "��԰" },
        Station{ "��Դ·" },
        Station{ "�ƴ������" },
        Station{ "�ƴ��վ" },
        Station{ "���ׯ" },
        Station{ "����ҽҩ����" },
        Station{ "�칬Ժ" }
    });
    mm.get_line_by_id("fangshan").value().assign_station({
        Station{ "����ׯ" },
        Station{ "����̨" },
        Station{ "����" },
        Station{ "����" },
        Station{ "��ʷ�" },
        Station{ "������" },
        Station{ "�����ѧ�Ǳ�" },
        Station{ "�����ѧ��" },
        Station{ "�����ѧ����" },
        Station{ "�����Ϲ�" },
        Station{ "��ׯ" },
    });
    mm.get_line_by_id("yizhuang").value().assign_station({
        Station{ "�μ�ׯ" },
        Station{ "Ф��" },
        Station{ "С����" },
        Station{ "�ɹ�" },
        Station{ "��ׯ��" },
        Station{ "��ׯ�Ļ�԰" },
        Station{ "��Դ��" },
        Station{ "�پ�����" },
        Station{ "�ٲ�����" },
        Station{ "ͬ����·" },
        Station{ "����·" },
        Station{ "������" },
        Station{ "����" }
    });
}

inline void initialize_distances()
{
    mm.station_distances[&mm.get_station_by_id("0101").value()].emplace_back(&mm.get_station_by_id("0102").value(), 2606);
    mm.station_distances[&mm.get_station_by_id("0102").value()].emplace_back(&mm.get_station_by_id("0101").value(), 2606);
    mm.station_distances[&mm.get_station_by_id("0102").value()].emplace_back(&mm.get_station_by_id("0103").value(), 1921);
    mm.station_distances[&mm.get_station_by_id("0103").value()].emplace_back(&mm.get_station_by_id("0102").value(), 1921);
    mm.station_distances[&mm.get_station_by_id("0103").value()].emplace_back(&mm.get_station_by_id("0104").value(), 1953);
    mm.station_distances[&mm.get_station_by_id("0104").value()].emplace_back(&mm.get_station_by_id("0103").value(), 1953);
    mm.station_distances[&mm.get_station_by_id("0104").value()].emplace_back(&mm.get_station_by_id("0105").value(), 1479);
    mm.station_distances[&mm.get_station_by_id("0105").value()].emplace_back(&mm.get_station_by_id("0104").value(), 1479);
    mm.station_distances[&mm.get_station_by_id("0105").value()].emplace_back(&mm.get_station_by_id("0106").value(), 1810);
    mm.station_distances[&mm.get_station_by_id("0106").value()].emplace_back(&mm.get_station_by_id("0105").value(), 1810);
    mm.station_distances[&mm.get_station_by_id("0106").value()].emplace_back(&mm.get_station_by_id("0107").value(), 1778);
    mm.station_distances[&mm.get_station_by_id("0107").value()].emplace_back(&mm.get_station_by_id("0106").value(), 1778);
    mm.station_distances[&mm.get_station_by_id("0107").value()].emplace_back(&mm.get_station_by_id("0108").value(), 1313);
    mm.station_distances[&mm.get_station_by_id("0108").value()].emplace_back(&mm.get_station_by_id("0107").value(), 1313);
    mm.station_distances[&mm.get_station_by_id("0108").value()].emplace_back(&mm.get_station_by_id("0109").value(), 1172);
    mm.station_distances[&mm.get_station_by_id("0109").value()].emplace_back(&mm.get_station_by_id("0108").value(), 1172);
    mm.station_distances[&mm.get_station_by_id("0109").value()].emplace_back(&mm.get_station_by_id("0110").value(), 1166);
    mm.station_distances[&mm.get_station_by_id("0110").value()].emplace_back(&mm.get_station_by_id("0109").value(), 1166);
    mm.station_distances[&mm.get_station_by_id("0110").value()].emplace_back(&mm.get_station_by_id("0111").value(), 1291);
    mm.station_distances[&mm.get_station_by_id("0111").value()].emplace_back(&mm.get_station_by_id("0110").value(), 1291);
    mm.station_distances[&mm.get_station_by_id("0111").value()].emplace_back(&mm.get_station_by_id("0112").value(), 424);
    mm.station_distances[&mm.get_station_by_id("0112").value()].emplace_back(&mm.get_station_by_id("0111").value(), 424);
    mm.station_distances[&mm.get_station_by_id("0112").value()].emplace_back(&mm.get_station_by_id("0113").value(), 1590);
    mm.station_distances[&mm.get_station_by_id("0113").value()].emplace_back(&mm.get_station_by_id("0112").value(), 1590);
    mm.station_distances[&mm.get_station_by_id("0113").value()].emplace_back(&mm.get_station_by_id("0114").value(), 1217);
    mm.station_distances[&mm.get_station_by_id("0114").value()].emplace_back(&mm.get_station_by_id("0113").value(), 1217);
    mm.station_distances[&mm.get_station_by_id("0114").value()].emplace_back(&mm.get_station_by_id("0115").value(), 925);
    mm.station_distances[&mm.get_station_by_id("0115").value()].emplace_back(&mm.get_station_by_id("0114").value(), 925);
    mm.station_distances[&mm.get_station_by_id("0115").value()].emplace_back(&mm.get_station_by_id("0116").value(), 852);
    mm.station_distances[&mm.get_station_by_id("0116").value()].emplace_back(&mm.get_station_by_id("0115").value(), 852);
    mm.station_distances[&mm.get_station_by_id("0116").value()].emplace_back(&mm.get_station_by_id("0117").value(), 774);
    mm.station_distances[&mm.get_station_by_id("0117").value()].emplace_back(&mm.get_station_by_id("0116").value(), 774);
    mm.station_distances[&mm.get_station_by_id("0117").value()].emplace_back(&mm.get_station_by_id("0118").value(), 1230);
    mm.station_distances[&mm.get_station_by_id("0118").value()].emplace_back(&mm.get_station_by_id("0117").value(), 1230);
    mm.station_distances[&mm.get_station_by_id("0118").value()].emplace_back(&mm.get_station_by_id("0119").value(), 1377);
    mm.station_distances[&mm.get_station_by_id("0119").value()].emplace_back(&mm.get_station_by_id("0118").value(), 1377);
    mm.station_distances[&mm.get_station_by_id("0119").value()].emplace_back(&mm.get_station_by_id("0120").value(), 790);
    mm.station_distances[&mm.get_station_by_id("0120").value()].emplace_back(&mm.get_station_by_id("0119").value(), 790);
    mm.station_distances[&mm.get_station_by_id("0120").value()].emplace_back(&mm.get_station_by_id("0121").value(), 1385);
    mm.station_distances[&mm.get_station_by_id("0121").value()].emplace_back(&mm.get_station_by_id("0120").value(), 1385);
    mm.station_distances[&mm.get_station_by_id("0121").value()].emplace_back(&mm.get_station_by_id("0122").value(), 1673);
    mm.station_distances[&mm.get_station_by_id("0122").value()].emplace_back(&mm.get_station_by_id("0121").value(), 1673);
    mm.station_distances[&mm.get_station_by_id("0122").value()].emplace_back(&mm.get_station_by_id("0123").value(), 1714);
    mm.station_distances[&mm.get_station_by_id("0123").value()].emplace_back(&mm.get_station_by_id("0122").value(), 1714);

    mm.station_distances[&mm.get_station_by_id("0201").value()].emplace_back(&mm.get_station_by_id("0202").value(), 909);
    mm.station_distances[&mm.get_station_by_id("0202").value()].emplace_back(&mm.get_station_by_id("0201").value(), 909);
    mm.station_distances[&mm.get_station_by_id("0202").value()].emplace_back(&mm.get_station_by_id("0203").value(), 960);
    mm.station_distances[&mm.get_station_by_id("0203").value()].emplace_back(&mm.get_station_by_id("0202").value(), 960);
    mm.station_distances[&mm.get_station_by_id("0203").value()].emplace_back(&mm.get_station_by_id("0204").value(), 1832);
    mm.station_distances[&mm.get_station_by_id("0204").value()].emplace_back(&mm.get_station_by_id("0203").value(), 1832);
    mm.station_distances[&mm.get_station_by_id("0204").value()].emplace_back(&mm.get_station_by_id("0205").value(), 1234);
    mm.station_distances[&mm.get_station_by_id("0205").value()].emplace_back(&mm.get_station_by_id("0204").value(), 1234);
    mm.station_distances[&mm.get_station_by_id("0205").value()].emplace_back(&mm.get_station_by_id("0206").value(), 929);
    mm.station_distances[&mm.get_station_by_id("0206").value()].emplace_back(&mm.get_station_by_id("0205").value(), 929);
    mm.station_distances[&mm.get_station_by_id("0206").value()].emplace_back(&mm.get_station_by_id("0207").value(), 851);
    mm.station_distances[&mm.get_station_by_id("0207").value()].emplace_back(&mm.get_station_by_id("0206").value(), 851);
    mm.station_distances[&mm.get_station_by_id("0207").value()].emplace_back(&mm.get_station_by_id("0208").value(), 1171);
    mm.station_distances[&mm.get_station_by_id("0208").value()].emplace_back(&mm.get_station_by_id("0207").value(), 1171);
    mm.station_distances[&mm.get_station_by_id("0208").value()].emplace_back(&mm.get_station_by_id("0209").value(), 1634);
    mm.station_distances[&mm.get_station_by_id("0209").value()].emplace_back(&mm.get_station_by_id("0208").value(), 1634);
    mm.station_distances[&mm.get_station_by_id("0209").value()].emplace_back(&mm.get_station_by_id("0210").value(), 1023);
    mm.station_distances[&mm.get_station_by_id("0210").value()].emplace_back(&mm.get_station_by_id("0209").value(), 1023);
    mm.station_distances[&mm.get_station_by_id("0210").value()].emplace_back(&mm.get_station_by_id("0211").value(), 945);
    mm.station_distances[&mm.get_station_by_id("0211").value()].emplace_back(&mm.get_station_by_id("0210").value(), 945);
    mm.station_distances[&mm.get_station_by_id("0211").value()].emplace_back(&mm.get_station_by_id("0212").value(), 1763);
    mm.station_distances[&mm.get_station_by_id("0212").value()].emplace_back(&mm.get_station_by_id("0211").value(), 1763);
    mm.station_distances[&mm.get_station_by_id("0212").value()].emplace_back(&mm.get_station_by_id("0213").value(), 1027);
    mm.station_distances[&mm.get_station_by_id("0213").value()].emplace_back(&mm.get_station_by_id("0212").value(), 1027);
    mm.station_distances[&mm.get_station_by_id("0213").value()].emplace_back(&mm.get_station_by_id("0214").value(), 824);
    mm.station_distances[&mm.get_station_by_id("0214").value()].emplace_back(&mm.get_station_by_id("0213").value(), 824);
    mm.station_distances[&mm.get_station_by_id("0214").value()].emplace_back(&mm.get_station_by_id("0215").value(), 2228);
    mm.station_distances[&mm.get_station_by_id("0215").value()].emplace_back(&mm.get_station_by_id("0214").value(), 2228);
    mm.station_distances[&mm.get_station_by_id("0215").value()].emplace_back(&mm.get_station_by_id("0216").value(), 794);
    mm.station_distances[&mm.get_station_by_id("0216").value()].emplace_back(&mm.get_station_by_id("0215").value(), 794);
    mm.station_distances[&mm.get_station_by_id("0216").value()].emplace_back(&mm.get_station_by_id("0217").value(), 1237);
    mm.station_distances[&mm.get_station_by_id("0217").value()].emplace_back(&mm.get_station_by_id("0216").value(), 1237);
    mm.station_distances[&mm.get_station_by_id("0217").value()].emplace_back(&mm.get_station_by_id("0218").value(), 1766);
    mm.station_distances[&mm.get_station_by_id("0218").value()].emplace_back(&mm.get_station_by_id("0217").value(), 1766);
    mm.station_distances[&mm.get_station_by_id("0218").value()].emplace_back(&mm.get_station_by_id("0201").value(), 1899);
    mm.station_distances[&mm.get_station_by_id("0201").value()].emplace_back(&mm.get_station_by_id("0218").value(), 1899);

    mm.station_distances[&mm.get_station_by_id("0401").value()].emplace_back(&mm.get_station_by_id("0402").value(), 1363);
    mm.station_distances[&mm.get_station_by_id("0402").value()].emplace_back(&mm.get_station_by_id("0401").value(), 1363);
    mm.station_distances[&mm.get_station_by_id("0402").value()].emplace_back(&mm.get_station_by_id("0403").value(), 1251);
    mm.station_distances[&mm.get_station_by_id("0403").value()].emplace_back(&mm.get_station_by_id("0402").value(), 1251);
    mm.station_distances[&mm.get_station_by_id("0403").value()].emplace_back(&mm.get_station_by_id("0404").value(), 1672);
    mm.station_distances[&mm.get_station_by_id("0404").value()].emplace_back(&mm.get_station_by_id("0403").value(), 1672);
    mm.station_distances[&mm.get_station_by_id("0404").value()].emplace_back(&mm.get_station_by_id("0405").value(), 1295);
    mm.station_distances[&mm.get_station_by_id("0405").value()].emplace_back(&mm.get_station_by_id("0404").value(), 1295);
    mm.station_distances[&mm.get_station_by_id("0405").value()].emplace_back(&mm.get_station_by_id("0406").value(), 887);
    mm.station_distances[&mm.get_station_by_id("0406").value()].emplace_back(&mm.get_station_by_id("0405").value(), 887);
    mm.station_distances[&mm.get_station_by_id("0406").value()].emplace_back(&mm.get_station_by_id("0407").value(), 900);
    mm.station_distances[&mm.get_station_by_id("0407").value()].emplace_back(&mm.get_station_by_id("0406").value(), 900);
    mm.station_distances[&mm.get_station_by_id("0407").value()].emplace_back(&mm.get_station_by_id("0408").value(), 1063);
    mm.station_distances[&mm.get_station_by_id("0408").value()].emplace_back(&mm.get_station_by_id("0407").value(), 1063);
    mm.station_distances[&mm.get_station_by_id("0408").value()].emplace_back(&mm.get_station_by_id("0409").value(), 1051);
    mm.station_distances[&mm.get_station_by_id("0409").value()].emplace_back(&mm.get_station_by_id("0408").value(), 1051);
    mm.station_distances[&mm.get_station_by_id("0409").value()].emplace_back(&mm.get_station_by_id("0410").value(), 1658);
    mm.station_distances[&mm.get_station_by_id("0410").value()].emplace_back(&mm.get_station_by_id("0409").value(), 1658);
    mm.station_distances[&mm.get_station_by_id("0410").value()].emplace_back(&mm.get_station_by_id("0411").value(), 1517);
    mm.station_distances[&mm.get_station_by_id("0411").value()].emplace_back(&mm.get_station_by_id("0410").value(), 1517);
    mm.station_distances[&mm.get_station_by_id("0411").value()].emplace_back(&mm.get_station_by_id("0412").value(), 1441);
    mm.station_distances[&mm.get_station_by_id("0412").value()].emplace_back(&mm.get_station_by_id("0411").value(), 1441);
    mm.station_distances[&mm.get_station_by_id("0412").value()].emplace_back(&mm.get_station_by_id("0413").value(), 1025);
    mm.station_distances[&mm.get_station_by_id("0413").value()].emplace_back(&mm.get_station_by_id("0412").value(), 1025);
    mm.station_distances[&mm.get_station_by_id("0413").value()].emplace_back(&mm.get_station_by_id("0414").value(), 1100);
    mm.station_distances[&mm.get_station_by_id("0414").value()].emplace_back(&mm.get_station_by_id("0413").value(), 1100);
    mm.station_distances[&mm.get_station_by_id("0414").value()].emplace_back(&mm.get_station_by_id("0415").value(), 1100);
    mm.station_distances[&mm.get_station_by_id("0415").value()].emplace_back(&mm.get_station_by_id("0414").value(), 1100);
    mm.station_distances[&mm.get_station_by_id("0415").value()].emplace_back(&mm.get_station_by_id("0416").value(), 869);
    mm.station_distances[&mm.get_station_by_id("0416").value()].emplace_back(&mm.get_station_by_id("0415").value(), 869);
    mm.station_distances[&mm.get_station_by_id("0416").value()].emplace_back(&mm.get_station_by_id("0417").value(), 1011);
    mm.station_distances[&mm.get_station_by_id("0417").value()].emplace_back(&mm.get_station_by_id("0416").value(), 1011);
    mm.station_distances[&mm.get_station_by_id("0417").value()].emplace_back(&mm.get_station_by_id("0418").value(), 815);
    mm.station_distances[&mm.get_station_by_id("0418").value()].emplace_back(&mm.get_station_by_id("0417").value(), 815);
    mm.station_distances[&mm.get_station_by_id("0418").value()].emplace_back(&mm.get_station_by_id("0419").value(), 1152);
    mm.station_distances[&mm.get_station_by_id("0419").value()].emplace_back(&mm.get_station_by_id("0418").value(), 1152);
    mm.station_distances[&mm.get_station_by_id("0419").value()].emplace_back(&mm.get_station_by_id("0420").value(), 1200);
    mm.station_distances[&mm.get_station_by_id("0420").value()].emplace_back(&mm.get_station_by_id("0419").value(), 1200);
    mm.station_distances[&mm.get_station_by_id("0420").value()].emplace_back(&mm.get_station_by_id("0421").value(), 1643);
    mm.station_distances[&mm.get_station_by_id("0421").value()].emplace_back(&mm.get_station_by_id("0420").value(), 1643);
    mm.station_distances[&mm.get_station_by_id("0421").value()].emplace_back(&mm.get_station_by_id("0422").value(), 1480);
    mm.station_distances[&mm.get_station_by_id("0422").value()].emplace_back(&mm.get_station_by_id("0421").value(), 1480);
    mm.station_distances[&mm.get_station_by_id("0422").value()].emplace_back(&mm.get_station_by_id("0423").value(), 827);
    mm.station_distances[&mm.get_station_by_id("0423").value()].emplace_back(&mm.get_station_by_id("0422").value(), 827);
    mm.station_distances[&mm.get_station_by_id("0423").value()].emplace_back(&mm.get_station_by_id("0424").value(), 989);
    mm.station_distances[&mm.get_station_by_id("0424").value()].emplace_back(&mm.get_station_by_id("0423").value(), 989);

    mm.station_distances[&mm.get_station_by_id("0501").value()].emplace_back(&mm.get_station_by_id("0502").value(), 939);
    mm.station_distances[&mm.get_station_by_id("0502").value()].emplace_back(&mm.get_station_by_id("0501").value(), 939);
    mm.station_distances[&mm.get_station_by_id("0502").value()].emplace_back(&mm.get_station_by_id("0503").value(), 965);
    mm.station_distances[&mm.get_station_by_id("0503").value()].emplace_back(&mm.get_station_by_id("0502").value(), 965);
    mm.station_distances[&mm.get_station_by_id("0503").value()].emplace_back(&mm.get_station_by_id("0504").value(), 1544);
    mm.station_distances[&mm.get_station_by_id("0504").value()].emplace_back(&mm.get_station_by_id("0503").value(), 1544);
    mm.station_distances[&mm.get_station_by_id("0504").value()].emplace_back(&mm.get_station_by_id("0505").value(), 1305);
    mm.station_distances[&mm.get_station_by_id("0505").value()].emplace_back(&mm.get_station_by_id("0504").value(), 1305);
    mm.station_distances[&mm.get_station_by_id("0505").value()].emplace_back(&mm.get_station_by_id("0506").value(), 1286);
    mm.station_distances[&mm.get_station_by_id("0506").value()].emplace_back(&mm.get_station_by_id("0505").value(), 1286);
    mm.station_distances[&mm.get_station_by_id("0506").value()].emplace_back(&mm.get_station_by_id("0507").value(), 3000);
    mm.station_distances[&mm.get_station_by_id("0507").value()].emplace_back(&mm.get_station_by_id("0506").value(), 3000);
    mm.station_distances[&mm.get_station_by_id("0507").value()].emplace_back(&mm.get_station_by_id("0508").value(), 1838);
    mm.station_distances[&mm.get_station_by_id("0508").value()].emplace_back(&mm.get_station_by_id("0507").value(), 1838);
    mm.station_distances[&mm.get_station_by_id("0508").value()].emplace_back(&mm.get_station_by_id("0509").value(), 1122);
    mm.station_distances[&mm.get_station_by_id("0509").value()].emplace_back(&mm.get_station_by_id("0508").value(), 1122);
    mm.station_distances[&mm.get_station_by_id("0509").value()].emplace_back(&mm.get_station_by_id("0510").value(), 1025);
    mm.station_distances[&mm.get_station_by_id("0510").value()].emplace_back(&mm.get_station_by_id("0509").value(), 1025);
    mm.station_distances[&mm.get_station_by_id("0510").value()].emplace_back(&mm.get_station_by_id("0511").value(), 1059);
    mm.station_distances[&mm.get_station_by_id("0511").value()].emplace_back(&mm.get_station_by_id("0510").value(), 1059);
    mm.station_distances[&mm.get_station_by_id("0511").value()].emplace_back(&mm.get_station_by_id("0512").value(), 1151);
    mm.station_distances[&mm.get_station_by_id("0512").value()].emplace_back(&mm.get_station_by_id("0511").value(), 1151);
    mm.station_distances[&mm.get_station_by_id("0512").value()].emplace_back(&mm.get_station_by_id("0513").value(), 866);
    mm.station_distances[&mm.get_station_by_id("0513").value()].emplace_back(&mm.get_station_by_id("0512").value(), 866);
    mm.station_distances[&mm.get_station_by_id("0513").value()].emplace_back(&mm.get_station_by_id("0514").value(), 791);
    mm.station_distances[&mm.get_station_by_id("0514").value()].emplace_back(&mm.get_station_by_id("0513").value(), 791);
    mm.station_distances[&mm.get_station_by_id("0514").value()].emplace_back(&mm.get_station_by_id("0515").value(), 1016);
    mm.station_distances[&mm.get_station_by_id("0515").value()].emplace_back(&mm.get_station_by_id("0514").value(), 1016);
    mm.station_distances[&mm.get_station_by_id("0515").value()].emplace_back(&mm.get_station_by_id("0516").value(), 848);
    mm.station_distances[&mm.get_station_by_id("0516").value()].emplace_back(&mm.get_station_by_id("0515").value(), 848);
    mm.station_distances[&mm.get_station_by_id("0516").value()].emplace_back(&mm.get_station_by_id("0517").value(), 945);
    mm.station_distances[&mm.get_station_by_id("0517").value()].emplace_back(&mm.get_station_by_id("0516").value(), 945);
    mm.station_distances[&mm.get_station_by_id("0517").value()].emplace_back(&mm.get_station_by_id("0518").value(), 821);
    mm.station_distances[&mm.get_station_by_id("0518").value()].emplace_back(&mm.get_station_by_id("0517").value(), 821);
    mm.station_distances[&mm.get_station_by_id("0518").value()].emplace_back(&mm.get_station_by_id("0519").value(), 876);
    mm.station_distances[&mm.get_station_by_id("0519").value()].emplace_back(&mm.get_station_by_id("0518").value(), 876);
    mm.station_distances[&mm.get_station_by_id("0519").value()].emplace_back(&mm.get_station_by_id("0520").value(), 1183);
    mm.station_distances[&mm.get_station_by_id("0520").value()].emplace_back(&mm.get_station_by_id("0519").value(), 1183);
    mm.station_distances[&mm.get_station_by_id("0520").value()].emplace_back(&mm.get_station_by_id("0521").value(), 1900);
    mm.station_distances[&mm.get_station_by_id("0521").value()].emplace_back(&mm.get_station_by_id("0520").value(), 1900);
    mm.station_distances[&mm.get_station_by_id("0521").value()].emplace_back(&mm.get_station_by_id("0522").value(), 905);
    mm.station_distances[&mm.get_station_by_id("0522").value()].emplace_back(&mm.get_station_by_id("0521").value(), 905);
    mm.station_distances[&mm.get_station_by_id("0522").value()].emplace_back(&mm.get_station_by_id("0523").value(), 1670);
    mm.station_distances[&mm.get_station_by_id("0523").value()].emplace_back(&mm.get_station_by_id("0522").value(), 1670);

    mm.station_distances[&mm.get_station_by_id("0601").value()].emplace_back(&mm.get_station_by_id("0602").value(), 1508);
    mm.station_distances[&mm.get_station_by_id("0602").value()].emplace_back(&mm.get_station_by_id("0601").value(), 1508);
    mm.station_distances[&mm.get_station_by_id("0602").value()].emplace_back(&mm.get_station_by_id("0603").value(), 1431);
    mm.station_distances[&mm.get_station_by_id("0603").value()].emplace_back(&mm.get_station_by_id("0602").value(), 1431);
    mm.station_distances[&mm.get_station_by_id("0603").value()].emplace_back(&mm.get_station_by_id("0604").value(), 1166);
    mm.station_distances[&mm.get_station_by_id("0604").value()].emplace_back(&mm.get_station_by_id("0603").value(), 1166);
    mm.station_distances[&mm.get_station_by_id("0604").value()].emplace_back(&mm.get_station_by_id("0605").value(), 1664);
    mm.station_distances[&mm.get_station_by_id("0605").value()].emplace_back(&mm.get_station_by_id("0604").value(), 1664);
    mm.station_distances[&mm.get_station_by_id("0605").value()].emplace_back(&mm.get_station_by_id("0606").value(), 887);
    mm.station_distances[&mm.get_station_by_id("0606").value()].emplace_back(&mm.get_station_by_id("0605").value(), 887);
    mm.station_distances[&mm.get_station_by_id("0606").value()].emplace_back(&mm.get_station_by_id("0607").value(), 1443);
    mm.station_distances[&mm.get_station_by_id("0607").value()].emplace_back(&mm.get_station_by_id("0606").value(), 1443);
    mm.station_distances[&mm.get_station_by_id("0607").value()].emplace_back(&mm.get_station_by_id("0608").value(), 1321);
    mm.station_distances[&mm.get_station_by_id("0608").value()].emplace_back(&mm.get_station_by_id("0607").value(), 1321);
    mm.station_distances[&mm.get_station_by_id("0608").value()].emplace_back(&mm.get_station_by_id("0609").value(), 1349);
    mm.station_distances[&mm.get_station_by_id("0609").value()].emplace_back(&mm.get_station_by_id("0608").value(), 1349);
    mm.station_distances[&mm.get_station_by_id("0609").value()].emplace_back(&mm.get_station_by_id("0610").value(), 1937);
    mm.station_distances[&mm.get_station_by_id("0610").value()].emplace_back(&mm.get_station_by_id("0609").value(), 1937);
    mm.station_distances[&mm.get_station_by_id("0610").value()].emplace_back(&mm.get_station_by_id("0611").value(), 1399);
    mm.station_distances[&mm.get_station_by_id("0611").value()].emplace_back(&mm.get_station_by_id("0610").value(), 1399);
    mm.station_distances[&mm.get_station_by_id("0611").value()].emplace_back(&mm.get_station_by_id("0612").value(), 1668);
    mm.station_distances[&mm.get_station_by_id("0612").value()].emplace_back(&mm.get_station_by_id("0611").value(), 1668);
    mm.station_distances[&mm.get_station_by_id("0612").value()].emplace_back(&mm.get_station_by_id("0613").value(), 845);
    mm.station_distances[&mm.get_station_by_id("0613").value()].emplace_back(&mm.get_station_by_id("0612").value(), 845);
    mm.station_distances[&mm.get_station_by_id("0613").value()].emplace_back(&mm.get_station_by_id("0614").value(), 1450);
    mm.station_distances[&mm.get_station_by_id("0614").value()].emplace_back(&mm.get_station_by_id("0613").value(), 1450);
    mm.station_distances[&mm.get_station_by_id("0614").value()].emplace_back(&mm.get_station_by_id("0615").value(), 2036);
    mm.station_distances[&mm.get_station_by_id("0615").value()].emplace_back(&mm.get_station_by_id("0614").value(), 2036);
    mm.station_distances[&mm.get_station_by_id("0615").value()].emplace_back(&mm.get_station_by_id("0616").value(), 1282);
    mm.station_distances[&mm.get_station_by_id("0616").value()].emplace_back(&mm.get_station_by_id("0615").value(), 1282);
    mm.station_distances[&mm.get_station_by_id("0616").value()].emplace_back(&mm.get_station_by_id("0617").value(), 3999);
    mm.station_distances[&mm.get_station_by_id("0617").value()].emplace_back(&mm.get_station_by_id("0616").value(), 3999);
    mm.station_distances[&mm.get_station_by_id("0617").value()].emplace_back(&mm.get_station_by_id("0618").value(), 1238);
    mm.station_distances[&mm.get_station_by_id("0618").value()].emplace_back(&mm.get_station_by_id("0617").value(), 1238);
    mm.station_distances[&mm.get_station_by_id("0618").value()].emplace_back(&mm.get_station_by_id("0619").value(), 1854);
    mm.station_distances[&mm.get_station_by_id("0619").value()].emplace_back(&mm.get_station_by_id("0618").value(), 1854);
    mm.station_distances[&mm.get_station_by_id("0619").value()].emplace_back(&mm.get_station_by_id("0620").value(), 1405);
    mm.station_distances[&mm.get_station_by_id("0620").value()].emplace_back(&mm.get_station_by_id("0619").value(), 1405);
    mm.station_distances[&mm.get_station_by_id("0620").value()].emplace_back(&mm.get_station_by_id("0621").value(), 2115);
    mm.station_distances[&mm.get_station_by_id("0621").value()].emplace_back(&mm.get_station_by_id("0620").value(), 2115);
    mm.station_distances[&mm.get_station_by_id("0621").value()].emplace_back(&mm.get_station_by_id("0622").value(), 2557);
    mm.station_distances[&mm.get_station_by_id("0622").value()].emplace_back(&mm.get_station_by_id("0621").value(), 2557);
    mm.station_distances[&mm.get_station_by_id("0622").value()].emplace_back(&mm.get_station_by_id("0623").value(), 1468);
    mm.station_distances[&mm.get_station_by_id("0623").value()].emplace_back(&mm.get_station_by_id("0622").value(), 1468);
    mm.station_distances[&mm.get_station_by_id("0623").value()].emplace_back(&mm.get_station_by_id("0624").value(), 1543);
    mm.station_distances[&mm.get_station_by_id("0624").value()].emplace_back(&mm.get_station_by_id("0623").value(), 1543);
    mm.station_distances[&mm.get_station_by_id("0624").value()].emplace_back(&mm.get_station_by_id("0625").value(), 1599);
    mm.station_distances[&mm.get_station_by_id("0625").value()].emplace_back(&mm.get_station_by_id("0624").value(), 1599);
    mm.station_distances[&mm.get_station_by_id("0625").value()].emplace_back(&mm.get_station_by_id("0626").value(), 929);
    mm.station_distances[&mm.get_station_by_id("0626").value()].emplace_back(&mm.get_station_by_id("0625").value(), 929);
    mm.station_distances[&mm.get_station_by_id("0626").value()].emplace_back(&mm.get_station_by_id("0627").value(), 1346);
    mm.station_distances[&mm.get_station_by_id("0627").value()].emplace_back(&mm.get_station_by_id("0626").value(), 1346);
    mm.station_distances[&mm.get_station_by_id("0627").value()].emplace_back(&mm.get_station_by_id("0628").value(), 1194);
    mm.station_distances[&mm.get_station_by_id("0628").value()].emplace_back(&mm.get_station_by_id("0627").value(), 1194);

    mm.station_distances[&mm.get_station_by_id("0701").value()].emplace_back(&mm.get_station_by_id("0702").value(), 935);
    mm.station_distances[&mm.get_station_by_id("0702").value()].emplace_back(&mm.get_station_by_id("0701").value(), 935);
    mm.station_distances[&mm.get_station_by_id("0702").value()].emplace_back(&mm.get_station_by_id("0703").value(), 734);
    mm.station_distances[&mm.get_station_by_id("0703").value()].emplace_back(&mm.get_station_by_id("0702").value(), 734);
    mm.station_distances[&mm.get_station_by_id("0703").value()].emplace_back(&mm.get_station_by_id("0704").value(), 1874);
    mm.station_distances[&mm.get_station_by_id("0704").value()].emplace_back(&mm.get_station_by_id("0703").value(), 1874);
    mm.station_distances[&mm.get_station_by_id("0704").value()].emplace_back(&mm.get_station_by_id("0705").value(), 1374);
    mm.station_distances[&mm.get_station_by_id("0705").value()].emplace_back(&mm.get_station_by_id("0704").value(), 1374);
    mm.station_distances[&mm.get_station_by_id("0705").value()].emplace_back(&mm.get_station_by_id("0706").value(), 885);
    mm.station_distances[&mm.get_station_by_id("0706").value()].emplace_back(&mm.get_station_by_id("0705").value(), 885);
    mm.station_distances[&mm.get_station_by_id("0706").value()].emplace_back(&mm.get_station_by_id("0707").value(), 1205);
    mm.station_distances[&mm.get_station_by_id("0707").value()].emplace_back(&mm.get_station_by_id("0706").value(), 1205);
    mm.station_distances[&mm.get_station_by_id("0707").value()].emplace_back(&mm.get_station_by_id("0708").value(), 869);
    mm.station_distances[&mm.get_station_by_id("0708").value()].emplace_back(&mm.get_station_by_id("0707").value(), 869);
    mm.station_distances[&mm.get_station_by_id("0708").value()].emplace_back(&mm.get_station_by_id("0709").value(), 1016);
    mm.station_distances[&mm.get_station_by_id("0709").value()].emplace_back(&mm.get_station_by_id("0708").value(), 1016);
    mm.station_distances[&mm.get_station_by_id("0709").value()].emplace_back(&mm.get_station_by_id("0710").value(), 1138);
    mm.station_distances[&mm.get_station_by_id("0710").value()].emplace_back(&mm.get_station_by_id("0709").value(), 1138);
    mm.station_distances[&mm.get_station_by_id("0710").value()].emplace_back(&mm.get_station_by_id("0711").value(), 1332);
    mm.station_distances[&mm.get_station_by_id("0711").value()].emplace_back(&mm.get_station_by_id("0710").value(), 1332);
    mm.station_distances[&mm.get_station_by_id("0711").value()].emplace_back(&mm.get_station_by_id("0712").value(), 1241);
    mm.station_distances[&mm.get_station_by_id("0712").value()].emplace_back(&mm.get_station_by_id("0711").value(), 1241);
    mm.station_distances[&mm.get_station_by_id("0712").value()].emplace_back(&mm.get_station_by_id("0713").value(), 1311);
    mm.station_distances[&mm.get_station_by_id("0713").value()].emplace_back(&mm.get_station_by_id("0712").value(), 1311);
    mm.station_distances[&mm.get_station_by_id("0713").value()].emplace_back(&mm.get_station_by_id("0714").value(), 781);
    mm.station_distances[&mm.get_station_by_id("0714").value()].emplace_back(&mm.get_station_by_id("0713").value(), 781);
    mm.station_distances[&mm.get_station_by_id("0714").value()].emplace_back(&mm.get_station_by_id("0715").value(), 865);
    mm.station_distances[&mm.get_station_by_id("0715").value()].emplace_back(&mm.get_station_by_id("0714").value(), 865);
    mm.station_distances[&mm.get_station_by_id("0715").value()].emplace_back(&mm.get_station_by_id("0716").value(), 903);
    mm.station_distances[&mm.get_station_by_id("0716").value()].emplace_back(&mm.get_station_by_id("0715").value(), 903);
    mm.station_distances[&mm.get_station_by_id("0716").value()].emplace_back(&mm.get_station_by_id("0717").value(), 1464);
    mm.station_distances[&mm.get_station_by_id("0717").value()].emplace_back(&mm.get_station_by_id("0716").value(), 1464);
    mm.station_distances[&mm.get_station_by_id("0717").value()].emplace_back(&mm.get_station_by_id("0718").value(), 906);
    mm.station_distances[&mm.get_station_by_id("0718").value()].emplace_back(&mm.get_station_by_id("0717").value(), 906);
    mm.station_distances[&mm.get_station_by_id("0718").value()].emplace_back(&mm.get_station_by_id("0719").value(), 1679);
    mm.station_distances[&mm.get_station_by_id("0719").value()].emplace_back(&mm.get_station_by_id("0718").value(), 1679);
    mm.station_distances[&mm.get_station_by_id("0719").value()].emplace_back(&mm.get_station_by_id("0720").value(), 1304);
    mm.station_distances[&mm.get_station_by_id("0720").value()].emplace_back(&mm.get_station_by_id("0719").value(), 1304);
    mm.station_distances[&mm.get_station_by_id("0720").value()].emplace_back(&mm.get_station_by_id("0721").value(), 1021);
    mm.station_distances[&mm.get_station_by_id("0721").value()].emplace_back(&mm.get_station_by_id("0720").value(), 1021);

    mm.station_distances[&mm.get_station_by_id("0801").value()].emplace_back(&mm.get_station_by_id("0802").value(), 2318);
    mm.station_distances[&mm.get_station_by_id("0802").value()].emplace_back(&mm.get_station_by_id("0801").value(), 2318);
    mm.station_distances[&mm.get_station_by_id("0802").value()].emplace_back(&mm.get_station_by_id("0803").value(), 1985);
    mm.station_distances[&mm.get_station_by_id("0803").value()].emplace_back(&mm.get_station_by_id("0802").value(), 1985);
    mm.station_distances[&mm.get_station_by_id("0803").value()].emplace_back(&mm.get_station_by_id("0804").value(), 2056);
    mm.station_distances[&mm.get_station_by_id("0804").value()].emplace_back(&mm.get_station_by_id("0803").value(), 2056);
    mm.station_distances[&mm.get_station_by_id("0804").value()].emplace_back(&mm.get_station_by_id("0805").value(), 1114);
    mm.station_distances[&mm.get_station_by_id("0805").value()].emplace_back(&mm.get_station_by_id("0804").value(), 1114);
    mm.station_distances[&mm.get_station_by_id("0805").value()].emplace_back(&mm.get_station_by_id("0806").value(), 1894);
    mm.station_distances[&mm.get_station_by_id("0806").value()].emplace_back(&mm.get_station_by_id("0805").value(), 1894);
    mm.station_distances[&mm.get_station_by_id("0806").value()].emplace_back(&mm.get_station_by_id("0807").value(), 1543);
    mm.station_distances[&mm.get_station_by_id("0807").value()].emplace_back(&mm.get_station_by_id("0806").value(), 1543);
    mm.station_distances[&mm.get_station_by_id("0807").value()].emplace_back(&mm.get_station_by_id("0808").value(), 1041);
    mm.station_distances[&mm.get_station_by_id("0808").value()].emplace_back(&mm.get_station_by_id("0807").value(), 1041);
    mm.station_distances[&mm.get_station_by_id("0808").value()].emplace_back(&mm.get_station_by_id("0809").value(), 2553);
    mm.station_distances[&mm.get_station_by_id("0809").value()].emplace_back(&mm.get_station_by_id("0808").value(), 2553);
    mm.station_distances[&mm.get_station_by_id("0809").value()].emplace_back(&mm.get_station_by_id("0810").value(), 2555);
    mm.station_distances[&mm.get_station_by_id("0810").value()].emplace_back(&mm.get_station_by_id("0809").value(), 2555);
    mm.station_distances[&mm.get_station_by_id("0810").value()].emplace_back(&mm.get_station_by_id("0811").value(), 1016);
    mm.station_distances[&mm.get_station_by_id("0811").value()].emplace_back(&mm.get_station_by_id("0810").value(), 1016);
    mm.station_distances[&mm.get_station_by_id("0811").value()].emplace_back(&mm.get_station_by_id("0812").value(), 1667);
    mm.station_distances[&mm.get_station_by_id("0812").value()].emplace_back(&mm.get_station_by_id("0811").value(), 1667);
    mm.station_distances[&mm.get_station_by_id("0812").value()].emplace_back(&mm.get_station_by_id("0813").value(), 900);
    mm.station_distances[&mm.get_station_by_id("0813").value()].emplace_back(&mm.get_station_by_id("0812").value(), 900);
    mm.station_distances[&mm.get_station_by_id("0813").value()].emplace_back(&mm.get_station_by_id("0814").value(), 1018);
    mm.station_distances[&mm.get_station_by_id("0814").value()].emplace_back(&mm.get_station_by_id("0813").value(), 1018);
    mm.station_distances[&mm.get_station_by_id("0814").value()].emplace_back(&mm.get_station_by_id("0815").value(), 1274);
    mm.station_distances[&mm.get_station_by_id("0815").value()].emplace_back(&mm.get_station_by_id("0814").value(), 1274);
    mm.station_distances[&mm.get_station_by_id("0815").value()].emplace_back(&mm.get_station_by_id("0816").value(), 1083);
    mm.station_distances[&mm.get_station_by_id("0816").value()].emplace_back(&mm.get_station_by_id("0815").value(), 1083);
    mm.station_distances[&mm.get_station_by_id("0816").value()].emplace_back(&mm.get_station_by_id("0817").value(), 1188);
    mm.station_distances[&mm.get_station_by_id("0817").value()].emplace_back(&mm.get_station_by_id("0816").value(), 1188);
    mm.station_distances[&mm.get_station_by_id("0817").value()].emplace_back(&mm.get_station_by_id("0818").value(), 902);
    mm.station_distances[&mm.get_station_by_id("0818").value()].emplace_back(&mm.get_station_by_id("0817").value(), 902);

    mm.station_distances[&mm.get_station_by_id("0901").value()].emplace_back(&mm.get_station_by_id("0902").value(), 1096);
    mm.station_distances[&mm.get_station_by_id("0902").value()].emplace_back(&mm.get_station_by_id("0901").value(), 1096);
    mm.station_distances[&mm.get_station_by_id("0902").value()].emplace_back(&mm.get_station_by_id("0903").value(), 943);
    mm.station_distances[&mm.get_station_by_id("0903").value()].emplace_back(&mm.get_station_by_id("0902").value(), 943);
    mm.station_distances[&mm.get_station_by_id("0903").value()].emplace_back(&mm.get_station_by_id("0904").value(), 1912);
    mm.station_distances[&mm.get_station_by_id("0904").value()].emplace_back(&mm.get_station_by_id("0903").value(), 1912);
    mm.station_distances[&mm.get_station_by_id("0904").value()].emplace_back(&mm.get_station_by_id("0905").value(), 1398);
    mm.station_distances[&mm.get_station_by_id("0905").value()].emplace_back(&mm.get_station_by_id("0904").value(), 1398);
    mm.station_distances[&mm.get_station_by_id("0905").value()].emplace_back(&mm.get_station_by_id("0906").value(), 1170);
    mm.station_distances[&mm.get_station_by_id("0906").value()].emplace_back(&mm.get_station_by_id("0905").value(), 1170);
    mm.station_distances[&mm.get_station_by_id("0906").value()].emplace_back(&mm.get_station_by_id("0907").value(), 1309);
    mm.station_distances[&mm.get_station_by_id("0907").value()].emplace_back(&mm.get_station_by_id("0906").value(), 1309);
    mm.station_distances[&mm.get_station_by_id("0907").value()].emplace_back(&mm.get_station_by_id("0908").value(), 1778);
    mm.station_distances[&mm.get_station_by_id("0908").value()].emplace_back(&mm.get_station_by_id("0907").value(), 1778);
    mm.station_distances[&mm.get_station_by_id("0908").value()].emplace_back(&mm.get_station_by_id("0909").value(), 1325);
    mm.station_distances[&mm.get_station_by_id("0909").value()].emplace_back(&mm.get_station_by_id("0908").value(), 1325);
    mm.station_distances[&mm.get_station_by_id("0909").value()].emplace_back(&mm.get_station_by_id("0910").value(), 1585);
    mm.station_distances[&mm.get_station_by_id("0910").value()].emplace_back(&mm.get_station_by_id("0909").value(), 1585);
    mm.station_distances[&mm.get_station_by_id("0910").value()].emplace_back(&mm.get_station_by_id("0911").value(), 980);
    mm.station_distances[&mm.get_station_by_id("0911").value()].emplace_back(&mm.get_station_by_id("0910").value(), 980);
    mm.station_distances[&mm.get_station_by_id("0911").value()].emplace_back(&mm.get_station_by_id("0912").value(), 788);
    mm.station_distances[&mm.get_station_by_id("0912").value()].emplace_back(&mm.get_station_by_id("0911").value(), 788);
    mm.station_distances[&mm.get_station_by_id("0912").value()].emplace_back(&mm.get_station_by_id("0913").value(), 1347);
    mm.station_distances[&mm.get_station_by_id("0913").value()].emplace_back(&mm.get_station_by_id("0912").value(), 1347);

    mm.station_distances[&mm.get_station_by_id("1001").value()].emplace_back(&mm.get_station_by_id("1002").value(), 1110);
    mm.station_distances[&mm.get_station_by_id("1002").value()].emplace_back(&mm.get_station_by_id("1001").value(), 1110);
    mm.station_distances[&mm.get_station_by_id("1002").value()].emplace_back(&mm.get_station_by_id("1003").value(), 950);
    mm.station_distances[&mm.get_station_by_id("1003").value()].emplace_back(&mm.get_station_by_id("1002").value(), 950);
    mm.station_distances[&mm.get_station_by_id("1003").value()].emplace_back(&mm.get_station_by_id("1004").value(), 975);
    mm.station_distances[&mm.get_station_by_id("1004").value()].emplace_back(&mm.get_station_by_id("1003").value(), 975);
    mm.station_distances[&mm.get_station_by_id("1004").value()].emplace_back(&mm.get_station_by_id("1005").value(), 1058);
    mm.station_distances[&mm.get_station_by_id("1005").value()].emplace_back(&mm.get_station_by_id("1004").value(), 1058);
    mm.station_distances[&mm.get_station_by_id("1005").value()].emplace_back(&mm.get_station_by_id("1006").value(), 1101);
    mm.station_distances[&mm.get_station_by_id("1006").value()].emplace_back(&mm.get_station_by_id("1005").value(), 1101);
    mm.station_distances[&mm.get_station_by_id("1006").value()].emplace_back(&mm.get_station_by_id("1007").value(), 1330);
    mm.station_distances[&mm.get_station_by_id("1007").value()].emplace_back(&mm.get_station_by_id("1006").value(), 1330);
    mm.station_distances[&mm.get_station_by_id("1007").value()].emplace_back(&mm.get_station_by_id("1008").value(), 973);
    mm.station_distances[&mm.get_station_by_id("1008").value()].emplace_back(&mm.get_station_by_id("1007").value(), 973);
    mm.station_distances[&mm.get_station_by_id("1008").value()].emplace_back(&mm.get_station_by_id("1009").value(), 1100);
    mm.station_distances[&mm.get_station_by_id("1009").value()].emplace_back(&mm.get_station_by_id("1008").value(), 1100);
    mm.station_distances[&mm.get_station_by_id("1009").value()].emplace_back(&mm.get_station_by_id("1010").value(), 1020);
    mm.station_distances[&mm.get_station_by_id("1010").value()].emplace_back(&mm.get_station_by_id("1009").value(), 1020);
    mm.station_distances[&mm.get_station_by_id("1010").value()].emplace_back(&mm.get_station_by_id("1011").value(), 982);
    mm.station_distances[&mm.get_station_by_id("1011").value()].emplace_back(&mm.get_station_by_id("1010").value(), 982);
    mm.station_distances[&mm.get_station_by_id("1011").value()].emplace_back(&mm.get_station_by_id("1012").value(), 1712);
    mm.station_distances[&mm.get_station_by_id("1012").value()].emplace_back(&mm.get_station_by_id("1011").value(), 1712);
    mm.station_distances[&mm.get_station_by_id("1012").value()].emplace_back(&mm.get_station_by_id("1013").value(), 1003);
    mm.station_distances[&mm.get_station_by_id("1013").value()].emplace_back(&mm.get_station_by_id("1012").value(), 1003);
    mm.station_distances[&mm.get_station_by_id("1013").value()].emplace_back(&mm.get_station_by_id("1014").value(), 1759);
    mm.station_distances[&mm.get_station_by_id("1014").value()].emplace_back(&mm.get_station_by_id("1013").value(), 1759);
    mm.station_distances[&mm.get_station_by_id("1014").value()].emplace_back(&mm.get_station_by_id("1015").value(), 1506);
    mm.station_distances[&mm.get_station_by_id("1015").value()].emplace_back(&mm.get_station_by_id("1014").value(), 1506);
    mm.station_distances[&mm.get_station_by_id("1015").value()].emplace_back(&mm.get_station_by_id("1016").value(), 914);
    mm.station_distances[&mm.get_station_by_id("1016").value()].emplace_back(&mm.get_station_by_id("1015").value(), 914);
    mm.station_distances[&mm.get_station_by_id("1016").value()].emplace_back(&mm.get_station_by_id("1017").value(), 853);
    mm.station_distances[&mm.get_station_by_id("1017").value()].emplace_back(&mm.get_station_by_id("1016").value(), 853);
    mm.station_distances[&mm.get_station_by_id("1017").value()].emplace_back(&mm.get_station_by_id("1018").value(), 1149);
    mm.station_distances[&mm.get_station_by_id("1018").value()].emplace_back(&mm.get_station_by_id("1017").value(), 1149);
    mm.station_distances[&mm.get_station_by_id("1018").value()].emplace_back(&mm.get_station_by_id("1019").value(), 734);
    mm.station_distances[&mm.get_station_by_id("1019").value()].emplace_back(&mm.get_station_by_id("1018").value(), 734);
    mm.station_distances[&mm.get_station_by_id("1019").value()].emplace_back(&mm.get_station_by_id("1020").value(), 835);
    mm.station_distances[&mm.get_station_by_id("1020").value()].emplace_back(&mm.get_station_by_id("1019").value(), 835);
    mm.station_distances[&mm.get_station_by_id("1020").value()].emplace_back(&mm.get_station_by_id("1021").value(), 1759);
    mm.station_distances[&mm.get_station_by_id("1021").value()].emplace_back(&mm.get_station_by_id("1020").value(), 1759);
    mm.station_distances[&mm.get_station_by_id("1021").value()].emplace_back(&mm.get_station_by_id("1022").value(), 1006);
    mm.station_distances[&mm.get_station_by_id("1022").value()].emplace_back(&mm.get_station_by_id("1021").value(), 1006);
    mm.station_distances[&mm.get_station_by_id("1022").value()].emplace_back(&mm.get_station_by_id("1023").value(), 1021);
    mm.station_distances[&mm.get_station_by_id("1023").value()].emplace_back(&mm.get_station_by_id("1022").value(), 1021);
    mm.station_distances[&mm.get_station_by_id("1023").value()].emplace_back(&mm.get_station_by_id("1024").value(), 1097);
    mm.station_distances[&mm.get_station_by_id("1024").value()].emplace_back(&mm.get_station_by_id("1023").value(), 1097);
    mm.station_distances[&mm.get_station_by_id("1024").value()].emplace_back(&mm.get_station_by_id("1025").value(), 1804);
    mm.station_distances[&mm.get_station_by_id("1025").value()].emplace_back(&mm.get_station_by_id("1024").value(), 1804);
    mm.station_distances[&mm.get_station_by_id("1025").value()].emplace_back(&mm.get_station_by_id("1026").value(), 1058);
    mm.station_distances[&mm.get_station_by_id("1026").value()].emplace_back(&mm.get_station_by_id("1025").value(), 1058);
    mm.station_distances[&mm.get_station_by_id("1026").value()].emplace_back(&mm.get_station_by_id("1027").value(), 1677);
    mm.station_distances[&mm.get_station_by_id("1027").value()].emplace_back(&mm.get_station_by_id("1026").value(), 1677);
    mm.station_distances[&mm.get_station_by_id("1027").value()].emplace_back(&mm.get_station_by_id("1028").value(), 1269);
    mm.station_distances[&mm.get_station_by_id("1028").value()].emplace_back(&mm.get_station_by_id("1027").value(), 1269);
    mm.station_distances[&mm.get_station_by_id("1028").value()].emplace_back(&mm.get_station_by_id("1029").value(), 1244);
    mm.station_distances[&mm.get_station_by_id("1029").value()].emplace_back(&mm.get_station_by_id("1028").value(), 1244);
    mm.station_distances[&mm.get_station_by_id("1029").value()].emplace_back(&mm.get_station_by_id("1030").value(), 1130);
    mm.station_distances[&mm.get_station_by_id("1030").value()].emplace_back(&mm.get_station_by_id("1029").value(), 1130);
    mm.station_distances[&mm.get_station_by_id("1030").value()].emplace_back(&mm.get_station_by_id("1031").value(), 1254);
    mm.station_distances[&mm.get_station_by_id("1031").value()].emplace_back(&mm.get_station_by_id("1030").value(), 1254);
    mm.station_distances[&mm.get_station_by_id("1031").value()].emplace_back(&mm.get_station_by_id("1032").value(), 1688);
    mm.station_distances[&mm.get_station_by_id("1032").value()].emplace_back(&mm.get_station_by_id("1031").value(), 1688);
    mm.station_distances[&mm.get_station_by_id("1032").value()].emplace_back(&mm.get_station_by_id("1033").value(), 1547);
    mm.station_distances[&mm.get_station_by_id("1033").value()].emplace_back(&mm.get_station_by_id("1032").value(), 1547);
    mm.station_distances[&mm.get_station_by_id("1033").value()].emplace_back(&mm.get_station_by_id("1034").value(), 1143);
    mm.station_distances[&mm.get_station_by_id("1034").value()].emplace_back(&mm.get_station_by_id("1033").value(), 1143);
    mm.station_distances[&mm.get_station_by_id("1034").value()].emplace_back(&mm.get_station_by_id("1035").value(), 1717);
    mm.station_distances[&mm.get_station_by_id("1035").value()].emplace_back(&mm.get_station_by_id("1034").value(), 1717);
    mm.station_distances[&mm.get_station_by_id("1035").value()].emplace_back(&mm.get_station_by_id("1036").value(), 954);
    mm.station_distances[&mm.get_station_by_id("1036").value()].emplace_back(&mm.get_station_by_id("1035").value(), 954);
    mm.station_distances[&mm.get_station_by_id("1036").value()].emplace_back(&mm.get_station_by_id("1037").value(), 749);
    mm.station_distances[&mm.get_station_by_id("1037").value()].emplace_back(&mm.get_station_by_id("1036").value(), 749);
    mm.station_distances[&mm.get_station_by_id("1037").value()].emplace_back(&mm.get_station_by_id("1038").value(), 1584);
    mm.station_distances[&mm.get_station_by_id("1038").value()].emplace_back(&mm.get_station_by_id("1037").value(), 1584);
    mm.station_distances[&mm.get_station_by_id("1038").value()].emplace_back(&mm.get_station_by_id("1039").value(), 2392);
    mm.station_distances[&mm.get_station_by_id("1039").value()].emplace_back(&mm.get_station_by_id("1038").value(), 2392);
    mm.station_distances[&mm.get_station_by_id("1039").value()].emplace_back(&mm.get_station_by_id("1040").value(), 1016);
    mm.station_distances[&mm.get_station_by_id("1040").value()].emplace_back(&mm.get_station_by_id("1039").value(), 1016);
    mm.station_distances[&mm.get_station_by_id("1040").value()].emplace_back(&mm.get_station_by_id("1041").value(), 2386);
    mm.station_distances[&mm.get_station_by_id("1041").value()].emplace_back(&mm.get_station_by_id("1040").value(), 2386);
    mm.station_distances[&mm.get_station_by_id("1041").value()].emplace_back(&mm.get_station_by_id("1042").value(), 1214);
    mm.station_distances[&mm.get_station_by_id("1042").value()].emplace_back(&mm.get_station_by_id("1041").value(), 1214);
    mm.station_distances[&mm.get_station_by_id("1042").value()].emplace_back(&mm.get_station_by_id("1043").value(), 1590);
    mm.station_distances[&mm.get_station_by_id("1043").value()].emplace_back(&mm.get_station_by_id("1042").value(), 1590);
    mm.station_distances[&mm.get_station_by_id("1043").value()].emplace_back(&mm.get_station_by_id("1044").value(), 1205);
    mm.station_distances[&mm.get_station_by_id("1044").value()].emplace_back(&mm.get_station_by_id("1043").value(), 1205);
    mm.station_distances[&mm.get_station_by_id("1044").value()].emplace_back(&mm.get_station_by_id("1045").value(), 961);
    mm.station_distances[&mm.get_station_by_id("1045").value()].emplace_back(&mm.get_station_by_id("1044").value(), 961);
    mm.station_distances[&mm.get_station_by_id("1045").value()].emplace_back(&mm.get_station_by_id("1001").value(), 1495);
    mm.station_distances[&mm.get_station_by_id("1001").value()].emplace_back(&mm.get_station_by_id("1045").value(), 1495);

    mm.station_distances[&mm.get_station_by_id("1301").value()].emplace_back(&mm.get_station_by_id("1302").value(), 2839);
    mm.station_distances[&mm.get_station_by_id("1302").value()].emplace_back(&mm.get_station_by_id("1301").value(), 2839);
    mm.station_distances[&mm.get_station_by_id("1302").value()].emplace_back(&mm.get_station_by_id("1303").value(), 1206);
    mm.station_distances[&mm.get_station_by_id("1303").value()].emplace_back(&mm.get_station_by_id("1302").value(), 1206);
    mm.station_distances[&mm.get_station_by_id("1303").value()].emplace_back(&mm.get_station_by_id("1304").value(), 1829);
    mm.station_distances[&mm.get_station_by_id("1304").value()].emplace_back(&mm.get_station_by_id("1303").value(), 1829);
    mm.station_distances[&mm.get_station_by_id("1304").value()].emplace_back(&mm.get_station_by_id("1305").value(), 4866);
    mm.station_distances[&mm.get_station_by_id("1305").value()].emplace_back(&mm.get_station_by_id("1304").value(), 4866);
    mm.station_distances[&mm.get_station_by_id("1305").value()].emplace_back(&mm.get_station_by_id("1306").value(), 2538);
    mm.station_distances[&mm.get_station_by_id("1306").value()].emplace_back(&mm.get_station_by_id("1305").value(), 2538);
    mm.station_distances[&mm.get_station_by_id("1306").value()].emplace_back(&mm.get_station_by_id("1307").value(), 3623);
    mm.station_distances[&mm.get_station_by_id("1307").value()].emplace_back(&mm.get_station_by_id("1306").value(), 3623);
    mm.station_distances[&mm.get_station_by_id("1307").value()].emplace_back(&mm.get_station_by_id("1308").value(), 1423);
    mm.station_distances[&mm.get_station_by_id("1308").value()].emplace_back(&mm.get_station_by_id("1307").value(), 1423);
    mm.station_distances[&mm.get_station_by_id("1308").value()].emplace_back(&mm.get_station_by_id("1309").value(), 2110);
    mm.station_distances[&mm.get_station_by_id("1309").value()].emplace_back(&mm.get_station_by_id("1308").value(), 2110);
    mm.station_distances[&mm.get_station_by_id("1309").value()].emplace_back(&mm.get_station_by_id("1310").value(), 4785);
    mm.station_distances[&mm.get_station_by_id("1310").value()].emplace_back(&mm.get_station_by_id("1309").value(), 4785);
    mm.station_distances[&mm.get_station_by_id("1310").value()].emplace_back(&mm.get_station_by_id("1311").value(), 2272);
    mm.station_distances[&mm.get_station_by_id("1311").value()].emplace_back(&mm.get_station_by_id("1310").value(), 2272);
    mm.station_distances[&mm.get_station_by_id("1311").value()].emplace_back(&mm.get_station_by_id("1312").value(), 6720);
    mm.station_distances[&mm.get_station_by_id("1312").value()].emplace_back(&mm.get_station_by_id("1311").value(), 6720);
    mm.station_distances[&mm.get_station_by_id("1312").value()].emplace_back(&mm.get_station_by_id("1313").value(), 2152);
    mm.station_distances[&mm.get_station_by_id("1313").value()].emplace_back(&mm.get_station_by_id("1312").value(), 2152);
    mm.station_distances[&mm.get_station_by_id("1313").value()].emplace_back(&mm.get_station_by_id("1314").value(), 1110);
    mm.station_distances[&mm.get_station_by_id("1314").value()].emplace_back(&mm.get_station_by_id("1313").value(), 1110);
    mm.station_distances[&mm.get_station_by_id("1314").value()].emplace_back(&mm.get_station_by_id("1315").value(), 1135);
    mm.station_distances[&mm.get_station_by_id("1315").value()].emplace_back(&mm.get_station_by_id("1314").value(), 1135);
    mm.station_distances[&mm.get_station_by_id("1315").value()].emplace_back(&mm.get_station_by_id("1316").value(), 1769);
    mm.station_distances[&mm.get_station_by_id("1316").value()].emplace_back(&mm.get_station_by_id("1315").value(), 1769);

    mm.station_distances[&mm.get_station_by_id("14e01").value()].emplace_back(&mm.get_station_by_id("14e02").value(), 887);
    mm.station_distances[&mm.get_station_by_id("14e02").value()].emplace_back(&mm.get_station_by_id("14e01").value(), 887);
    mm.station_distances[&mm.get_station_by_id("14e02").value()].emplace_back(&mm.get_station_by_id("14e03").value(), 1063);
    mm.station_distances[&mm.get_station_by_id("14e03").value()].emplace_back(&mm.get_station_by_id("14e02").value(), 1063);
    mm.station_distances[&mm.get_station_by_id("14e03").value()].emplace_back(&mm.get_station_by_id("14e04").value(), 1119);
    mm.station_distances[&mm.get_station_by_id("14e04").value()].emplace_back(&mm.get_station_by_id("14e03").value(), 1119);
    mm.station_distances[&mm.get_station_by_id("14e04").value()].emplace_back(&mm.get_station_by_id("14e05").value(), 1025);
    mm.station_distances[&mm.get_station_by_id("14e05").value()].emplace_back(&mm.get_station_by_id("14e04").value(), 1025);
    mm.station_distances[&mm.get_station_by_id("14e05").value()].emplace_back(&mm.get_station_by_id("14e06").value(), 1486);
    mm.station_distances[&mm.get_station_by_id("14e06").value()].emplace_back(&mm.get_station_by_id("14e05").value(), 1486);
    mm.station_distances[&mm.get_station_by_id("14e06").value()].emplace_back(&mm.get_station_by_id("14e07").value(), 1618);
    mm.station_distances[&mm.get_station_by_id("14e07").value()].emplace_back(&mm.get_station_by_id("14e06").value(), 1618);
    mm.station_distances[&mm.get_station_by_id("14e07").value()].emplace_back(&mm.get_station_by_id("14e08").value(), 1147);
    mm.station_distances[&mm.get_station_by_id("14e08").value()].emplace_back(&mm.get_station_by_id("14e07").value(), 1147);
    mm.station_distances[&mm.get_station_by_id("14e08").value()].emplace_back(&mm.get_station_by_id("14e09").value(), 1276);
    mm.station_distances[&mm.get_station_by_id("14e09").value()].emplace_back(&mm.get_station_by_id("14e08").value(), 1276);
    mm.station_distances[&mm.get_station_by_id("14e09").value()].emplace_back(&mm.get_station_by_id("14e10").value(), 1128);
    mm.station_distances[&mm.get_station_by_id("14e10").value()].emplace_back(&mm.get_station_by_id("14e09").value(), 1128);
    mm.station_distances[&mm.get_station_by_id("14e10").value()].emplace_back(&mm.get_station_by_id("14e11").value(), 897);
    mm.station_distances[&mm.get_station_by_id("14e11").value()].emplace_back(&mm.get_station_by_id("14e10").value(), 897);
    mm.station_distances[&mm.get_station_by_id("14e11").value()].emplace_back(&mm.get_station_by_id("14e12").value(), 1780);
    mm.station_distances[&mm.get_station_by_id("14e12").value()].emplace_back(&mm.get_station_by_id("14e11").value(), 1780);
    mm.station_distances[&mm.get_station_by_id("14e12").value()].emplace_back(&mm.get_station_by_id("14e13").value(), 708);
    mm.station_distances[&mm.get_station_by_id("14e13").value()].emplace_back(&mm.get_station_by_id("14e12").value(), 708);
    mm.station_distances[&mm.get_station_by_id("14e13").value()].emplace_back(&mm.get_station_by_id("14e14").value(), 894);
    mm.station_distances[&mm.get_station_by_id("14e14").value()].emplace_back(&mm.get_station_by_id("14e13").value(), 894);
    mm.station_distances[&mm.get_station_by_id("14e14").value()].emplace_back(&mm.get_station_by_id("14e15").value(), 1085);
    mm.station_distances[&mm.get_station_by_id("14e15").value()].emplace_back(&mm.get_station_by_id("14e14").value(), 1085);
    mm.station_distances[&mm.get_station_by_id("14e15").value()].emplace_back(&mm.get_station_by_id("14e16").value(), 1221);
    mm.station_distances[&mm.get_station_by_id("14e16").value()].emplace_back(&mm.get_station_by_id("14e15").value(), 1221);
    mm.station_distances[&mm.get_station_by_id("14e16").value()].emplace_back(&mm.get_station_by_id("14e17").value(), 2173);
    mm.station_distances[&mm.get_station_by_id("14e17").value()].emplace_back(&mm.get_station_by_id("14e16").value(), 2173);
    mm.station_distances[&mm.get_station_by_id("14e17").value()].emplace_back(&mm.get_station_by_id("14e18").value(), 1600);
    mm.station_distances[&mm.get_station_by_id("14e18").value()].emplace_back(&mm.get_station_by_id("14e17").value(), 1600);
    mm.station_distances[&mm.get_station_by_id("14e18").value()].emplace_back(&mm.get_station_by_id("14e19").value(), 1171);
    mm.station_distances[&mm.get_station_by_id("14e19").value()].emplace_back(&mm.get_station_by_id("14e18").value(), 1171);
    mm.station_distances[&mm.get_station_by_id("14e19").value()].emplace_back(&mm.get_station_by_id("14e20").value(), 676);
    mm.station_distances[&mm.get_station_by_id("14e20").value()].emplace_back(&mm.get_station_by_id("14e19").value(), 676);
    mm.station_distances[&mm.get_station_by_id("14e20").value()].emplace_back(&mm.get_station_by_id("14e21").value(), 1168);
    mm.station_distances[&mm.get_station_by_id("14e21").value()].emplace_back(&mm.get_station_by_id("14e20").value(), 1168);
    mm.station_distances[&mm.get_station_by_id("14e21").value()].emplace_back(&mm.get_station_by_id("14e22").value(), 903);
    mm.station_distances[&mm.get_station_by_id("14e22").value()].emplace_back(&mm.get_station_by_id("14e21").value(), 903);
    mm.station_distances[&mm.get_station_by_id("14e22").value()].emplace_back(&mm.get_station_by_id("14e23").value(), 1283);
    mm.station_distances[&mm.get_station_by_id("14e23").value()].emplace_back(&mm.get_station_by_id("14e22").value(), 1283);
    mm.station_distances[&mm.get_station_by_id("14e23").value()].emplace_back(&mm.get_station_by_id("14e24").value(), 1100);
    mm.station_distances[&mm.get_station_by_id("14e24").value()].emplace_back(&mm.get_station_by_id("14e23").value(), 1100);
    mm.station_distances[&mm.get_station_by_id("14e24").value()].emplace_back(&mm.get_station_by_id("14e25").value(), 1364);
    mm.station_distances[&mm.get_station_by_id("14e25").value()].emplace_back(&mm.get_station_by_id("14e24").value(), 1364);

    mm.station_distances[&mm.get_station_by_id("14w01").value()].emplace_back(&mm.get_station_by_id("14w02").value(), 1345);
    mm.station_distances[&mm.get_station_by_id("14w02").value()].emplace_back(&mm.get_station_by_id("14w01").value(), 1345);
    mm.station_distances[&mm.get_station_by_id("14w02").value()].emplace_back(&mm.get_station_by_id("14w03").value(), 4073);
    mm.station_distances[&mm.get_station_by_id("14w03").value()].emplace_back(&mm.get_station_by_id("14w02").value(), 4073);
    mm.station_distances[&mm.get_station_by_id("14w03").value()].emplace_back(&mm.get_station_by_id("14w04").value(), 1236);
    mm.station_distances[&mm.get_station_by_id("14w04").value()].emplace_back(&mm.get_station_by_id("14w03").value(), 1236);
    mm.station_distances[&mm.get_station_by_id("14w04").value()].emplace_back(&mm.get_station_by_id("14w05").value(), 2044);
    mm.station_distances[&mm.get_station_by_id("14w05").value()].emplace_back(&mm.get_station_by_id("14w04").value(), 2044);
    mm.station_distances[&mm.get_station_by_id("14w05").value()].emplace_back(&mm.get_station_by_id("14w06").value(), 1579);
    mm.station_distances[&mm.get_station_by_id("14w06").value()].emplace_back(&mm.get_station_by_id("14w05").value(), 1579);
    mm.station_distances[&mm.get_station_by_id("14w06").value()].emplace_back(&mm.get_station_by_id("14w07").value(), 845);
    mm.station_distances[&mm.get_station_by_id("14w07").value()].emplace_back(&mm.get_station_by_id("14w06").value(), 845);

    mm.station_distances[&mm.get_station_by_id("air01").value()].emplace_back(&mm.get_station_by_id("air02").value(), 2999);
    mm.station_distances[&mm.get_station_by_id("air02").value()].emplace_back(&mm.get_station_by_id("air01").value(), 2999);
    mm.station_distances[&mm.get_station_by_id("air02").value()].emplace_back(&mm.get_station_by_id("air03").value(), 18329);
    mm.station_distances[&mm.get_station_by_id("air03").value()].emplace_back(&mm.get_station_by_id("air04").value(), 7239);
    mm.station_distances[&mm.get_station_by_id("air04").value()].emplace_back(&mm.get_station_by_id("air02").value(), 20619);

    mm.station_distances[&mm.get_station_by_id("batong01").value()].emplace_back(&mm.get_station_by_id("batong02").value(), 1715);
    mm.station_distances[&mm.get_station_by_id("batong02").value()].emplace_back(&mm.get_station_by_id("batong01").value(), 1715);
    mm.station_distances[&mm.get_station_by_id("batong02").value()].emplace_back(&mm.get_station_by_id("batong03").value(), 1375);
    mm.station_distances[&mm.get_station_by_id("batong03").value()].emplace_back(&mm.get_station_by_id("batong02").value(), 1375);
    mm.station_distances[&mm.get_station_by_id("batong03").value()].emplace_back(&mm.get_station_by_id("batong04").value(), 2002);
    mm.station_distances[&mm.get_station_by_id("batong04").value()].emplace_back(&mm.get_station_by_id("batong03").value(), 2002);
    mm.station_distances[&mm.get_station_by_id("batong04").value()].emplace_back(&mm.get_station_by_id("batong05").value(), 1894);
    mm.station_distances[&mm.get_station_by_id("batong05").value()].emplace_back(&mm.get_station_by_id("batong04").value(), 1894);
    mm.station_distances[&mm.get_station_by_id("batong05").value()].emplace_back(&mm.get_station_by_id("batong06").value(), 1912);
    mm.station_distances[&mm.get_station_by_id("batong06").value()].emplace_back(&mm.get_station_by_id("batong05").value(), 1912);
    mm.station_distances[&mm.get_station_by_id("batong06").value()].emplace_back(&mm.get_station_by_id("batong07").value(), 1763);
    mm.station_distances[&mm.get_station_by_id("batong07").value()].emplace_back(&mm.get_station_by_id("batong06").value(), 1763);
    mm.station_distances[&mm.get_station_by_id("batong07").value()].emplace_back(&mm.get_station_by_id("batong08").value(), 1700);
    mm.station_distances[&mm.get_station_by_id("batong08").value()].emplace_back(&mm.get_station_by_id("batong07").value(), 1700);
    mm.station_distances[&mm.get_station_by_id("batong08").value()].emplace_back(&mm.get_station_by_id("batong09").value(), 1465);
    mm.station_distances[&mm.get_station_by_id("batong09").value()].emplace_back(&mm.get_station_by_id("batong08").value(), 1465);
    mm.station_distances[&mm.get_station_by_id("batong09").value()].emplace_back(&mm.get_station_by_id("batong10").value(), 990);
    mm.station_distances[&mm.get_station_by_id("batong10").value()].emplace_back(&mm.get_station_by_id("batong09").value(), 990);
    mm.station_distances[&mm.get_station_by_id("batong10").value()].emplace_back(&mm.get_station_by_id("batong11").value(), 1225);
    mm.station_distances[&mm.get_station_by_id("batong11").value()].emplace_back(&mm.get_station_by_id("batong10").value(), 1225);
    mm.station_distances[&mm.get_station_by_id("batong11").value()].emplace_back(&mm.get_station_by_id("batong12").value(), 1257);
    mm.station_distances[&mm.get_station_by_id("batong12").value()].emplace_back(&mm.get_station_by_id("batong11").value(), 1257);
    mm.station_distances[&mm.get_station_by_id("batong12").value()].emplace_back(&mm.get_station_by_id("batong13").value(), 776);
    mm.station_distances[&mm.get_station_by_id("batong13").value()].emplace_back(&mm.get_station_by_id("batong12").value(), 776);

    mm.station_distances[&mm.get_station_by_id("changping01").value()].emplace_back(&mm.get_station_by_id("changping02").value(), 1213);
    mm.station_distances[&mm.get_station_by_id("changping02").value()].emplace_back(&mm.get_station_by_id("changping01").value(), 1213);
    mm.station_distances[&mm.get_station_by_id("changping02").value()].emplace_back(&mm.get_station_by_id("changping03").value(), 3508);
    mm.station_distances[&mm.get_station_by_id("changping03").value()].emplace_back(&mm.get_station_by_id("changping02").value(), 3508);
    mm.station_distances[&mm.get_station_by_id("changping03").value()].emplace_back(&mm.get_station_by_id("changping04").value(), 2433);
    mm.station_distances[&mm.get_station_by_id("changping04").value()].emplace_back(&mm.get_station_by_id("changping03").value(), 2433);
    mm.station_distances[&mm.get_station_by_id("changping04").value()].emplace_back(&mm.get_station_by_id("changping05").value(), 1683);
    mm.station_distances[&mm.get_station_by_id("changping05").value()].emplace_back(&mm.get_station_by_id("changping04").value(), 1683);
    mm.station_distances[&mm.get_station_by_id("changping05").value()].emplace_back(&mm.get_station_by_id("changping06").value(), 1958);
    mm.station_distances[&mm.get_station_by_id("changping06").value()].emplace_back(&mm.get_station_by_id("changping05").value(), 1958);
    mm.station_distances[&mm.get_station_by_id("changping06").value()].emplace_back(&mm.get_station_by_id("changping07").value(), 5357);
    mm.station_distances[&mm.get_station_by_id("changping07").value()].emplace_back(&mm.get_station_by_id("changping06").value(), 5357);
    mm.station_distances[&mm.get_station_by_id("changping07").value()].emplace_back(&mm.get_station_by_id("changping08").value(), 1964);
    mm.station_distances[&mm.get_station_by_id("changping08").value()].emplace_back(&mm.get_station_by_id("changping07").value(), 1964);
    mm.station_distances[&mm.get_station_by_id("changping08").value()].emplace_back(&mm.get_station_by_id("changping09").value(), 2025);
    mm.station_distances[&mm.get_station_by_id("changping09").value()].emplace_back(&mm.get_station_by_id("changping08").value(), 2025);
    mm.station_distances[&mm.get_station_by_id("changping09").value()].emplace_back(&mm.get_station_by_id("changping10").value(), 3799);
    mm.station_distances[&mm.get_station_by_id("changping10").value()].emplace_back(&mm.get_station_by_id("changping09").value(), 3799);
    mm.station_distances[&mm.get_station_by_id("changping10").value()].emplace_back(&mm.get_station_by_id("changping11").value(), 2367);
    mm.station_distances[&mm.get_station_by_id("changping11").value()].emplace_back(&mm.get_station_by_id("changping10").value(), 2367);
    mm.station_distances[&mm.get_station_by_id("changping11").value()].emplace_back(&mm.get_station_by_id("changping12").value(), 5440);
    mm.station_distances[&mm.get_station_by_id("changping12").value()].emplace_back(&mm.get_station_by_id("changping11").value(), 5440);

    mm.station_distances[&mm.get_station_by_id("daxing01").value()].emplace_back(&mm.get_station_by_id("daxing02").value(), 2798);
    mm.station_distances[&mm.get_station_by_id("daxing02").value()].emplace_back(&mm.get_station_by_id("daxing01").value(), 2798);
    mm.station_distances[&mm.get_station_by_id("daxing02").value()].emplace_back(&mm.get_station_by_id("daxing03").value(), 5102);
    mm.station_distances[&mm.get_station_by_id("daxing03").value()].emplace_back(&mm.get_station_by_id("daxing02").value(), 5102);
    mm.station_distances[&mm.get_station_by_id("daxing03").value()].emplace_back(&mm.get_station_by_id("daxing04").value(), 1810);
    mm.station_distances[&mm.get_station_by_id("daxing04").value()].emplace_back(&mm.get_station_by_id("daxing03").value(), 1810);
    mm.station_distances[&mm.get_station_by_id("daxing04").value()].emplace_back(&mm.get_station_by_id("daxing05").value(), 1128);
    mm.station_distances[&mm.get_station_by_id("daxing05").value()].emplace_back(&mm.get_station_by_id("daxing04").value(), 1128);
    mm.station_distances[&mm.get_station_by_id("daxing05").value()].emplace_back(&mm.get_station_by_id("daxing06").value(), 1096);
    mm.station_distances[&mm.get_station_by_id("daxing06").value()].emplace_back(&mm.get_station_by_id("daxing05").value(), 1096);
    mm.station_distances[&mm.get_station_by_id("daxing06").value()].emplace_back(&mm.get_station_by_id("daxing07").value(), 1200);
    mm.station_distances[&mm.get_station_by_id("daxing07").value()].emplace_back(&mm.get_station_by_id("daxing06").value(), 1200);
    mm.station_distances[&mm.get_station_by_id("daxing07").value()].emplace_back(&mm.get_station_by_id("daxing08").value(), 1214);
    mm.station_distances[&mm.get_station_by_id("daxing08").value()].emplace_back(&mm.get_station_by_id("daxing07").value(), 1214);
    mm.station_distances[&mm.get_station_by_id("daxing08").value()].emplace_back(&mm.get_station_by_id("daxing09").value(), 987);
    mm.station_distances[&mm.get_station_by_id("daxing09").value()].emplace_back(&mm.get_station_by_id("daxing08").value(), 987);
    mm.station_distances[&mm.get_station_by_id("daxing09").value()].emplace_back(&mm.get_station_by_id("daxing10").value(), 2035);
    mm.station_distances[&mm.get_station_by_id("daxing10").value()].emplace_back(&mm.get_station_by_id("daxing09").value(), 2035);
    mm.station_distances[&mm.get_station_by_id("daxing10").value()].emplace_back(&mm.get_station_by_id("daxing11").value(), 2918);
    mm.station_distances[&mm.get_station_by_id("daxing11").value()].emplace_back(&mm.get_station_by_id("daxing10").value(), 2918);
    mm.station_distances[&mm.get_station_by_id("daxing11").value()].emplace_back(&mm.get_station_by_id("daxing12").value(), 1811);
    mm.station_distances[&mm.get_station_by_id("daxing12").value()].emplace_back(&mm.get_station_by_id("daxing11").value(), 1811);

    mm.station_distances[&mm.get_station_by_id("fangshan01").value()].emplace_back(&mm.get_station_by_id("fangshan02").value(), 1405);
    mm.station_distances[&mm.get_station_by_id("fangshan02").value()].emplace_back(&mm.get_station_by_id("fangshan01").value(), 1405);
    mm.station_distances[&mm.get_station_by_id("fangshan02").value()].emplace_back(&mm.get_station_by_id("fangshan03").value(), 6466);
    mm.station_distances[&mm.get_station_by_id("fangshan03").value()].emplace_back(&mm.get_station_by_id("fangshan02").value(), 6466);
    mm.station_distances[&mm.get_station_by_id("fangshan03").value()].emplace_back(&mm.get_station_by_id("fangshan04").value(), 4041);
    mm.station_distances[&mm.get_station_by_id("fangshan04").value()].emplace_back(&mm.get_station_by_id("fangshan03").value(), 4041);
    mm.station_distances[&mm.get_station_by_id("fangshan04").value()].emplace_back(&mm.get_station_by_id("fangshan05").value(), 2150);
    mm.station_distances[&mm.get_station_by_id("fangshan05").value()].emplace_back(&mm.get_station_by_id("fangshan04").value(), 2150);
    mm.station_distances[&mm.get_station_by_id("fangshan05").value()].emplace_back(&mm.get_station_by_id("fangshan06").value(), 1474);
    mm.station_distances[&mm.get_station_by_id("fangshan06").value()].emplace_back(&mm.get_station_by_id("fangshan05").value(), 1474);
    mm.station_distances[&mm.get_station_by_id("fangshan06").value()].emplace_back(&mm.get_station_by_id("fangshan07").value(), 2003);
    mm.station_distances[&mm.get_station_by_id("fangshan07").value()].emplace_back(&mm.get_station_by_id("fangshan06").value(), 2003);
    mm.station_distances[&mm.get_station_by_id("fangshan07").value()].emplace_back(&mm.get_station_by_id("fangshan08").value(), 1188);
    mm.station_distances[&mm.get_station_by_id("fangshan08").value()].emplace_back(&mm.get_station_by_id("fangshan07").value(), 1188);
    mm.station_distances[&mm.get_station_by_id("fangshan08").value()].emplace_back(&mm.get_station_by_id("fangshan09").value(), 1738);
    mm.station_distances[&mm.get_station_by_id("fangshan09").value()].emplace_back(&mm.get_station_by_id("fangshan08").value(), 1738);
    mm.station_distances[&mm.get_station_by_id("fangshan09").value()].emplace_back(&mm.get_station_by_id("fangshan10").value(), 1332);
    mm.station_distances[&mm.get_station_by_id("fangshan10").value()].emplace_back(&mm.get_station_by_id("fangshan09").value(), 1332);
    mm.station_distances[&mm.get_station_by_id("fangshan10").value()].emplace_back(&mm.get_station_by_id("fangshan11").value(), 1330);
    mm.station_distances[&mm.get_station_by_id("fangshan11").value()].emplace_back(&mm.get_station_by_id("fangshan10").value(), 1330);

    mm.station_distances[&mm.get_station_by_id("yizhuang01").value()].emplace_back(&mm.get_station_by_id("yizhuang02").value(), 2631);
    mm.station_distances[&mm.get_station_by_id("yizhuang02").value()].emplace_back(&mm.get_station_by_id("yizhuang01").value(), 2631);
    mm.station_distances[&mm.get_station_by_id("yizhuang02").value()].emplace_back(&mm.get_station_by_id("yizhuang03").value(), 1275);
    mm.station_distances[&mm.get_station_by_id("yizhuang03").value()].emplace_back(&mm.get_station_by_id("yizhuang02").value(), 1275);
    mm.station_distances[&mm.get_station_by_id("yizhuang03").value()].emplace_back(&mm.get_station_by_id("yizhuang04").value(), 2366);
    mm.station_distances[&mm.get_station_by_id("yizhuang04").value()].emplace_back(&mm.get_station_by_id("yizhuang03").value(), 2366);
    mm.station_distances[&mm.get_station_by_id("yizhuang04").value()].emplace_back(&mm.get_station_by_id("yizhuang05").value(), 1982);
    mm.station_distances[&mm.get_station_by_id("yizhuang05").value()].emplace_back(&mm.get_station_by_id("yizhuang04").value(), 1982);
    mm.station_distances[&mm.get_station_by_id("yizhuang05").value()].emplace_back(&mm.get_station_by_id("yizhuang06").value(), 993);
    mm.station_distances[&mm.get_station_by_id("yizhuang06").value()].emplace_back(&mm.get_station_by_id("yizhuang05").value(), 993);
    mm.station_distances[&mm.get_station_by_id("yizhuang06").value()].emplace_back(&mm.get_station_by_id("yizhuang07").value(), 1728);
    mm.station_distances[&mm.get_station_by_id("yizhuang07").value()].emplace_back(&mm.get_station_by_id("yizhuang06").value(), 1728);
    mm.station_distances[&mm.get_station_by_id("yizhuang07").value()].emplace_back(&mm.get_station_by_id("yizhuang08").value(), 1090);
    mm.station_distances[&mm.get_station_by_id("yizhuang08").value()].emplace_back(&mm.get_station_by_id("yizhuang07").value(), 1090);
    mm.station_distances[&mm.get_station_by_id("yizhuang08").value()].emplace_back(&mm.get_station_by_id("yizhuang09").value(), 1355);
    mm.station_distances[&mm.get_station_by_id("yizhuang09").value()].emplace_back(&mm.get_station_by_id("yizhuang08").value(), 1355);
    mm.station_distances[&mm.get_station_by_id("yizhuang09").value()].emplace_back(&mm.get_station_by_id("yizhuang10").value(), 2337);
    mm.station_distances[&mm.get_station_by_id("yizhuang10").value()].emplace_back(&mm.get_station_by_id("yizhuang09").value(), 2337);
    mm.station_distances[&mm.get_station_by_id("yizhuang10").value()].emplace_back(&mm.get_station_by_id("yizhuang11").value(), 2301);
    mm.station_distances[&mm.get_station_by_id("yizhuang11").value()].emplace_back(&mm.get_station_by_id("yizhuang10").value(), 2301);
    mm.station_distances[&mm.get_station_by_id("yizhuang11").value()].emplace_back(&mm.get_station_by_id("yizhuang12").value(), 2055);
    mm.station_distances[&mm.get_station_by_id("yizhuang12").value()].emplace_back(&mm.get_station_by_id("yizhuang11").value(), 2055);
    mm.station_distances[&mm.get_station_by_id("yizhuang12").value()].emplace_back(&mm.get_station_by_id("yizhuang13").value(), 1281);
    mm.station_distances[&mm.get_station_by_id("yizhuang13").value()].emplace_back(&mm.get_station_by_id("yizhuang12").value(), 1281);
}

inline void initialize_transstations()
{
    mm.station_distances[&mm.get_station_by_id("0108").value()].emplace_back(&mm.get_station_by_id("1040").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0109").value()].emplace_back(&mm.get_station_by_id("0904").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0112").value()].emplace_back(&mm.get_station_by_id("0204").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0113").value()].emplace_back(&mm.get_station_by_id("0417").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0117").value()].emplace_back(&mm.get_station_by_id("0517").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0118").value()].emplace_back(&mm.get_station_by_id("0211").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0120").value()].emplace_back(&mm.get_station_by_id("1020").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0121").value()].emplace_back(&mm.get_station_by_id("14e12").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0122").value()].emplace_back(&mm.get_station_by_id("batong01").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0123").value()].emplace_back(&mm.get_station_by_id("batong02").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0201").value()].emplace_back(&mm.get_station_by_id("0412").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0201").value()].emplace_back(&mm.get_station_by_id("1301").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0202").value()].emplace_back(&mm.get_station_by_id("0606").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0204").value()].emplace_back(&mm.get_station_by_id("0112").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0206").value()].emplace_back(&mm.get_station_by_id("0418").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0209").value()].emplace_back(&mm.get_station_by_id("0518").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0211").value()].emplace_back(&mm.get_station_by_id("0118").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0212").value()].emplace_back(&mm.get_station_by_id("0611").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0214").value()].emplace_back(&mm.get_station_by_id("1316").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0214").value()].emplace_back(&mm.get_station_by_id("air01").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0215").value()].emplace_back(&mm.get_station_by_id("0512").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0217").value()].emplace_back(&mm.get_station_by_id("0816").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0407").value()].emplace_back(&mm.get_station_by_id("1003").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0410").value()].emplace_back(&mm.get_station_by_id("0901").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0412").value()].emplace_back(&mm.get_station_by_id("0201").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0412").value()].emplace_back(&mm.get_station_by_id("1301").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0414").value()].emplace_back(&mm.get_station_by_id("0607").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0417").value()].emplace_back(&mm.get_station_by_id("0113").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0418").value()].emplace_back(&mm.get_station_by_id("0206").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0419").value()].emplace_back(&mm.get_station_by_id("0705").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0421").value()].emplace_back(&mm.get_station_by_id("14e01").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0423").value()].emplace_back(&mm.get_station_by_id("1031").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0424").value()].emplace_back(&mm.get_station_by_id("daxing01").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0504").value()].emplace_back(&mm.get_station_by_id("1310").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0507").value()].emplace_back(&mm.get_station_by_id("1506").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0509").value()].emplace_back(&mm.get_station_by_id("1011").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0512").value()].emplace_back(&mm.get_station_by_id("0215").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0515").value()].emplace_back(&mm.get_station_by_id("0610").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0517").value()].emplace_back(&mm.get_station_by_id("0117").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0518").value()].emplace_back(&mm.get_station_by_id("0209").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0519").value()].emplace_back(&mm.get_station_by_id("0709").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0521").value()].emplace_back(&mm.get_station_by_id("14e05").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0523").value()].emplace_back(&mm.get_station_by_id("1027").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0523").value()].emplace_back(&mm.get_station_by_id("yizhuang01").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0602").value()].emplace_back(&mm.get_station_by_id("1042").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0604").value()].emplace_back(&mm.get_station_by_id("0902").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0606").value()].emplace_back(&mm.get_station_by_id("0202").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0607").value()].emplace_back(&mm.get_station_by_id("0414").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0609").value()].emplace_back(&mm.get_station_by_id("0818").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0610").value()].emplace_back(&mm.get_station_by_id("0515").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0611").value()].emplace_back(&mm.get_station_by_id("0212").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0613").value()].emplace_back(&mm.get_station_by_id("1018").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0614").value()].emplace_back(&mm.get_station_by_id("14e14").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0701").value()].emplace_back(&mm.get_station_by_id("0905").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0705").value()].emplace_back(&mm.get_station_by_id("0419").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0709").value()].emplace_back(&mm.get_station_by_id("0519").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0713").value()].emplace_back(&mm.get_station_by_id("14e11").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0801").value()].emplace_back(&mm.get_station_by_id("changping10").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0805").value()].emplace_back(&mm.get_station_by_id("1309").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0811").value()].emplace_back(&mm.get_station_by_id("1504").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0813").value()].emplace_back(&mm.get_station_by_id("1009").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0816").value()].emplace_back(&mm.get_station_by_id("0217").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0818").value()].emplace_back(&mm.get_station_by_id("0609").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0901").value()].emplace_back(&mm.get_station_by_id("0410").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0902").value()].emplace_back(&mm.get_station_by_id("0604").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0904").value()].emplace_back(&mm.get_station_by_id("0109").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0905").value()].emplace_back(&mm.get_station_by_id("0701").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0907").value()].emplace_back(&mm.get_station_by_id("1038").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0908").value()].emplace_back(&mm.get_station_by_id("14w06").value(), 0);
    mm.station_distances[&mm.get_station_by_id("0913").value()].emplace_back(&mm.get_station_by_id("fangshan01").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1003").value()].emplace_back(&mm.get_station_by_id("0407").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1005").value()].emplace_back(&mm.get_station_by_id("1303").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1009").value()].emplace_back(&mm.get_station_by_id("0813").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1011").value()].emplace_back(&mm.get_station_by_id("0509").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1012").value()].emplace_back(&mm.get_station_by_id("1313").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1014").value()].emplace_back(&mm.get_station_by_id("air02").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1018").value()].emplace_back(&mm.get_station_by_id("0613").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1020").value()].emplace_back(&mm.get_station_by_id("0120").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1024").value()].emplace_back(&mm.get_station_by_id("14e07").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1027").value()].emplace_back(&mm.get_station_by_id("0523").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1027").value()].emplace_back(&mm.get_station_by_id("yizhuang01").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1031").value()].emplace_back(&mm.get_station_by_id("0423").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1037").value()].emplace_back(&mm.get_station_by_id("14w07").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1038").value()].emplace_back(&mm.get_station_by_id("0907").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1040").value()].emplace_back(&mm.get_station_by_id("0108").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1042").value()].emplace_back(&mm.get_station_by_id("0602").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1301").value()].emplace_back(&mm.get_station_by_id("0412").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1301").value()].emplace_back(&mm.get_station_by_id("0201").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1303").value()].emplace_back(&mm.get_station_by_id("1005").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1306").value()].emplace_back(&mm.get_station_by_id("changping12").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1309").value()].emplace_back(&mm.get_station_by_id("0805").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1310").value()].emplace_back(&mm.get_station_by_id("0504").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1312").value()].emplace_back(&mm.get_station_by_id("1508").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1313").value()].emplace_back(&mm.get_station_by_id("1012").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1316").value()].emplace_back(&mm.get_station_by_id("0214").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1316").value()].emplace_back(&mm.get_station_by_id("air01").value(), 0);
    mm.station_distances[&mm.get_station_by_id("14w06").value()].emplace_back(&mm.get_station_by_id("0908").value(), 0);
    mm.station_distances[&mm.get_station_by_id("14w07").value()].emplace_back(&mm.get_station_by_id("1037").value(), 0);
    mm.station_distances[&mm.get_station_by_id("14e01").value()].emplace_back(&mm.get_station_by_id("0421").value(), 0);
    mm.station_distances[&mm.get_station_by_id("14e05").value()].emplace_back(&mm.get_station_by_id("0521").value(), 0);
    mm.station_distances[&mm.get_station_by_id("14e07").value()].emplace_back(&mm.get_station_by_id("1024").value(), 0);
    mm.station_distances[&mm.get_station_by_id("14e11").value()].emplace_back(&mm.get_station_by_id("0713").value(), 0);
    mm.station_distances[&mm.get_station_by_id("14e12").value()].emplace_back(&mm.get_station_by_id("0121").value(), 0);
    mm.station_distances[&mm.get_station_by_id("14e14").value()].emplace_back(&mm.get_station_by_id("0614").value(), 0);
    mm.station_distances[&mm.get_station_by_id("14e22").value()].emplace_back(&mm.get_station_by_id("1509").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1504").value()].emplace_back(&mm.get_station_by_id("0811").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1506").value()].emplace_back(&mm.get_station_by_id("0507").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1508").value()].emplace_back(&mm.get_station_by_id("1312").value(), 0);
    mm.station_distances[&mm.get_station_by_id("1509").value()].emplace_back(&mm.get_station_by_id("14e22").value(), 0);
    mm.station_distances[&mm.get_station_by_id("batong01").value()].emplace_back(&mm.get_station_by_id("0122").value(), 0);
    mm.station_distances[&mm.get_station_by_id("batong02").value()].emplace_back(&mm.get_station_by_id("0123").value(), 0);
    mm.station_distances[&mm.get_station_by_id("changping12").value()].emplace_back(&mm.get_station_by_id("1306").value(), 0);
    mm.station_distances[&mm.get_station_by_id("changping10").value()].emplace_back(&mm.get_station_by_id("0801").value(), 0);
    mm.station_distances[&mm.get_station_by_id("yizhuang01").value()].emplace_back(&mm.get_station_by_id("0523").value(), 0);
    mm.station_distances[&mm.get_station_by_id("yizhuang01").value()].emplace_back(&mm.get_station_by_id("1027").value(), 0);
    mm.station_distances[&mm.get_station_by_id("daxing01").value()].emplace_back(&mm.get_station_by_id("0424").value(), 0);
    mm.station_distances[&mm.get_station_by_id("fangshan01").value()].emplace_back(&mm.get_station_by_id("0913").value(), 0);
    mm.station_distances[&mm.get_station_by_id("air01").value()].emplace_back(&mm.get_station_by_id("0214").value(), 0);
    mm.station_distances[&mm.get_station_by_id("air01").value()].emplace_back(&mm.get_station_by_id("1316").value(), 0);
    mm.station_distances[&mm.get_station_by_id("air02").value()].emplace_back(&mm.get_station_by_id("1014").value(), 0);
}

void initialization()
{
    initialize_stations();
    initialize_distances();
    initialize_transstations();
}