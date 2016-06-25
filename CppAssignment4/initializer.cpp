#include "initializer.h"
#include "MetroManager.h"
#include "Station.h"
#include "Line.h"

extern MetroManager mm;

inline void initialize_stations()
{
    mm.get_line_by_id("01")->assign_station({
        Station{ "苹果园" },
        Station{ "古城" },
        Station{ "八角游乐园" },
        Station{ "八宝山" },
        Station{ "玉泉路" },
        Station{ "五棵松" },
        Station{ "万寿路" },
        Station{ "公主坟" },
        Station{ "军事博物馆" },
        Station{ "木樨地" },
        Station{ "南礼士路" },
        Station{ "复兴门" },
        Station{ "西单" },
        Station{ "天安门西" },
        Station{ "天安门东" },
        Station{ "王府井" },
        Station{ "东单" },
        Station{ "建国门" },
        Station{ "永安里" },
        Station{ "国贸" },
        Station{ "大望路" },
        Station{ "四惠" },
        Station{ "四惠东" }
    });
    mm.get_line_by_id("02")->assign_station({
        Station{ "西直门" },
        Station{ "车公庄" },
        Station{ "阜成门" },
        Station{ "复兴门" },
        Station{ "长椿街" },
        Station{ "宣武门" },
        Station{ "和平门" },
        Station{ "前门" },
        Station{ "崇文门" },
        Station{ "北京站" },
        Station{ "建国门" },
        Station{ "朝阳门" },
        Station{ "东四十条" },
        Station{ "东直门" },
        Station{ "雍和宫" },
        Station{ "安定门" },
        Station{ "鼓楼大街" },
        Station{ "积水潭" }
    });
    mm.get_line_by_id("04")->assign_station({
        Station{ "安河桥北" },
        Station{ "北宫门" },
        Station{ "西苑" },
        Station{ "圆明园" },
        Station{ "北京大学东门" },
        Station{ "中关村" },
        Station{ "海淀黄庄" },
        Station{ "人民大学" },
        Station{ "魏公村" },
        Station{ "国家图书馆" },
        Station{ "动物园" },
        Station{ "西直门" },
        Station{ "新街口" },
        Station{ "平安里" },
        Station{ "西四" },
        Station{ "灵境胡同" },
        Station{ "西单" },
        Station{ "宣武门" },
        Station{ "菜市口" },
        Station{ "陶然亭" },
        Station{ "北京南站" },
        Station{ "马家堡" },
        Station{ "角门西" },
        Station{ "公益西桥" }
    });
    mm.get_line_by_id("05")->assign_station({
        Station{ "天通苑北" },
        Station{ "天通苑" },
        Station{ "天通苑南" },
        Station{ "立水桥" },
        Station{ "立水桥南" },
        Station{ "北苑路北" },
        Station{ "大屯路东" },
        Station{ "惠新西街北口" },
        Station{ "惠新西街南口" },
        Station{ "和平西桥" },
        Station{ "和平里北街" },
        Station{ "雍和宫" },
        Station{ "北新桥" },
        Station{ "张自忠路" },
        Station{ "东四" },
        Station{ "灯市口" },
        Station{ "东单" },
        Station{ "崇文门" },
        Station{ "磁器口" },
        Station{ "天坛东门" },
        Station{ "蒲黄榆" },
        Station{ "刘家窑" },
        Station{ "宋家庄" }
    });
    mm.get_line_by_id("06")->assign_station({
        Station{ "海淀五路居" },
        Station{ "慈寿寺" },
        Station{ "花园桥" },
        Station{ "白石桥南" },
        Station{ "车公庄西" },
        Station{ "车公庄" },
        Station{ "平安里" },
        Station{ "北海北" },
        Station{ "南锣鼓巷" },
        Station{ "东四" },
        Station{ "朝阳门" },
        Station{ "东大桥" },
        Station{ "呼家楼" },
        Station{ "金台路" },
        Station{ "十里堡" },
        Station{ "青年路" },
        Station{ "褡裢坡" },
        Station{ "黄渠" },
        Station{ "常营" },
        Station{ "草房" },
        Station{ "物资学院路" },
        Station{ "通州北关" },
        Station{ "通运门" },
        Station{ "北运河西" },
        Station{ "北运河东" },
        Station{ "郝家府" },
        Station{ "东夏园" },
        Station{ "潞城" }
    });
    mm.get_line_by_id("07")->assign_station({
        Station{ "北京西站" },
        Station{ "湾子" },
        Station{ "达官营" },
        Station{ "广安门内" },
        Station{ "菜市口" },
        Station{ "虎坊桥" },
        Station{ "珠市口" },
        Station{ "桥湾" },
        Station{ "磁器口" },
        Station{ "广渠门内" },
        Station{ "广渠门外" },
        Station{ "双井" },
        Station{ "九龙山" },
        Station{ "大郊亭" },
        Station{ "百子湾" },
        Station{ "化工" },
        Station{ "南楼梓庄" },
        Station{ "欢乐谷景区" },
        Station{ "垡头" },
        Station{ "双合" },
        Station{ "焦化厂" }
    });
    mm.get_line_by_id("08")->assign_station({
        Station{ "朱辛庄" },
        Station{ "育知路" },
        Station{ "平西府" },
        Station{ "回龙观东大街" },
        Station{ "霍营" },
        Station{ "育新" },
        Station{ "西小口" },
        Station{ "永泰庄" },
        Station{ "林萃桥" },
        Station{ "森林公园南门" },
        Station{ "奥林匹克公园" },
        Station{ "奥体中心" },
        Station{ "北土城" },
        Station{ "安华桥" },
        Station{ "安德里北街" },
        Station{ "鼓楼大街" },
        Station{ "什刹海" },
        Station{ "南锣鼓巷" }
    });
    mm.get_line_by_id("09")->assign_station({
        Station{ "国家图书馆" },
        Station{ "白石桥南" },
        Station{ "白堆子" },
        Station{ "军事博物馆" },
        Station{ "北京西站" },
        Station{ "六里桥东" },
        Station{ "六里桥" },
        Station{ "七里庄" },
        Station{ "丰台东大街" },
        Station{ "丰台南路" },
        Station{ "科怡路" },
        Station{ "丰台科技园" },
        Station{ "郭公庄" }
    });
    mm.get_line_by_id("10")->assign_station({
        Station{ "巴沟" },
        Station{ "苏州街" },
        Station{ "海淀黄庄" },
        Station{ "知春里" },
        Station{ "知春路" },
        Station{ "西土城" },
        Station{ "牡丹园" },
        Station{ "健德门" },
        Station{ "北土城" },
        Station{ "安贞门" },
        Station{ "惠新西街南口" },
        Station{ "芍药居" },
        Station{ "太阳宫" },
        Station{ "三元桥" },
        Station{ "亮马桥" },
        Station{ "农业展览馆" },
        Station{ "团结湖" },
        Station{ "呼家楼" },
        Station{ "金台夕照" },
        Station{ "国贸" },
        Station{ "双井" },
        Station{ "劲松" },
        Station{ "潘家园" },
        Station{ "十里河" },
        Station{ "分钟寺" },
        Station{ "成寿寺" },
        Station{ "宋家庄" },
        Station{ "石榴庄" },
        Station{ "大红门" },
        Station{ "角门东" },
        Station{ "角门西" },
        Station{ "草桥" },
        Station{ "纪家庙" },
        Station{ "首经贸" },
        Station{ "丰台站" },
        Station{ "泥洼" },
        Station{ "西局" },
        Station{ "六里桥" },
        Station{ "莲花桥" },
        Station{ "公主坟" },
        Station{ "西钓鱼台" },
        Station{ "慈寿寺" },
        Station{ "车道沟" },
        Station{ "长春桥" },
        Station{ "火器营" }
    });
    mm.get_line_by_id("13")->assign_station({
        Station{ "西直门" },
        Station{ "大钟寺" },
        Station{ "知春路" },
        Station{ "五道口" },
        Station{ "上地" },
        Station{ "西二旗" },
        Station{ "龙泽" },
        Station{ "回龙观" },
        Station{ "霍营" },
        Station{ "立水桥" },
        Station{ "北苑" },
        Station{ "望京西" },
        Station{ "芍药居" },
        Station{ "光熙门" },
        Station{ "柳芳" },
        Station{ "东直门" }
    });
    mm.get_line_by_id("14e")->assign_station({
        Station{ "北京南站" },
        Station{ "陶然桥" },
        Station{ "永定门外" },
        Station{ "景泰" },
        Station{ "蒲黄榆" },
        Station{ "方庄" },
        Station{ "十里河" },
        Station{ "南八里庄" },
        Station{ "北工大西门" },
        Station{ "平乐园" },
        Station{ "九龙山" },
        Station{ "大望路" },
        Station{ "红庙" },
        Station{ "金台路" },
        Station{ "朝阳公园" },
        Station{ "枣营" },
        Station{ "东风北桥" },
        Station{ "将台" },
        Station{ "高家园" },
        Station{ "望京南" },
        Station{ "阜通" },
        Station{ "望京" },
        Station{ "东湖渠" },
        Station{ "来广营" },
        Station{ "善各庄" }
    });
    mm.get_line_by_id("14w")->assign_station({
        Station{ "张郭庄" },
        Station{ "园博园" },
        Station{ "大瓦窑" },
        Station{ "郭庄子" },
        Station{ "大井" },
        Station{ "七里庄" },
        Station{ "西局" }
    });
    mm.get_line_by_id("15")->assign_station({
        Station{ "清华东路西口" },
        Station{ "六道口" },
        Station{ "北沙滩" },
        Station{ "奥林匹克公园" },
        Station{ "安立路" },
        Station{ "大屯路东" },
        Station{ "关庄" },
        Station{ "望京西" },
        Station{ "望京" },
        Station{ "望京东" },
        Station{ "崔各庄" },
        Station{ "马泉营" },
        Station{ "孙河" },
        Station{ "国展" },
        Station{ "花梨坎" },
        Station{ "后沙峪" },
        Station{ "南法信" },
        Station{ "石门" },
        Station{ "顺义" },
        Station{ "俸伯" }
    });
    mm.get_line_by_id("air")->assign_station({
        Station{ "东直门" },
        Station{ "三元桥" },
        Station{ "T3航站楼" , false, true },
        Station{ "T2航站楼" , false, true }
    });
    mm.get_line_by_id("batong")->assign_station({
        Station{ "四惠" },
        Station{ "四惠东" },
        Station{ "高碑店" },
        Station{ "传媒大学" },
        Station{ "双桥" },
        Station{ "管庄" },
        Station{ "八里桥" },
        Station{ "通州北苑" },
        Station{ "果园" },
        Station{ "九棵树" },
        Station{ "梨园" },
        Station{ "临河里" },
        Station{ "土桥" }
    });
    mm.get_line_by_id("changping")->assign_station({
        Station{ "昌平西山口" },
        Station{ "十三陵景区" },
        Station{ "昌平" },
        Station{ "昌平东关" },
        Station{ "北邵洼" },
        Station{ "南邵" },
        Station{ "沙河高教园" },
        Station{ "沙河" },
        Station{ "巩华城" },
        Station{ "朱辛庄" },
        Station{ "生命科学园" },
        Station{ "西二旗" }
    });
    mm.get_line_by_id("daxing")->assign_station({
        Station{ "公益西桥" },
        Station{ "新宫" },
        Station{ "西红门" },
        Station{ "高米店北" },
        Station{ "高米店南" },
        Station{ "枣园" },
        Station{ "清源路" },
        Station{ "黄村西大街" },
        Station{ "黄村火车站" },
        Station{ "义和庄" },
        Station{ "生物医药基地" },
        Station{ "天宫院" }
    });
    mm.get_line_by_id("fangshan")->assign_station({
        Station{ "郭公庄" },
        Station{ "大葆台" },
        Station{ "稻田" },
        Station{ "长阳" },
        Station{ "篱笆房" },
        Station{ "广阳城" },
        Station{ "良乡大学城北" },
        Station{ "良乡大学城" },
        Station{ "良乡大学城西" },
        Station{ "良乡南关" },
        Station{ "苏庄" },
    });
    mm.get_line_by_id("yizhuang")->assign_station({
        Station{ "宋家庄" },
        Station{ "肖村" },
        Station{ "小红门" },
        Station{ "旧宫" },
        Station{ "亦庄桥" },
        Station{ "亦庄文化园" },
        Station{ "万源街" },
        Station{ "荣京东街" },
        Station{ "荣昌东街" },
        Station{ "同济南路" },
        Station{ "经海路" },
        Station{ "次渠南" },
        Station{ "次渠" }
    });
}

inline void initialize_distances()
{
    mm.station_distances[mm.get_station_by_id("0101")].emplace_back(mm.get_station_by_id("0102"), 2606);
    mm.station_distances[mm.get_station_by_id("0102")].emplace_back(mm.get_station_by_id("0101"), 2606);
    mm.station_distances[mm.get_station_by_id("0102")].emplace_back(mm.get_station_by_id("0103"), 1921);
    mm.station_distances[mm.get_station_by_id("0103")].emplace_back(mm.get_station_by_id("0102"), 1921);
    mm.station_distances[mm.get_station_by_id("0103")].emplace_back(mm.get_station_by_id("0104"), 1953);
    mm.station_distances[mm.get_station_by_id("0104")].emplace_back(mm.get_station_by_id("0103"), 1953);
    mm.station_distances[mm.get_station_by_id("0104")].emplace_back(mm.get_station_by_id("0105"), 1479);
    mm.station_distances[mm.get_station_by_id("0105")].emplace_back(mm.get_station_by_id("0104"), 1479);
    mm.station_distances[mm.get_station_by_id("0105")].emplace_back(mm.get_station_by_id("0106"), 1810);
    mm.station_distances[mm.get_station_by_id("0106")].emplace_back(mm.get_station_by_id("0105"), 1810);
    mm.station_distances[mm.get_station_by_id("0106")].emplace_back(mm.get_station_by_id("0107"), 1778);
    mm.station_distances[mm.get_station_by_id("0107")].emplace_back(mm.get_station_by_id("0106"), 1778);
    mm.station_distances[mm.get_station_by_id("0107")].emplace_back(mm.get_station_by_id("0108"), 1313);
    mm.station_distances[mm.get_station_by_id("0108")].emplace_back(mm.get_station_by_id("0107"), 1313);
    mm.station_distances[mm.get_station_by_id("0108")].emplace_back(mm.get_station_by_id("0109"), 1172);
    mm.station_distances[mm.get_station_by_id("0109")].emplace_back(mm.get_station_by_id("0108"), 1172);
    mm.station_distances[mm.get_station_by_id("0109")].emplace_back(mm.get_station_by_id("0110"), 1166);
    mm.station_distances[mm.get_station_by_id("0110")].emplace_back(mm.get_station_by_id("0109"), 1166);
    mm.station_distances[mm.get_station_by_id("0110")].emplace_back(mm.get_station_by_id("0111"), 1291);
    mm.station_distances[mm.get_station_by_id("0111")].emplace_back(mm.get_station_by_id("0110"), 1291);
    mm.station_distances[mm.get_station_by_id("0111")].emplace_back(mm.get_station_by_id("0112"), 424);
    mm.station_distances[mm.get_station_by_id("0112")].emplace_back(mm.get_station_by_id("0111"), 424);
    mm.station_distances[mm.get_station_by_id("0112")].emplace_back(mm.get_station_by_id("0113"), 1590);
    mm.station_distances[mm.get_station_by_id("0113")].emplace_back(mm.get_station_by_id("0112"), 1590);
    mm.station_distances[mm.get_station_by_id("0113")].emplace_back(mm.get_station_by_id("0114"), 1217);
    mm.station_distances[mm.get_station_by_id("0114")].emplace_back(mm.get_station_by_id("0113"), 1217);
    mm.station_distances[mm.get_station_by_id("0114")].emplace_back(mm.get_station_by_id("0115"), 925);
    mm.station_distances[mm.get_station_by_id("0115")].emplace_back(mm.get_station_by_id("0114"), 925);
    mm.station_distances[mm.get_station_by_id("0115")].emplace_back(mm.get_station_by_id("0116"), 852);
    mm.station_distances[mm.get_station_by_id("0116")].emplace_back(mm.get_station_by_id("0115"), 852);
    mm.station_distances[mm.get_station_by_id("0116")].emplace_back(mm.get_station_by_id("0117"), 774);
    mm.station_distances[mm.get_station_by_id("0117")].emplace_back(mm.get_station_by_id("0116"), 774);
    mm.station_distances[mm.get_station_by_id("0117")].emplace_back(mm.get_station_by_id("0118"), 1230);
    mm.station_distances[mm.get_station_by_id("0118")].emplace_back(mm.get_station_by_id("0117"), 1230);
    mm.station_distances[mm.get_station_by_id("0118")].emplace_back(mm.get_station_by_id("0119"), 1377);
    mm.station_distances[mm.get_station_by_id("0119")].emplace_back(mm.get_station_by_id("0118"), 1377);
    mm.station_distances[mm.get_station_by_id("0119")].emplace_back(mm.get_station_by_id("0120"), 790);
    mm.station_distances[mm.get_station_by_id("0120")].emplace_back(mm.get_station_by_id("0119"), 790);
    mm.station_distances[mm.get_station_by_id("0120")].emplace_back(mm.get_station_by_id("0121"), 1385);
    mm.station_distances[mm.get_station_by_id("0121")].emplace_back(mm.get_station_by_id("0120"), 1385);
    mm.station_distances[mm.get_station_by_id("0121")].emplace_back(mm.get_station_by_id("0122"), 1673);
    mm.station_distances[mm.get_station_by_id("0122")].emplace_back(mm.get_station_by_id("0121"), 1673);
    mm.station_distances[mm.get_station_by_id("0122")].emplace_back(mm.get_station_by_id("0123"), 1714);
    mm.station_distances[mm.get_station_by_id("0123")].emplace_back(mm.get_station_by_id("0122"), 1714);

    mm.station_distances[mm.get_station_by_id("0201")].emplace_back(mm.get_station_by_id("0202"), 909);
    mm.station_distances[mm.get_station_by_id("0202")].emplace_back(mm.get_station_by_id("0201"), 909);
    mm.station_distances[mm.get_station_by_id("0202")].emplace_back(mm.get_station_by_id("0203"), 960);
    mm.station_distances[mm.get_station_by_id("0203")].emplace_back(mm.get_station_by_id("0202"), 960);
    mm.station_distances[mm.get_station_by_id("0203")].emplace_back(mm.get_station_by_id("0204"), 1832);
    mm.station_distances[mm.get_station_by_id("0204")].emplace_back(mm.get_station_by_id("0203"), 1832);
    mm.station_distances[mm.get_station_by_id("0204")].emplace_back(mm.get_station_by_id("0205"), 1234);
    mm.station_distances[mm.get_station_by_id("0205")].emplace_back(mm.get_station_by_id("0204"), 1234);
    mm.station_distances[mm.get_station_by_id("0205")].emplace_back(mm.get_station_by_id("0206"), 929);
    mm.station_distances[mm.get_station_by_id("0206")].emplace_back(mm.get_station_by_id("0205"), 929);
    mm.station_distances[mm.get_station_by_id("0206")].emplace_back(mm.get_station_by_id("0207"), 851);
    mm.station_distances[mm.get_station_by_id("0207")].emplace_back(mm.get_station_by_id("0206"), 851);
    mm.station_distances[mm.get_station_by_id("0207")].emplace_back(mm.get_station_by_id("0208"), 1171);
    mm.station_distances[mm.get_station_by_id("0208")].emplace_back(mm.get_station_by_id("0207"), 1171);
    mm.station_distances[mm.get_station_by_id("0208")].emplace_back(mm.get_station_by_id("0209"), 1634);
    mm.station_distances[mm.get_station_by_id("0209")].emplace_back(mm.get_station_by_id("0208"), 1634);
    mm.station_distances[mm.get_station_by_id("0209")].emplace_back(mm.get_station_by_id("0210"), 1023);
    mm.station_distances[mm.get_station_by_id("0210")].emplace_back(mm.get_station_by_id("0209"), 1023);
    mm.station_distances[mm.get_station_by_id("0210")].emplace_back(mm.get_station_by_id("0211"), 945);
    mm.station_distances[mm.get_station_by_id("0211")].emplace_back(mm.get_station_by_id("0210"), 945);
    mm.station_distances[mm.get_station_by_id("0211")].emplace_back(mm.get_station_by_id("0212"), 1763);
    mm.station_distances[mm.get_station_by_id("0212")].emplace_back(mm.get_station_by_id("0211"), 1763);
    mm.station_distances[mm.get_station_by_id("0212")].emplace_back(mm.get_station_by_id("0213"), 1027);
    mm.station_distances[mm.get_station_by_id("0213")].emplace_back(mm.get_station_by_id("0212"), 1027);
    mm.station_distances[mm.get_station_by_id("0213")].emplace_back(mm.get_station_by_id("0214"), 824);
    mm.station_distances[mm.get_station_by_id("0214")].emplace_back(mm.get_station_by_id("0213"), 824);
    mm.station_distances[mm.get_station_by_id("0214")].emplace_back(mm.get_station_by_id("0215"), 2228);
    mm.station_distances[mm.get_station_by_id("0215")].emplace_back(mm.get_station_by_id("0214"), 2228);
    mm.station_distances[mm.get_station_by_id("0215")].emplace_back(mm.get_station_by_id("0216"), 794);
    mm.station_distances[mm.get_station_by_id("0216")].emplace_back(mm.get_station_by_id("0215"), 794);
    mm.station_distances[mm.get_station_by_id("0216")].emplace_back(mm.get_station_by_id("0217"), 1237);
    mm.station_distances[mm.get_station_by_id("0217")].emplace_back(mm.get_station_by_id("0216"), 1237);
    mm.station_distances[mm.get_station_by_id("0217")].emplace_back(mm.get_station_by_id("0218"), 1766);
    mm.station_distances[mm.get_station_by_id("0218")].emplace_back(mm.get_station_by_id("0217"), 1766);
    mm.station_distances[mm.get_station_by_id("0218")].emplace_back(mm.get_station_by_id("0201"), 1899);
    mm.station_distances[mm.get_station_by_id("0201")].emplace_back(mm.get_station_by_id("0218"), 1899);

    mm.station_distances[mm.get_station_by_id("0401")].emplace_back(mm.get_station_by_id("0402"), 1363);
    mm.station_distances[mm.get_station_by_id("0402")].emplace_back(mm.get_station_by_id("0401"), 1363);
    mm.station_distances[mm.get_station_by_id("0402")].emplace_back(mm.get_station_by_id("0403"), 1251);
    mm.station_distances[mm.get_station_by_id("0403")].emplace_back(mm.get_station_by_id("0402"), 1251);
    mm.station_distances[mm.get_station_by_id("0403")].emplace_back(mm.get_station_by_id("0404"), 1672);
    mm.station_distances[mm.get_station_by_id("0404")].emplace_back(mm.get_station_by_id("0403"), 1672);
    mm.station_distances[mm.get_station_by_id("0404")].emplace_back(mm.get_station_by_id("0405"), 1295);
    mm.station_distances[mm.get_station_by_id("0405")].emplace_back(mm.get_station_by_id("0404"), 1295);
    mm.station_distances[mm.get_station_by_id("0405")].emplace_back(mm.get_station_by_id("0406"), 887);
    mm.station_distances[mm.get_station_by_id("0406")].emplace_back(mm.get_station_by_id("0405"), 887);
    mm.station_distances[mm.get_station_by_id("0406")].emplace_back(mm.get_station_by_id("0407"), 900);
    mm.station_distances[mm.get_station_by_id("0407")].emplace_back(mm.get_station_by_id("0406"), 900);
    mm.station_distances[mm.get_station_by_id("0407")].emplace_back(mm.get_station_by_id("0408"), 1063);
    mm.station_distances[mm.get_station_by_id("0408")].emplace_back(mm.get_station_by_id("0407"), 1063);
    mm.station_distances[mm.get_station_by_id("0408")].emplace_back(mm.get_station_by_id("0409"), 1051);
    mm.station_distances[mm.get_station_by_id("0409")].emplace_back(mm.get_station_by_id("0408"), 1051);
    mm.station_distances[mm.get_station_by_id("0409")].emplace_back(mm.get_station_by_id("0410"), 1658);
    mm.station_distances[mm.get_station_by_id("0410")].emplace_back(mm.get_station_by_id("0409"), 1658);
    mm.station_distances[mm.get_station_by_id("0410")].emplace_back(mm.get_station_by_id("0411"), 1517);
    mm.station_distances[mm.get_station_by_id("0411")].emplace_back(mm.get_station_by_id("0410"), 1517);
    mm.station_distances[mm.get_station_by_id("0411")].emplace_back(mm.get_station_by_id("0412"), 1441);
    mm.station_distances[mm.get_station_by_id("0412")].emplace_back(mm.get_station_by_id("0411"), 1441);
    mm.station_distances[mm.get_station_by_id("0412")].emplace_back(mm.get_station_by_id("0413"), 1025);
    mm.station_distances[mm.get_station_by_id("0413")].emplace_back(mm.get_station_by_id("0412"), 1025);
    mm.station_distances[mm.get_station_by_id("0413")].emplace_back(mm.get_station_by_id("0414"), 1100);
    mm.station_distances[mm.get_station_by_id("0414")].emplace_back(mm.get_station_by_id("0413"), 1100);
    mm.station_distances[mm.get_station_by_id("0414")].emplace_back(mm.get_station_by_id("0415"), 1100);
    mm.station_distances[mm.get_station_by_id("0415")].emplace_back(mm.get_station_by_id("0414"), 1100);
    mm.station_distances[mm.get_station_by_id("0415")].emplace_back(mm.get_station_by_id("0416"), 869);
    mm.station_distances[mm.get_station_by_id("0416")].emplace_back(mm.get_station_by_id("0415"), 869);
    mm.station_distances[mm.get_station_by_id("0416")].emplace_back(mm.get_station_by_id("0417"), 1011);
    mm.station_distances[mm.get_station_by_id("0417")].emplace_back(mm.get_station_by_id("0416"), 1011);
    mm.station_distances[mm.get_station_by_id("0417")].emplace_back(mm.get_station_by_id("0418"), 815);
    mm.station_distances[mm.get_station_by_id("0418")].emplace_back(mm.get_station_by_id("0417"), 815);
    mm.station_distances[mm.get_station_by_id("0418")].emplace_back(mm.get_station_by_id("0419"), 1152);
    mm.station_distances[mm.get_station_by_id("0419")].emplace_back(mm.get_station_by_id("0418"), 1152);
    mm.station_distances[mm.get_station_by_id("0419")].emplace_back(mm.get_station_by_id("0420"), 1200);
    mm.station_distances[mm.get_station_by_id("0420")].emplace_back(mm.get_station_by_id("0419"), 1200);
    mm.station_distances[mm.get_station_by_id("0420")].emplace_back(mm.get_station_by_id("0421"), 1643);
    mm.station_distances[mm.get_station_by_id("0421")].emplace_back(mm.get_station_by_id("0420"), 1643);
    mm.station_distances[mm.get_station_by_id("0421")].emplace_back(mm.get_station_by_id("0422"), 1480);
    mm.station_distances[mm.get_station_by_id("0422")].emplace_back(mm.get_station_by_id("0421"), 1480);
    mm.station_distances[mm.get_station_by_id("0422")].emplace_back(mm.get_station_by_id("0423"), 827);
    mm.station_distances[mm.get_station_by_id("0423")].emplace_back(mm.get_station_by_id("0422"), 827);
    mm.station_distances[mm.get_station_by_id("0423")].emplace_back(mm.get_station_by_id("0424"), 989);
    mm.station_distances[mm.get_station_by_id("0424")].emplace_back(mm.get_station_by_id("0423"), 989);

    mm.station_distances[mm.get_station_by_id("0501")].emplace_back(mm.get_station_by_id("0502"), 939);
    mm.station_distances[mm.get_station_by_id("0502")].emplace_back(mm.get_station_by_id("0501"), 939);
    mm.station_distances[mm.get_station_by_id("0502")].emplace_back(mm.get_station_by_id("0503"), 965);
    mm.station_distances[mm.get_station_by_id("0503")].emplace_back(mm.get_station_by_id("0502"), 965);
    mm.station_distances[mm.get_station_by_id("0503")].emplace_back(mm.get_station_by_id("0504"), 1544);
    mm.station_distances[mm.get_station_by_id("0504")].emplace_back(mm.get_station_by_id("0503"), 1544);
    mm.station_distances[mm.get_station_by_id("0504")].emplace_back(mm.get_station_by_id("0505"), 1305);
    mm.station_distances[mm.get_station_by_id("0505")].emplace_back(mm.get_station_by_id("0504"), 1305);
    mm.station_distances[mm.get_station_by_id("0505")].emplace_back(mm.get_station_by_id("0506"), 1286);
    mm.station_distances[mm.get_station_by_id("0506")].emplace_back(mm.get_station_by_id("0505"), 1286);
    mm.station_distances[mm.get_station_by_id("0506")].emplace_back(mm.get_station_by_id("0507"), 3000);
    mm.station_distances[mm.get_station_by_id("0507")].emplace_back(mm.get_station_by_id("0506"), 3000);
    mm.station_distances[mm.get_station_by_id("0507")].emplace_back(mm.get_station_by_id("0508"), 1838);
    mm.station_distances[mm.get_station_by_id("0508")].emplace_back(mm.get_station_by_id("0507"), 1838);
    mm.station_distances[mm.get_station_by_id("0508")].emplace_back(mm.get_station_by_id("0509"), 1122);
    mm.station_distances[mm.get_station_by_id("0509")].emplace_back(mm.get_station_by_id("0508"), 1122);
    mm.station_distances[mm.get_station_by_id("0509")].emplace_back(mm.get_station_by_id("0510"), 1025);
    mm.station_distances[mm.get_station_by_id("0510")].emplace_back(mm.get_station_by_id("0509"), 1025);
    mm.station_distances[mm.get_station_by_id("0510")].emplace_back(mm.get_station_by_id("0511"), 1059);
    mm.station_distances[mm.get_station_by_id("0511")].emplace_back(mm.get_station_by_id("0510"), 1059);
    mm.station_distances[mm.get_station_by_id("0511")].emplace_back(mm.get_station_by_id("0512"), 1151);
    mm.station_distances[mm.get_station_by_id("0512")].emplace_back(mm.get_station_by_id("0511"), 1151);
    mm.station_distances[mm.get_station_by_id("0512")].emplace_back(mm.get_station_by_id("0513"), 866);
    mm.station_distances[mm.get_station_by_id("0513")].emplace_back(mm.get_station_by_id("0512"), 866);
    mm.station_distances[mm.get_station_by_id("0513")].emplace_back(mm.get_station_by_id("0514"), 791);
    mm.station_distances[mm.get_station_by_id("0514")].emplace_back(mm.get_station_by_id("0513"), 791);
    mm.station_distances[mm.get_station_by_id("0514")].emplace_back(mm.get_station_by_id("0515"), 1016);
    mm.station_distances[mm.get_station_by_id("0515")].emplace_back(mm.get_station_by_id("0514"), 1016);
    mm.station_distances[mm.get_station_by_id("0515")].emplace_back(mm.get_station_by_id("0516"), 848);
    mm.station_distances[mm.get_station_by_id("0516")].emplace_back(mm.get_station_by_id("0515"), 848);
    mm.station_distances[mm.get_station_by_id("0516")].emplace_back(mm.get_station_by_id("0517"), 945);
    mm.station_distances[mm.get_station_by_id("0517")].emplace_back(mm.get_station_by_id("0516"), 945);
    mm.station_distances[mm.get_station_by_id("0517")].emplace_back(mm.get_station_by_id("0518"), 821);
    mm.station_distances[mm.get_station_by_id("0518")].emplace_back(mm.get_station_by_id("0517"), 821);
    mm.station_distances[mm.get_station_by_id("0518")].emplace_back(mm.get_station_by_id("0519"), 876);
    mm.station_distances[mm.get_station_by_id("0519")].emplace_back(mm.get_station_by_id("0518"), 876);
    mm.station_distances[mm.get_station_by_id("0519")].emplace_back(mm.get_station_by_id("0520"), 1183);
    mm.station_distances[mm.get_station_by_id("0520")].emplace_back(mm.get_station_by_id("0519"), 1183);
    mm.station_distances[mm.get_station_by_id("0520")].emplace_back(mm.get_station_by_id("0521"), 1900);
    mm.station_distances[mm.get_station_by_id("0521")].emplace_back(mm.get_station_by_id("0520"), 1900);
    mm.station_distances[mm.get_station_by_id("0521")].emplace_back(mm.get_station_by_id("0522"), 905);
    mm.station_distances[mm.get_station_by_id("0522")].emplace_back(mm.get_station_by_id("0521"), 905);
    mm.station_distances[mm.get_station_by_id("0522")].emplace_back(mm.get_station_by_id("0523"), 1670);
    mm.station_distances[mm.get_station_by_id("0523")].emplace_back(mm.get_station_by_id("0522"), 1670);

    mm.station_distances[mm.get_station_by_id("0601")].emplace_back(mm.get_station_by_id("0602"), 1508);
    mm.station_distances[mm.get_station_by_id("0602")].emplace_back(mm.get_station_by_id("0601"), 1508);
    mm.station_distances[mm.get_station_by_id("0602")].emplace_back(mm.get_station_by_id("0603"), 1431);
    mm.station_distances[mm.get_station_by_id("0603")].emplace_back(mm.get_station_by_id("0602"), 1431);
    mm.station_distances[mm.get_station_by_id("0603")].emplace_back(mm.get_station_by_id("0604"), 1166);
    mm.station_distances[mm.get_station_by_id("0604")].emplace_back(mm.get_station_by_id("0603"), 1166);
    mm.station_distances[mm.get_station_by_id("0604")].emplace_back(mm.get_station_by_id("0605"), 1664);
    mm.station_distances[mm.get_station_by_id("0605")].emplace_back(mm.get_station_by_id("0604"), 1664);
    mm.station_distances[mm.get_station_by_id("0605")].emplace_back(mm.get_station_by_id("0606"), 887);
    mm.station_distances[mm.get_station_by_id("0606")].emplace_back(mm.get_station_by_id("0605"), 887);
    mm.station_distances[mm.get_station_by_id("0606")].emplace_back(mm.get_station_by_id("0607"), 1443);
    mm.station_distances[mm.get_station_by_id("0607")].emplace_back(mm.get_station_by_id("0606"), 1443);
    mm.station_distances[mm.get_station_by_id("0607")].emplace_back(mm.get_station_by_id("0608"), 1321);
    mm.station_distances[mm.get_station_by_id("0608")].emplace_back(mm.get_station_by_id("0607"), 1321);
    mm.station_distances[mm.get_station_by_id("0608")].emplace_back(mm.get_station_by_id("0609"), 1349);
    mm.station_distances[mm.get_station_by_id("0609")].emplace_back(mm.get_station_by_id("0608"), 1349);
    mm.station_distances[mm.get_station_by_id("0609")].emplace_back(mm.get_station_by_id("0610"), 1937);
    mm.station_distances[mm.get_station_by_id("0610")].emplace_back(mm.get_station_by_id("0609"), 1937);
    mm.station_distances[mm.get_station_by_id("0610")].emplace_back(mm.get_station_by_id("0611"), 1399);
    mm.station_distances[mm.get_station_by_id("0611")].emplace_back(mm.get_station_by_id("0610"), 1399);
    mm.station_distances[mm.get_station_by_id("0611")].emplace_back(mm.get_station_by_id("0612"), 1668);
    mm.station_distances[mm.get_station_by_id("0612")].emplace_back(mm.get_station_by_id("0611"), 1668);
    mm.station_distances[mm.get_station_by_id("0612")].emplace_back(mm.get_station_by_id("0613"), 845);
    mm.station_distances[mm.get_station_by_id("0613")].emplace_back(mm.get_station_by_id("0612"), 845);
    mm.station_distances[mm.get_station_by_id("0613")].emplace_back(mm.get_station_by_id("0614"), 1450);
    mm.station_distances[mm.get_station_by_id("0614")].emplace_back(mm.get_station_by_id("0613"), 1450);
    mm.station_distances[mm.get_station_by_id("0614")].emplace_back(mm.get_station_by_id("0615"), 2036);
    mm.station_distances[mm.get_station_by_id("0615")].emplace_back(mm.get_station_by_id("0614"), 2036);
    mm.station_distances[mm.get_station_by_id("0615")].emplace_back(mm.get_station_by_id("0616"), 1282);
    mm.station_distances[mm.get_station_by_id("0616")].emplace_back(mm.get_station_by_id("0615"), 1282);
    mm.station_distances[mm.get_station_by_id("0616")].emplace_back(mm.get_station_by_id("0617"), 3999);
    mm.station_distances[mm.get_station_by_id("0617")].emplace_back(mm.get_station_by_id("0616"), 3999);
    mm.station_distances[mm.get_station_by_id("0617")].emplace_back(mm.get_station_by_id("0618"), 1238);
    mm.station_distances[mm.get_station_by_id("0618")].emplace_back(mm.get_station_by_id("0617"), 1238);
    mm.station_distances[mm.get_station_by_id("0618")].emplace_back(mm.get_station_by_id("0619"), 1854);
    mm.station_distances[mm.get_station_by_id("0619")].emplace_back(mm.get_station_by_id("0618"), 1854);
    mm.station_distances[mm.get_station_by_id("0619")].emplace_back(mm.get_station_by_id("0620"), 1405);
    mm.station_distances[mm.get_station_by_id("0620")].emplace_back(mm.get_station_by_id("0619"), 1405);
    mm.station_distances[mm.get_station_by_id("0620")].emplace_back(mm.get_station_by_id("0621"), 2115);
    mm.station_distances[mm.get_station_by_id("0621")].emplace_back(mm.get_station_by_id("0620"), 2115);
    mm.station_distances[mm.get_station_by_id("0621")].emplace_back(mm.get_station_by_id("0622"), 2557);
    mm.station_distances[mm.get_station_by_id("0622")].emplace_back(mm.get_station_by_id("0621"), 2557);
    mm.station_distances[mm.get_station_by_id("0622")].emplace_back(mm.get_station_by_id("0623"), 1468);
    mm.station_distances[mm.get_station_by_id("0623")].emplace_back(mm.get_station_by_id("0622"), 1468);
    mm.station_distances[mm.get_station_by_id("0623")].emplace_back(mm.get_station_by_id("0624"), 1543);
    mm.station_distances[mm.get_station_by_id("0624")].emplace_back(mm.get_station_by_id("0623"), 1543);
    mm.station_distances[mm.get_station_by_id("0624")].emplace_back(mm.get_station_by_id("0625"), 1599);
    mm.station_distances[mm.get_station_by_id("0625")].emplace_back(mm.get_station_by_id("0624"), 1599);
    mm.station_distances[mm.get_station_by_id("0625")].emplace_back(mm.get_station_by_id("0626"), 929);
    mm.station_distances[mm.get_station_by_id("0626")].emplace_back(mm.get_station_by_id("0625"), 929);
    mm.station_distances[mm.get_station_by_id("0626")].emplace_back(mm.get_station_by_id("0627"), 1346);
    mm.station_distances[mm.get_station_by_id("0627")].emplace_back(mm.get_station_by_id("0626"), 1346);
    mm.station_distances[mm.get_station_by_id("0627")].emplace_back(mm.get_station_by_id("0628"), 1194);
    mm.station_distances[mm.get_station_by_id("0628")].emplace_back(mm.get_station_by_id("0627"), 1194);

    mm.station_distances[mm.get_station_by_id("0701")].emplace_back(mm.get_station_by_id("0702"), 935);
    mm.station_distances[mm.get_station_by_id("0702")].emplace_back(mm.get_station_by_id("0701"), 935);
    mm.station_distances[mm.get_station_by_id("0702")].emplace_back(mm.get_station_by_id("0703"), 734);
    mm.station_distances[mm.get_station_by_id("0703")].emplace_back(mm.get_station_by_id("0702"), 734);
    mm.station_distances[mm.get_station_by_id("0703")].emplace_back(mm.get_station_by_id("0704"), 1874);
    mm.station_distances[mm.get_station_by_id("0704")].emplace_back(mm.get_station_by_id("0703"), 1874);
    mm.station_distances[mm.get_station_by_id("0704")].emplace_back(mm.get_station_by_id("0705"), 1374);
    mm.station_distances[mm.get_station_by_id("0705")].emplace_back(mm.get_station_by_id("0704"), 1374);
    mm.station_distances[mm.get_station_by_id("0705")].emplace_back(mm.get_station_by_id("0706"), 885);
    mm.station_distances[mm.get_station_by_id("0706")].emplace_back(mm.get_station_by_id("0705"), 885);
    mm.station_distances[mm.get_station_by_id("0706")].emplace_back(mm.get_station_by_id("0707"), 1205);
    mm.station_distances[mm.get_station_by_id("0707")].emplace_back(mm.get_station_by_id("0706"), 1205);
    mm.station_distances[mm.get_station_by_id("0707")].emplace_back(mm.get_station_by_id("0708"), 869);
    mm.station_distances[mm.get_station_by_id("0708")].emplace_back(mm.get_station_by_id("0707"), 869);
    mm.station_distances[mm.get_station_by_id("0708")].emplace_back(mm.get_station_by_id("0709"), 1016);
    mm.station_distances[mm.get_station_by_id("0709")].emplace_back(mm.get_station_by_id("0708"), 1016);
    mm.station_distances[mm.get_station_by_id("0709")].emplace_back(mm.get_station_by_id("0710"), 1138);
    mm.station_distances[mm.get_station_by_id("0710")].emplace_back(mm.get_station_by_id("0709"), 1138);
    mm.station_distances[mm.get_station_by_id("0710")].emplace_back(mm.get_station_by_id("0711"), 1332);
    mm.station_distances[mm.get_station_by_id("0711")].emplace_back(mm.get_station_by_id("0710"), 1332);
    mm.station_distances[mm.get_station_by_id("0711")].emplace_back(mm.get_station_by_id("0712"), 1241);
    mm.station_distances[mm.get_station_by_id("0712")].emplace_back(mm.get_station_by_id("0711"), 1241);
    mm.station_distances[mm.get_station_by_id("0712")].emplace_back(mm.get_station_by_id("0713"), 1311);
    mm.station_distances[mm.get_station_by_id("0713")].emplace_back(mm.get_station_by_id("0712"), 1311);
    mm.station_distances[mm.get_station_by_id("0713")].emplace_back(mm.get_station_by_id("0714"), 781);
    mm.station_distances[mm.get_station_by_id("0714")].emplace_back(mm.get_station_by_id("0713"), 781);
    mm.station_distances[mm.get_station_by_id("0714")].emplace_back(mm.get_station_by_id("0715"), 865);
    mm.station_distances[mm.get_station_by_id("0715")].emplace_back(mm.get_station_by_id("0714"), 865);
    mm.station_distances[mm.get_station_by_id("0715")].emplace_back(mm.get_station_by_id("0716"), 903);
    mm.station_distances[mm.get_station_by_id("0716")].emplace_back(mm.get_station_by_id("0715"), 903);
    mm.station_distances[mm.get_station_by_id("0716")].emplace_back(mm.get_station_by_id("0717"), 1464);
    mm.station_distances[mm.get_station_by_id("0717")].emplace_back(mm.get_station_by_id("0716"), 1464);
    mm.station_distances[mm.get_station_by_id("0717")].emplace_back(mm.get_station_by_id("0718"), 906);
    mm.station_distances[mm.get_station_by_id("0718")].emplace_back(mm.get_station_by_id("0717"), 906);
    mm.station_distances[mm.get_station_by_id("0718")].emplace_back(mm.get_station_by_id("0719"), 1679);
    mm.station_distances[mm.get_station_by_id("0719")].emplace_back(mm.get_station_by_id("0718"), 1679);
    mm.station_distances[mm.get_station_by_id("0719")].emplace_back(mm.get_station_by_id("0720"), 1304);
    mm.station_distances[mm.get_station_by_id("0720")].emplace_back(mm.get_station_by_id("0719"), 1304);
    mm.station_distances[mm.get_station_by_id("0720")].emplace_back(mm.get_station_by_id("0721"), 1021);
    mm.station_distances[mm.get_station_by_id("0721")].emplace_back(mm.get_station_by_id("0720"), 1021);

    mm.station_distances[mm.get_station_by_id("0801")].emplace_back(mm.get_station_by_id("0802"), 2318);
    mm.station_distances[mm.get_station_by_id("0802")].emplace_back(mm.get_station_by_id("0801"), 2318);
    mm.station_distances[mm.get_station_by_id("0802")].emplace_back(mm.get_station_by_id("0803"), 1985);
    mm.station_distances[mm.get_station_by_id("0803")].emplace_back(mm.get_station_by_id("0802"), 1985);
    mm.station_distances[mm.get_station_by_id("0803")].emplace_back(mm.get_station_by_id("0804"), 2056);
    mm.station_distances[mm.get_station_by_id("0804")].emplace_back(mm.get_station_by_id("0803"), 2056);
    mm.station_distances[mm.get_station_by_id("0804")].emplace_back(mm.get_station_by_id("0805"), 1114);
    mm.station_distances[mm.get_station_by_id("0805")].emplace_back(mm.get_station_by_id("0804"), 1114);
    mm.station_distances[mm.get_station_by_id("0805")].emplace_back(mm.get_station_by_id("0806"), 1894);
    mm.station_distances[mm.get_station_by_id("0806")].emplace_back(mm.get_station_by_id("0805"), 1894);
    mm.station_distances[mm.get_station_by_id("0806")].emplace_back(mm.get_station_by_id("0807"), 1543);
    mm.station_distances[mm.get_station_by_id("0807")].emplace_back(mm.get_station_by_id("0806"), 1543);
    mm.station_distances[mm.get_station_by_id("0807")].emplace_back(mm.get_station_by_id("0808"), 1041);
    mm.station_distances[mm.get_station_by_id("0808")].emplace_back(mm.get_station_by_id("0807"), 1041);
    mm.station_distances[mm.get_station_by_id("0808")].emplace_back(mm.get_station_by_id("0809"), 2553);
    mm.station_distances[mm.get_station_by_id("0809")].emplace_back(mm.get_station_by_id("0808"), 2553);
    mm.station_distances[mm.get_station_by_id("0809")].emplace_back(mm.get_station_by_id("0810"), 2555);
    mm.station_distances[mm.get_station_by_id("0810")].emplace_back(mm.get_station_by_id("0809"), 2555);
    mm.station_distances[mm.get_station_by_id("0810")].emplace_back(mm.get_station_by_id("0811"), 1016);
    mm.station_distances[mm.get_station_by_id("0811")].emplace_back(mm.get_station_by_id("0810"), 1016);
    mm.station_distances[mm.get_station_by_id("0811")].emplace_back(mm.get_station_by_id("0812"), 1667);
    mm.station_distances[mm.get_station_by_id("0812")].emplace_back(mm.get_station_by_id("0811"), 1667);
    mm.station_distances[mm.get_station_by_id("0812")].emplace_back(mm.get_station_by_id("0813"), 900);
    mm.station_distances[mm.get_station_by_id("0813")].emplace_back(mm.get_station_by_id("0812"), 900);
    mm.station_distances[mm.get_station_by_id("0813")].emplace_back(mm.get_station_by_id("0814"), 1018);
    mm.station_distances[mm.get_station_by_id("0814")].emplace_back(mm.get_station_by_id("0813"), 1018);
    mm.station_distances[mm.get_station_by_id("0814")].emplace_back(mm.get_station_by_id("0815"), 1274);
    mm.station_distances[mm.get_station_by_id("0815")].emplace_back(mm.get_station_by_id("0814"), 1274);
    mm.station_distances[mm.get_station_by_id("0815")].emplace_back(mm.get_station_by_id("0816"), 1083);
    mm.station_distances[mm.get_station_by_id("0816")].emplace_back(mm.get_station_by_id("0815"), 1083);
    mm.station_distances[mm.get_station_by_id("0816")].emplace_back(mm.get_station_by_id("0817"), 1188);
    mm.station_distances[mm.get_station_by_id("0817")].emplace_back(mm.get_station_by_id("0816"), 1188);
    mm.station_distances[mm.get_station_by_id("0817")].emplace_back(mm.get_station_by_id("0818"), 902);
    mm.station_distances[mm.get_station_by_id("0818")].emplace_back(mm.get_station_by_id("0817"), 902);

    mm.station_distances[mm.get_station_by_id("0901")].emplace_back(mm.get_station_by_id("0902"), 1096);
    mm.station_distances[mm.get_station_by_id("0902")].emplace_back(mm.get_station_by_id("0901"), 1096);
    mm.station_distances[mm.get_station_by_id("0902")].emplace_back(mm.get_station_by_id("0903"), 943);
    mm.station_distances[mm.get_station_by_id("0903")].emplace_back(mm.get_station_by_id("0902"), 943);
    mm.station_distances[mm.get_station_by_id("0903")].emplace_back(mm.get_station_by_id("0904"), 1912);
    mm.station_distances[mm.get_station_by_id("0904")].emplace_back(mm.get_station_by_id("0903"), 1912);
    mm.station_distances[mm.get_station_by_id("0904")].emplace_back(mm.get_station_by_id("0905"), 1398);
    mm.station_distances[mm.get_station_by_id("0905")].emplace_back(mm.get_station_by_id("0904"), 1398);
    mm.station_distances[mm.get_station_by_id("0905")].emplace_back(mm.get_station_by_id("0906"), 1170);
    mm.station_distances[mm.get_station_by_id("0906")].emplace_back(mm.get_station_by_id("0905"), 1170);
    mm.station_distances[mm.get_station_by_id("0906")].emplace_back(mm.get_station_by_id("0907"), 1309);
    mm.station_distances[mm.get_station_by_id("0907")].emplace_back(mm.get_station_by_id("0906"), 1309);
    mm.station_distances[mm.get_station_by_id("0907")].emplace_back(mm.get_station_by_id("0908"), 1778);
    mm.station_distances[mm.get_station_by_id("0908")].emplace_back(mm.get_station_by_id("0907"), 1778);
    mm.station_distances[mm.get_station_by_id("0908")].emplace_back(mm.get_station_by_id("0909"), 1325);
    mm.station_distances[mm.get_station_by_id("0909")].emplace_back(mm.get_station_by_id("0908"), 1325);
    mm.station_distances[mm.get_station_by_id("0909")].emplace_back(mm.get_station_by_id("0910"), 1585);
    mm.station_distances[mm.get_station_by_id("0910")].emplace_back(mm.get_station_by_id("0909"), 1585);
    mm.station_distances[mm.get_station_by_id("0910")].emplace_back(mm.get_station_by_id("0911"), 980);
    mm.station_distances[mm.get_station_by_id("0911")].emplace_back(mm.get_station_by_id("0910"), 980);
    mm.station_distances[mm.get_station_by_id("0911")].emplace_back(mm.get_station_by_id("0912"), 788);
    mm.station_distances[mm.get_station_by_id("0912")].emplace_back(mm.get_station_by_id("0911"), 788);
    mm.station_distances[mm.get_station_by_id("0912")].emplace_back(mm.get_station_by_id("0913"), 1347);
    mm.station_distances[mm.get_station_by_id("0913")].emplace_back(mm.get_station_by_id("0912"), 1347);

    mm.station_distances[mm.get_station_by_id("1001")].emplace_back(mm.get_station_by_id("1002"), 1110);
    mm.station_distances[mm.get_station_by_id("1002")].emplace_back(mm.get_station_by_id("1001"), 1110);
    mm.station_distances[mm.get_station_by_id("1002")].emplace_back(mm.get_station_by_id("1003"), 950);
    mm.station_distances[mm.get_station_by_id("1003")].emplace_back(mm.get_station_by_id("1002"), 950);
    mm.station_distances[mm.get_station_by_id("1003")].emplace_back(mm.get_station_by_id("1004"), 975);
    mm.station_distances[mm.get_station_by_id("1004")].emplace_back(mm.get_station_by_id("1003"), 975);
    mm.station_distances[mm.get_station_by_id("1004")].emplace_back(mm.get_station_by_id("1005"), 1058);
    mm.station_distances[mm.get_station_by_id("1005")].emplace_back(mm.get_station_by_id("1004"), 1058);
    mm.station_distances[mm.get_station_by_id("1005")].emplace_back(mm.get_station_by_id("1006"), 1101);
    mm.station_distances[mm.get_station_by_id("1006")].emplace_back(mm.get_station_by_id("1005"), 1101);
    mm.station_distances[mm.get_station_by_id("1006")].emplace_back(mm.get_station_by_id("1007"), 1330);
    mm.station_distances[mm.get_station_by_id("1007")].emplace_back(mm.get_station_by_id("1006"), 1330);
    mm.station_distances[mm.get_station_by_id("1007")].emplace_back(mm.get_station_by_id("1008"), 973);
    mm.station_distances[mm.get_station_by_id("1008")].emplace_back(mm.get_station_by_id("1007"), 973);
    mm.station_distances[mm.get_station_by_id("1008")].emplace_back(mm.get_station_by_id("1009"), 1100);
    mm.station_distances[mm.get_station_by_id("1009")].emplace_back(mm.get_station_by_id("1008"), 1100);
    mm.station_distances[mm.get_station_by_id("1009")].emplace_back(mm.get_station_by_id("1010"), 1020);
    mm.station_distances[mm.get_station_by_id("1010")].emplace_back(mm.get_station_by_id("1009"), 1020);
    mm.station_distances[mm.get_station_by_id("1010")].emplace_back(mm.get_station_by_id("1011"), 982);
    mm.station_distances[mm.get_station_by_id("1011")].emplace_back(mm.get_station_by_id("1010"), 982);
    mm.station_distances[mm.get_station_by_id("1011")].emplace_back(mm.get_station_by_id("1012"), 1712);
    mm.station_distances[mm.get_station_by_id("1012")].emplace_back(mm.get_station_by_id("1011"), 1712);
    mm.station_distances[mm.get_station_by_id("1012")].emplace_back(mm.get_station_by_id("1013"), 1003);
    mm.station_distances[mm.get_station_by_id("1013")].emplace_back(mm.get_station_by_id("1012"), 1003);
    mm.station_distances[mm.get_station_by_id("1013")].emplace_back(mm.get_station_by_id("1014"), 1759);
    mm.station_distances[mm.get_station_by_id("1014")].emplace_back(mm.get_station_by_id("1013"), 1759);
    mm.station_distances[mm.get_station_by_id("1014")].emplace_back(mm.get_station_by_id("1015"), 1506);
    mm.station_distances[mm.get_station_by_id("1015")].emplace_back(mm.get_station_by_id("1014"), 1506);
    mm.station_distances[mm.get_station_by_id("1015")].emplace_back(mm.get_station_by_id("1016"), 914);
    mm.station_distances[mm.get_station_by_id("1016")].emplace_back(mm.get_station_by_id("1015"), 914);
    mm.station_distances[mm.get_station_by_id("1016")].emplace_back(mm.get_station_by_id("1017"), 853);
    mm.station_distances[mm.get_station_by_id("1017")].emplace_back(mm.get_station_by_id("1016"), 853);
    mm.station_distances[mm.get_station_by_id("1017")].emplace_back(mm.get_station_by_id("1018"), 1149);
    mm.station_distances[mm.get_station_by_id("1018")].emplace_back(mm.get_station_by_id("1017"), 1149);
    mm.station_distances[mm.get_station_by_id("1018")].emplace_back(mm.get_station_by_id("1019"), 734);
    mm.station_distances[mm.get_station_by_id("1019")].emplace_back(mm.get_station_by_id("1018"), 734);
    mm.station_distances[mm.get_station_by_id("1019")].emplace_back(mm.get_station_by_id("1020"), 835);
    mm.station_distances[mm.get_station_by_id("1020")].emplace_back(mm.get_station_by_id("1019"), 835);
    mm.station_distances[mm.get_station_by_id("1020")].emplace_back(mm.get_station_by_id("1021"), 1759);
    mm.station_distances[mm.get_station_by_id("1021")].emplace_back(mm.get_station_by_id("1020"), 1759);
    mm.station_distances[mm.get_station_by_id("1021")].emplace_back(mm.get_station_by_id("1022"), 1006);
    mm.station_distances[mm.get_station_by_id("1022")].emplace_back(mm.get_station_by_id("1021"), 1006);
    mm.station_distances[mm.get_station_by_id("1022")].emplace_back(mm.get_station_by_id("1023"), 1021);
    mm.station_distances[mm.get_station_by_id("1023")].emplace_back(mm.get_station_by_id("1022"), 1021);
    mm.station_distances[mm.get_station_by_id("1023")].emplace_back(mm.get_station_by_id("1024"), 1097);
    mm.station_distances[mm.get_station_by_id("1024")].emplace_back(mm.get_station_by_id("1023"), 1097);
    mm.station_distances[mm.get_station_by_id("1024")].emplace_back(mm.get_station_by_id("1025"), 1804);
    mm.station_distances[mm.get_station_by_id("1025")].emplace_back(mm.get_station_by_id("1024"), 1804);
    mm.station_distances[mm.get_station_by_id("1025")].emplace_back(mm.get_station_by_id("1026"), 1058);
    mm.station_distances[mm.get_station_by_id("1026")].emplace_back(mm.get_station_by_id("1025"), 1058);
    mm.station_distances[mm.get_station_by_id("1026")].emplace_back(mm.get_station_by_id("1027"), 1677);
    mm.station_distances[mm.get_station_by_id("1027")].emplace_back(mm.get_station_by_id("1026"), 1677);
    mm.station_distances[mm.get_station_by_id("1027")].emplace_back(mm.get_station_by_id("1028"), 1269);
    mm.station_distances[mm.get_station_by_id("1028")].emplace_back(mm.get_station_by_id("1027"), 1269);
    mm.station_distances[mm.get_station_by_id("1028")].emplace_back(mm.get_station_by_id("1029"), 1244);
    mm.station_distances[mm.get_station_by_id("1029")].emplace_back(mm.get_station_by_id("1028"), 1244);
    mm.station_distances[mm.get_station_by_id("1029")].emplace_back(mm.get_station_by_id("1030"), 1130);
    mm.station_distances[mm.get_station_by_id("1030")].emplace_back(mm.get_station_by_id("1029"), 1130);
    mm.station_distances[mm.get_station_by_id("1030")].emplace_back(mm.get_station_by_id("1031"), 1254);
    mm.station_distances[mm.get_station_by_id("1031")].emplace_back(mm.get_station_by_id("1030"), 1254);
    mm.station_distances[mm.get_station_by_id("1031")].emplace_back(mm.get_station_by_id("1032"), 1688);
    mm.station_distances[mm.get_station_by_id("1032")].emplace_back(mm.get_station_by_id("1031"), 1688);
    mm.station_distances[mm.get_station_by_id("1032")].emplace_back(mm.get_station_by_id("1033"), 1547);
    mm.station_distances[mm.get_station_by_id("1033")].emplace_back(mm.get_station_by_id("1032"), 1547);
    mm.station_distances[mm.get_station_by_id("1033")].emplace_back(mm.get_station_by_id("1034"), 1143);
    mm.station_distances[mm.get_station_by_id("1034")].emplace_back(mm.get_station_by_id("1033"), 1143);
    mm.station_distances[mm.get_station_by_id("1034")].emplace_back(mm.get_station_by_id("1035"), 1717);
    mm.station_distances[mm.get_station_by_id("1035")].emplace_back(mm.get_station_by_id("1034"), 1717);
    mm.station_distances[mm.get_station_by_id("1035")].emplace_back(mm.get_station_by_id("1036"), 954);
    mm.station_distances[mm.get_station_by_id("1036")].emplace_back(mm.get_station_by_id("1035"), 954);
    mm.station_distances[mm.get_station_by_id("1036")].emplace_back(mm.get_station_by_id("1037"), 749);
    mm.station_distances[mm.get_station_by_id("1037")].emplace_back(mm.get_station_by_id("1036"), 749);
    mm.station_distances[mm.get_station_by_id("1037")].emplace_back(mm.get_station_by_id("1038"), 1584);
    mm.station_distances[mm.get_station_by_id("1038")].emplace_back(mm.get_station_by_id("1037"), 1584);
    mm.station_distances[mm.get_station_by_id("1038")].emplace_back(mm.get_station_by_id("1039"), 2392);
    mm.station_distances[mm.get_station_by_id("1039")].emplace_back(mm.get_station_by_id("1038"), 2392);
    mm.station_distances[mm.get_station_by_id("1039")].emplace_back(mm.get_station_by_id("1040"), 1016);
    mm.station_distances[mm.get_station_by_id("1040")].emplace_back(mm.get_station_by_id("1039"), 1016);
    mm.station_distances[mm.get_station_by_id("1040")].emplace_back(mm.get_station_by_id("1041"), 2386);
    mm.station_distances[mm.get_station_by_id("1041")].emplace_back(mm.get_station_by_id("1040"), 2386);
    mm.station_distances[mm.get_station_by_id("1041")].emplace_back(mm.get_station_by_id("1042"), 1214);
    mm.station_distances[mm.get_station_by_id("1042")].emplace_back(mm.get_station_by_id("1041"), 1214);
    mm.station_distances[mm.get_station_by_id("1042")].emplace_back(mm.get_station_by_id("1043"), 1590);
    mm.station_distances[mm.get_station_by_id("1043")].emplace_back(mm.get_station_by_id("1042"), 1590);
    mm.station_distances[mm.get_station_by_id("1043")].emplace_back(mm.get_station_by_id("1044"), 1205);
    mm.station_distances[mm.get_station_by_id("1044")].emplace_back(mm.get_station_by_id("1043"), 1205);
    mm.station_distances[mm.get_station_by_id("1044")].emplace_back(mm.get_station_by_id("1045"), 961);
    mm.station_distances[mm.get_station_by_id("1045")].emplace_back(mm.get_station_by_id("1044"), 961);
    mm.station_distances[mm.get_station_by_id("1045")].emplace_back(mm.get_station_by_id("1001"), 1495);
    mm.station_distances[mm.get_station_by_id("1001")].emplace_back(mm.get_station_by_id("1045"), 1495);

    mm.station_distances[mm.get_station_by_id("1301")].emplace_back(mm.get_station_by_id("1302"), 2839);
    mm.station_distances[mm.get_station_by_id("1302")].emplace_back(mm.get_station_by_id("1301"), 2839);
    mm.station_distances[mm.get_station_by_id("1302")].emplace_back(mm.get_station_by_id("1303"), 1206);
    mm.station_distances[mm.get_station_by_id("1303")].emplace_back(mm.get_station_by_id("1302"), 1206);
    mm.station_distances[mm.get_station_by_id("1303")].emplace_back(mm.get_station_by_id("1304"), 1829);
    mm.station_distances[mm.get_station_by_id("1304")].emplace_back(mm.get_station_by_id("1303"), 1829);
    mm.station_distances[mm.get_station_by_id("1304")].emplace_back(mm.get_station_by_id("1305"), 4866);
    mm.station_distances[mm.get_station_by_id("1305")].emplace_back(mm.get_station_by_id("1304"), 4866);
    mm.station_distances[mm.get_station_by_id("1305")].emplace_back(mm.get_station_by_id("1306"), 2538);
    mm.station_distances[mm.get_station_by_id("1306")].emplace_back(mm.get_station_by_id("1305"), 2538);
    mm.station_distances[mm.get_station_by_id("1306")].emplace_back(mm.get_station_by_id("1307"), 3623);
    mm.station_distances[mm.get_station_by_id("1307")].emplace_back(mm.get_station_by_id("1306"), 3623);
    mm.station_distances[mm.get_station_by_id("1307")].emplace_back(mm.get_station_by_id("1308"), 1423);
    mm.station_distances[mm.get_station_by_id("1308")].emplace_back(mm.get_station_by_id("1307"), 1423);
    mm.station_distances[mm.get_station_by_id("1308")].emplace_back(mm.get_station_by_id("1309"), 2110);
    mm.station_distances[mm.get_station_by_id("1309")].emplace_back(mm.get_station_by_id("1308"), 2110);
    mm.station_distances[mm.get_station_by_id("1309")].emplace_back(mm.get_station_by_id("1310"), 4785);
    mm.station_distances[mm.get_station_by_id("1310")].emplace_back(mm.get_station_by_id("1309"), 4785);
    mm.station_distances[mm.get_station_by_id("1310")].emplace_back(mm.get_station_by_id("1311"), 2272);
    mm.station_distances[mm.get_station_by_id("1311")].emplace_back(mm.get_station_by_id("1310"), 2272);
    mm.station_distances[mm.get_station_by_id("1311")].emplace_back(mm.get_station_by_id("1312"), 6720);
    mm.station_distances[mm.get_station_by_id("1312")].emplace_back(mm.get_station_by_id("1311"), 6720);
    mm.station_distances[mm.get_station_by_id("1312")].emplace_back(mm.get_station_by_id("1313"), 2152);
    mm.station_distances[mm.get_station_by_id("1313")].emplace_back(mm.get_station_by_id("1312"), 2152);
    mm.station_distances[mm.get_station_by_id("1313")].emplace_back(mm.get_station_by_id("1314"), 1110);
    mm.station_distances[mm.get_station_by_id("1314")].emplace_back(mm.get_station_by_id("1313"), 1110);
    mm.station_distances[mm.get_station_by_id("1314")].emplace_back(mm.get_station_by_id("1315"), 1135);
    mm.station_distances[mm.get_station_by_id("1315")].emplace_back(mm.get_station_by_id("1314"), 1135);
    mm.station_distances[mm.get_station_by_id("1315")].emplace_back(mm.get_station_by_id("1316"), 1769);
    mm.station_distances[mm.get_station_by_id("1316")].emplace_back(mm.get_station_by_id("1315"), 1769);

    mm.station_distances[mm.get_station_by_id("14e01")].emplace_back(mm.get_station_by_id("14e02"), 887);
    mm.station_distances[mm.get_station_by_id("14e02")].emplace_back(mm.get_station_by_id("14e01"), 887);
    mm.station_distances[mm.get_station_by_id("14e02")].emplace_back(mm.get_station_by_id("14e03"), 1063);
    mm.station_distances[mm.get_station_by_id("14e03")].emplace_back(mm.get_station_by_id("14e02"), 1063);
    mm.station_distances[mm.get_station_by_id("14e03")].emplace_back(mm.get_station_by_id("14e04"), 1119);
    mm.station_distances[mm.get_station_by_id("14e04")].emplace_back(mm.get_station_by_id("14e03"), 1119);
    mm.station_distances[mm.get_station_by_id("14e04")].emplace_back(mm.get_station_by_id("14e05"), 1025);
    mm.station_distances[mm.get_station_by_id("14e05")].emplace_back(mm.get_station_by_id("14e04"), 1025);
    mm.station_distances[mm.get_station_by_id("14e05")].emplace_back(mm.get_station_by_id("14e06"), 1486);
    mm.station_distances[mm.get_station_by_id("14e06")].emplace_back(mm.get_station_by_id("14e05"), 1486);
    mm.station_distances[mm.get_station_by_id("14e06")].emplace_back(mm.get_station_by_id("14e07"), 1618);
    mm.station_distances[mm.get_station_by_id("14e07")].emplace_back(mm.get_station_by_id("14e06"), 1618);
    mm.station_distances[mm.get_station_by_id("14e07")].emplace_back(mm.get_station_by_id("14e08"), 1147);
    mm.station_distances[mm.get_station_by_id("14e08")].emplace_back(mm.get_station_by_id("14e07"), 1147);
    mm.station_distances[mm.get_station_by_id("14e08")].emplace_back(mm.get_station_by_id("14e09"), 1276);
    mm.station_distances[mm.get_station_by_id("14e09")].emplace_back(mm.get_station_by_id("14e08"), 1276);
    mm.station_distances[mm.get_station_by_id("14e09")].emplace_back(mm.get_station_by_id("14e10"), 1128);
    mm.station_distances[mm.get_station_by_id("14e10")].emplace_back(mm.get_station_by_id("14e09"), 1128);
    mm.station_distances[mm.get_station_by_id("14e10")].emplace_back(mm.get_station_by_id("14e11"), 897);
    mm.station_distances[mm.get_station_by_id("14e11")].emplace_back(mm.get_station_by_id("14e10"), 897);
    mm.station_distances[mm.get_station_by_id("14e11")].emplace_back(mm.get_station_by_id("14e12"), 1780);
    mm.station_distances[mm.get_station_by_id("14e12")].emplace_back(mm.get_station_by_id("14e11"), 1780);
    mm.station_distances[mm.get_station_by_id("14e12")].emplace_back(mm.get_station_by_id("14e13"), 708);
    mm.station_distances[mm.get_station_by_id("14e13")].emplace_back(mm.get_station_by_id("14e12"), 708);
    mm.station_distances[mm.get_station_by_id("14e13")].emplace_back(mm.get_station_by_id("14e14"), 894);
    mm.station_distances[mm.get_station_by_id("14e14")].emplace_back(mm.get_station_by_id("14e13"), 894);
    mm.station_distances[mm.get_station_by_id("14e14")].emplace_back(mm.get_station_by_id("14e15"), 1085);
    mm.station_distances[mm.get_station_by_id("14e15")].emplace_back(mm.get_station_by_id("14e14"), 1085);
    mm.station_distances[mm.get_station_by_id("14e15")].emplace_back(mm.get_station_by_id("14e16"), 1221);
    mm.station_distances[mm.get_station_by_id("14e16")].emplace_back(mm.get_station_by_id("14e15"), 1221);
    mm.station_distances[mm.get_station_by_id("14e16")].emplace_back(mm.get_station_by_id("14e17"), 2173);
    mm.station_distances[mm.get_station_by_id("14e17")].emplace_back(mm.get_station_by_id("14e16"), 2173);
    mm.station_distances[mm.get_station_by_id("14e17")].emplace_back(mm.get_station_by_id("14e18"), 1600);
    mm.station_distances[mm.get_station_by_id("14e18")].emplace_back(mm.get_station_by_id("14e17"), 1600);
    mm.station_distances[mm.get_station_by_id("14e18")].emplace_back(mm.get_station_by_id("14e19"), 1171);
    mm.station_distances[mm.get_station_by_id("14e19")].emplace_back(mm.get_station_by_id("14e18"), 1171);
    mm.station_distances[mm.get_station_by_id("14e19")].emplace_back(mm.get_station_by_id("14e20"), 676);
    mm.station_distances[mm.get_station_by_id("14e20")].emplace_back(mm.get_station_by_id("14e19"), 676);
    mm.station_distances[mm.get_station_by_id("14e20")].emplace_back(mm.get_station_by_id("14e21"), 1168);
    mm.station_distances[mm.get_station_by_id("14e21")].emplace_back(mm.get_station_by_id("14e20"), 1168);
    mm.station_distances[mm.get_station_by_id("14e21")].emplace_back(mm.get_station_by_id("14e22"), 903);
    mm.station_distances[mm.get_station_by_id("14e22")].emplace_back(mm.get_station_by_id("14e21"), 903);
    mm.station_distances[mm.get_station_by_id("14e22")].emplace_back(mm.get_station_by_id("14e23"), 1283);
    mm.station_distances[mm.get_station_by_id("14e23")].emplace_back(mm.get_station_by_id("14e22"), 1283);
    mm.station_distances[mm.get_station_by_id("14e23")].emplace_back(mm.get_station_by_id("14e24"), 1100);
    mm.station_distances[mm.get_station_by_id("14e24")].emplace_back(mm.get_station_by_id("14e23"), 1100);
    mm.station_distances[mm.get_station_by_id("14e24")].emplace_back(mm.get_station_by_id("14e25"), 1364);
    mm.station_distances[mm.get_station_by_id("14e25")].emplace_back(mm.get_station_by_id("14e24"), 1364);

    mm.station_distances[mm.get_station_by_id("14w01")].emplace_back(mm.get_station_by_id("14w02"), 1345);
    mm.station_distances[mm.get_station_by_id("14w02")].emplace_back(mm.get_station_by_id("14w01"), 1345);
    mm.station_distances[mm.get_station_by_id("14w02")].emplace_back(mm.get_station_by_id("14w03"), 4073);
    mm.station_distances[mm.get_station_by_id("14w03")].emplace_back(mm.get_station_by_id("14w02"), 4073);
    mm.station_distances[mm.get_station_by_id("14w03")].emplace_back(mm.get_station_by_id("14w04"), 1236);
    mm.station_distances[mm.get_station_by_id("14w04")].emplace_back(mm.get_station_by_id("14w03"), 1236);
    mm.station_distances[mm.get_station_by_id("14w04")].emplace_back(mm.get_station_by_id("14w05"), 2044);
    mm.station_distances[mm.get_station_by_id("14w05")].emplace_back(mm.get_station_by_id("14w04"), 2044);
    mm.station_distances[mm.get_station_by_id("14w05")].emplace_back(mm.get_station_by_id("14w06"), 1579);
    mm.station_distances[mm.get_station_by_id("14w06")].emplace_back(mm.get_station_by_id("14w05"), 1579);
    mm.station_distances[mm.get_station_by_id("14w06")].emplace_back(mm.get_station_by_id("14w07"), 845);
    mm.station_distances[mm.get_station_by_id("14w07")].emplace_back(mm.get_station_by_id("14w06"), 845);

    mm.station_distances[mm.get_station_by_id("1501")].emplace_back(mm.get_station_by_id("1502"), 1144);
    mm.station_distances[mm.get_station_by_id("1502")].emplace_back(mm.get_station_by_id("1501"), 1144);
    mm.station_distances[mm.get_station_by_id("1502")].emplace_back(mm.get_station_by_id("1503"), 1337);
    mm.station_distances[mm.get_station_by_id("1503")].emplace_back(mm.get_station_by_id("1502"), 1337);
    mm.station_distances[mm.get_station_by_id("1503")].emplace_back(mm.get_station_by_id("1504"), 1999);
    mm.station_distances[mm.get_station_by_id("1504")].emplace_back(mm.get_station_by_id("1503"), 1999);
    mm.station_distances[mm.get_station_by_id("1504")].emplace_back(mm.get_station_by_id("1505"), 1368);
    mm.station_distances[mm.get_station_by_id("1505")].emplace_back(mm.get_station_by_id("1504"), 1368);
    mm.station_distances[mm.get_station_by_id("1505")].emplace_back(mm.get_station_by_id("1506"), 938);
    mm.station_distances[mm.get_station_by_id("1506")].emplace_back(mm.get_station_by_id("1505"), 938);
    mm.station_distances[mm.get_station_by_id("1506")].emplace_back(mm.get_station_by_id("1507"), 1087);
    mm.station_distances[mm.get_station_by_id("1507")].emplace_back(mm.get_station_by_id("1506"), 1087);
    mm.station_distances[mm.get_station_by_id("1507")].emplace_back(mm.get_station_by_id("1508"), 2071);
    mm.station_distances[mm.get_station_by_id("1508")].emplace_back(mm.get_station_by_id("1507"), 2071);
    mm.station_distances[mm.get_station_by_id("1508")].emplace_back(mm.get_station_by_id("1509"), 1758);
    mm.station_distances[mm.get_station_by_id("1509")].emplace_back(mm.get_station_by_id("1508"), 1758);
    mm.station_distances[mm.get_station_by_id("1509")].emplace_back(mm.get_station_by_id("1510"), 1652);
    mm.station_distances[mm.get_station_by_id("1510")].emplace_back(mm.get_station_by_id("1509"), 1652);
    mm.station_distances[mm.get_station_by_id("1510")].emplace_back(mm.get_station_by_id("1511"), 2295);
    mm.station_distances[mm.get_station_by_id("1511")].emplace_back(mm.get_station_by_id("1510"), 2295);
    mm.station_distances[mm.get_station_by_id("1511")].emplace_back(mm.get_station_by_id("1512"), 2008);
    mm.station_distances[mm.get_station_by_id("1512")].emplace_back(mm.get_station_by_id("1511"), 2008);
    mm.station_distances[mm.get_station_by_id("1512")].emplace_back(mm.get_station_by_id("1513"), 3309);
    mm.station_distances[mm.get_station_by_id("1513")].emplace_back(mm.get_station_by_id("1512"), 3309);
    mm.station_distances[mm.get_station_by_id("1513")].emplace_back(mm.get_station_by_id("1514"), 3386);
    mm.station_distances[mm.get_station_by_id("1514")].emplace_back(mm.get_station_by_id("1513"), 3386);
    mm.station_distances[mm.get_station_by_id("1514")].emplace_back(mm.get_station_by_id("1515"), 1615);
    mm.station_distances[mm.get_station_by_id("1515")].emplace_back(mm.get_station_by_id("1514"), 1615);
    mm.station_distances[mm.get_station_by_id("1515")].emplace_back(mm.get_station_by_id("1516"), 3354);
    mm.station_distances[mm.get_station_by_id("1516")].emplace_back(mm.get_station_by_id("1515"), 3354);
    mm.station_distances[mm.get_station_by_id("1516")].emplace_back(mm.get_station_by_id("1517"), 4576);
    mm.station_distances[mm.get_station_by_id("1517")].emplace_back(mm.get_station_by_id("1516"), 4576);
    mm.station_distances[mm.get_station_by_id("1517")].emplace_back(mm.get_station_by_id("1518"), 2712);
    mm.station_distances[mm.get_station_by_id("1518")].emplace_back(mm.get_station_by_id("1517"), 2712);
    mm.station_distances[mm.get_station_by_id("1518")].emplace_back(mm.get_station_by_id("1519"), 1331);
    mm.station_distances[mm.get_station_by_id("1519")].emplace_back(mm.get_station_by_id("1518"), 1331);
    mm.station_distances[mm.get_station_by_id("1519")].emplace_back(mm.get_station_by_id("1520"), 2441);
    mm.station_distances[mm.get_station_by_id("1520")].emplace_back(mm.get_station_by_id("1519"), 2441);

    mm.station_distances[mm.get_station_by_id("air01")].emplace_back(mm.get_station_by_id("air02"), 2999);
    mm.station_distances[mm.get_station_by_id("air02")].emplace_back(mm.get_station_by_id("air01"), 2999);
    mm.station_distances[mm.get_station_by_id("air02")].emplace_back(mm.get_station_by_id("air03"), 18329);
    mm.station_distances[mm.get_station_by_id("air03")].emplace_back(mm.get_station_by_id("air04"), 7239);
    mm.station_distances[mm.get_station_by_id("air04")].emplace_back(mm.get_station_by_id("air02"), 20619);

    mm.station_distances[mm.get_station_by_id("batong01")].emplace_back(mm.get_station_by_id("batong02"), 1715);
    mm.station_distances[mm.get_station_by_id("batong02")].emplace_back(mm.get_station_by_id("batong01"), 1715);
    mm.station_distances[mm.get_station_by_id("batong02")].emplace_back(mm.get_station_by_id("batong03"), 1375);
    mm.station_distances[mm.get_station_by_id("batong03")].emplace_back(mm.get_station_by_id("batong02"), 1375);
    mm.station_distances[mm.get_station_by_id("batong03")].emplace_back(mm.get_station_by_id("batong04"), 2002);
    mm.station_distances[mm.get_station_by_id("batong04")].emplace_back(mm.get_station_by_id("batong03"), 2002);
    mm.station_distances[mm.get_station_by_id("batong04")].emplace_back(mm.get_station_by_id("batong05"), 1894);
    mm.station_distances[mm.get_station_by_id("batong05")].emplace_back(mm.get_station_by_id("batong04"), 1894);
    mm.station_distances[mm.get_station_by_id("batong05")].emplace_back(mm.get_station_by_id("batong06"), 1912);
    mm.station_distances[mm.get_station_by_id("batong06")].emplace_back(mm.get_station_by_id("batong05"), 1912);
    mm.station_distances[mm.get_station_by_id("batong06")].emplace_back(mm.get_station_by_id("batong07"), 1763);
    mm.station_distances[mm.get_station_by_id("batong07")].emplace_back(mm.get_station_by_id("batong06"), 1763);
    mm.station_distances[mm.get_station_by_id("batong07")].emplace_back(mm.get_station_by_id("batong08"), 1700);
    mm.station_distances[mm.get_station_by_id("batong08")].emplace_back(mm.get_station_by_id("batong07"), 1700);
    mm.station_distances[mm.get_station_by_id("batong08")].emplace_back(mm.get_station_by_id("batong09"), 1465);
    mm.station_distances[mm.get_station_by_id("batong09")].emplace_back(mm.get_station_by_id("batong08"), 1465);
    mm.station_distances[mm.get_station_by_id("batong09")].emplace_back(mm.get_station_by_id("batong10"), 990);
    mm.station_distances[mm.get_station_by_id("batong10")].emplace_back(mm.get_station_by_id("batong09"), 990);
    mm.station_distances[mm.get_station_by_id("batong10")].emplace_back(mm.get_station_by_id("batong11"), 1225);
    mm.station_distances[mm.get_station_by_id("batong11")].emplace_back(mm.get_station_by_id("batong10"), 1225);
    mm.station_distances[mm.get_station_by_id("batong11")].emplace_back(mm.get_station_by_id("batong12"), 1257);
    mm.station_distances[mm.get_station_by_id("batong12")].emplace_back(mm.get_station_by_id("batong11"), 1257);
    mm.station_distances[mm.get_station_by_id("batong12")].emplace_back(mm.get_station_by_id("batong13"), 776);
    mm.station_distances[mm.get_station_by_id("batong13")].emplace_back(mm.get_station_by_id("batong12"), 776);

    mm.station_distances[mm.get_station_by_id("changping01")].emplace_back(mm.get_station_by_id("changping02"), 1213);
    mm.station_distances[mm.get_station_by_id("changping02")].emplace_back(mm.get_station_by_id("changping01"), 1213);
    mm.station_distances[mm.get_station_by_id("changping02")].emplace_back(mm.get_station_by_id("changping03"), 3508);
    mm.station_distances[mm.get_station_by_id("changping03")].emplace_back(mm.get_station_by_id("changping02"), 3508);
    mm.station_distances[mm.get_station_by_id("changping03")].emplace_back(mm.get_station_by_id("changping04"), 2433);
    mm.station_distances[mm.get_station_by_id("changping04")].emplace_back(mm.get_station_by_id("changping03"), 2433);
    mm.station_distances[mm.get_station_by_id("changping04")].emplace_back(mm.get_station_by_id("changping05"), 1683);
    mm.station_distances[mm.get_station_by_id("changping05")].emplace_back(mm.get_station_by_id("changping04"), 1683);
    mm.station_distances[mm.get_station_by_id("changping05")].emplace_back(mm.get_station_by_id("changping06"), 1958);
    mm.station_distances[mm.get_station_by_id("changping06")].emplace_back(mm.get_station_by_id("changping05"), 1958);
    mm.station_distances[mm.get_station_by_id("changping06")].emplace_back(mm.get_station_by_id("changping07"), 5357);
    mm.station_distances[mm.get_station_by_id("changping07")].emplace_back(mm.get_station_by_id("changping06"), 5357);
    mm.station_distances[mm.get_station_by_id("changping07")].emplace_back(mm.get_station_by_id("changping08"), 1964);
    mm.station_distances[mm.get_station_by_id("changping08")].emplace_back(mm.get_station_by_id("changping07"), 1964);
    mm.station_distances[mm.get_station_by_id("changping08")].emplace_back(mm.get_station_by_id("changping09"), 2025);
    mm.station_distances[mm.get_station_by_id("changping09")].emplace_back(mm.get_station_by_id("changping08"), 2025);
    mm.station_distances[mm.get_station_by_id("changping09")].emplace_back(mm.get_station_by_id("changping10"), 3799);
    mm.station_distances[mm.get_station_by_id("changping10")].emplace_back(mm.get_station_by_id("changping09"), 3799);
    mm.station_distances[mm.get_station_by_id("changping10")].emplace_back(mm.get_station_by_id("changping11"), 2367);
    mm.station_distances[mm.get_station_by_id("changping11")].emplace_back(mm.get_station_by_id("changping10"), 2367);
    mm.station_distances[mm.get_station_by_id("changping11")].emplace_back(mm.get_station_by_id("changping12"), 5440);
    mm.station_distances[mm.get_station_by_id("changping12")].emplace_back(mm.get_station_by_id("changping11"), 5440);

    mm.station_distances[mm.get_station_by_id("daxing01")].emplace_back(mm.get_station_by_id("daxing02"), 2798);
    mm.station_distances[mm.get_station_by_id("daxing02")].emplace_back(mm.get_station_by_id("daxing01"), 2798);
    mm.station_distances[mm.get_station_by_id("daxing02")].emplace_back(mm.get_station_by_id("daxing03"), 5102);
    mm.station_distances[mm.get_station_by_id("daxing03")].emplace_back(mm.get_station_by_id("daxing02"), 5102);
    mm.station_distances[mm.get_station_by_id("daxing03")].emplace_back(mm.get_station_by_id("daxing04"), 1810);
    mm.station_distances[mm.get_station_by_id("daxing04")].emplace_back(mm.get_station_by_id("daxing03"), 1810);
    mm.station_distances[mm.get_station_by_id("daxing04")].emplace_back(mm.get_station_by_id("daxing05"), 1128);
    mm.station_distances[mm.get_station_by_id("daxing05")].emplace_back(mm.get_station_by_id("daxing04"), 1128);
    mm.station_distances[mm.get_station_by_id("daxing05")].emplace_back(mm.get_station_by_id("daxing06"), 1096);
    mm.station_distances[mm.get_station_by_id("daxing06")].emplace_back(mm.get_station_by_id("daxing05"), 1096);
    mm.station_distances[mm.get_station_by_id("daxing06")].emplace_back(mm.get_station_by_id("daxing07"), 1200);
    mm.station_distances[mm.get_station_by_id("daxing07")].emplace_back(mm.get_station_by_id("daxing06"), 1200);
    mm.station_distances[mm.get_station_by_id("daxing07")].emplace_back(mm.get_station_by_id("daxing08"), 1214);
    mm.station_distances[mm.get_station_by_id("daxing08")].emplace_back(mm.get_station_by_id("daxing07"), 1214);
    mm.station_distances[mm.get_station_by_id("daxing08")].emplace_back(mm.get_station_by_id("daxing09"), 987);
    mm.station_distances[mm.get_station_by_id("daxing09")].emplace_back(mm.get_station_by_id("daxing08"), 987);
    mm.station_distances[mm.get_station_by_id("daxing09")].emplace_back(mm.get_station_by_id("daxing10"), 2035);
    mm.station_distances[mm.get_station_by_id("daxing10")].emplace_back(mm.get_station_by_id("daxing09"), 2035);
    mm.station_distances[mm.get_station_by_id("daxing10")].emplace_back(mm.get_station_by_id("daxing11"), 2918);
    mm.station_distances[mm.get_station_by_id("daxing11")].emplace_back(mm.get_station_by_id("daxing10"), 2918);
    mm.station_distances[mm.get_station_by_id("daxing11")].emplace_back(mm.get_station_by_id("daxing12"), 1811);
    mm.station_distances[mm.get_station_by_id("daxing12")].emplace_back(mm.get_station_by_id("daxing11"), 1811);

    mm.station_distances[mm.get_station_by_id("fangshan01")].emplace_back(mm.get_station_by_id("fangshan02"), 1405);
    mm.station_distances[mm.get_station_by_id("fangshan02")].emplace_back(mm.get_station_by_id("fangshan01"), 1405);
    mm.station_distances[mm.get_station_by_id("fangshan02")].emplace_back(mm.get_station_by_id("fangshan03"), 6466);
    mm.station_distances[mm.get_station_by_id("fangshan03")].emplace_back(mm.get_station_by_id("fangshan02"), 6466);
    mm.station_distances[mm.get_station_by_id("fangshan03")].emplace_back(mm.get_station_by_id("fangshan04"), 4041);
    mm.station_distances[mm.get_station_by_id("fangshan04")].emplace_back(mm.get_station_by_id("fangshan03"), 4041);
    mm.station_distances[mm.get_station_by_id("fangshan04")].emplace_back(mm.get_station_by_id("fangshan05"), 2150);
    mm.station_distances[mm.get_station_by_id("fangshan05")].emplace_back(mm.get_station_by_id("fangshan04"), 2150);
    mm.station_distances[mm.get_station_by_id("fangshan05")].emplace_back(mm.get_station_by_id("fangshan06"), 1474);
    mm.station_distances[mm.get_station_by_id("fangshan06")].emplace_back(mm.get_station_by_id("fangshan05"), 1474);
    mm.station_distances[mm.get_station_by_id("fangshan06")].emplace_back(mm.get_station_by_id("fangshan07"), 2003);
    mm.station_distances[mm.get_station_by_id("fangshan07")].emplace_back(mm.get_station_by_id("fangshan06"), 2003);
    mm.station_distances[mm.get_station_by_id("fangshan07")].emplace_back(mm.get_station_by_id("fangshan08"), 1188);
    mm.station_distances[mm.get_station_by_id("fangshan08")].emplace_back(mm.get_station_by_id("fangshan07"), 1188);
    mm.station_distances[mm.get_station_by_id("fangshan08")].emplace_back(mm.get_station_by_id("fangshan09"), 1738);
    mm.station_distances[mm.get_station_by_id("fangshan09")].emplace_back(mm.get_station_by_id("fangshan08"), 1738);
    mm.station_distances[mm.get_station_by_id("fangshan09")].emplace_back(mm.get_station_by_id("fangshan10"), 1332);
    mm.station_distances[mm.get_station_by_id("fangshan10")].emplace_back(mm.get_station_by_id("fangshan09"), 1332);
    mm.station_distances[mm.get_station_by_id("fangshan10")].emplace_back(mm.get_station_by_id("fangshan11"), 1330);
    mm.station_distances[mm.get_station_by_id("fangshan11")].emplace_back(mm.get_station_by_id("fangshan10"), 1330);

    mm.station_distances[mm.get_station_by_id("yizhuang01")].emplace_back(mm.get_station_by_id("yizhuang02"), 2631);
    mm.station_distances[mm.get_station_by_id("yizhuang02")].emplace_back(mm.get_station_by_id("yizhuang01"), 2631);
    mm.station_distances[mm.get_station_by_id("yizhuang02")].emplace_back(mm.get_station_by_id("yizhuang03"), 1275);
    mm.station_distances[mm.get_station_by_id("yizhuang03")].emplace_back(mm.get_station_by_id("yizhuang02"), 1275);
    mm.station_distances[mm.get_station_by_id("yizhuang03")].emplace_back(mm.get_station_by_id("yizhuang04"), 2366);
    mm.station_distances[mm.get_station_by_id("yizhuang04")].emplace_back(mm.get_station_by_id("yizhuang03"), 2366);
    mm.station_distances[mm.get_station_by_id("yizhuang04")].emplace_back(mm.get_station_by_id("yizhuang05"), 1982);
    mm.station_distances[mm.get_station_by_id("yizhuang05")].emplace_back(mm.get_station_by_id("yizhuang04"), 1982);
    mm.station_distances[mm.get_station_by_id("yizhuang05")].emplace_back(mm.get_station_by_id("yizhuang06"), 993);
    mm.station_distances[mm.get_station_by_id("yizhuang06")].emplace_back(mm.get_station_by_id("yizhuang05"), 993);
    mm.station_distances[mm.get_station_by_id("yizhuang06")].emplace_back(mm.get_station_by_id("yizhuang07"), 1728);
    mm.station_distances[mm.get_station_by_id("yizhuang07")].emplace_back(mm.get_station_by_id("yizhuang06"), 1728);
    mm.station_distances[mm.get_station_by_id("yizhuang07")].emplace_back(mm.get_station_by_id("yizhuang08"), 1090);
    mm.station_distances[mm.get_station_by_id("yizhuang08")].emplace_back(mm.get_station_by_id("yizhuang07"), 1090);
    mm.station_distances[mm.get_station_by_id("yizhuang08")].emplace_back(mm.get_station_by_id("yizhuang09"), 1355);
    mm.station_distances[mm.get_station_by_id("yizhuang09")].emplace_back(mm.get_station_by_id("yizhuang08"), 1355);
    mm.station_distances[mm.get_station_by_id("yizhuang09")].emplace_back(mm.get_station_by_id("yizhuang10"), 2337);
    mm.station_distances[mm.get_station_by_id("yizhuang10")].emplace_back(mm.get_station_by_id("yizhuang09"), 2337);
    mm.station_distances[mm.get_station_by_id("yizhuang10")].emplace_back(mm.get_station_by_id("yizhuang11"), 2301);
    mm.station_distances[mm.get_station_by_id("yizhuang11")].emplace_back(mm.get_station_by_id("yizhuang10"), 2301);
    mm.station_distances[mm.get_station_by_id("yizhuang11")].emplace_back(mm.get_station_by_id("yizhuang12"), 2055);
    mm.station_distances[mm.get_station_by_id("yizhuang12")].emplace_back(mm.get_station_by_id("yizhuang11"), 2055);
    mm.station_distances[mm.get_station_by_id("yizhuang12")].emplace_back(mm.get_station_by_id("yizhuang13"), 1281);
    mm.station_distances[mm.get_station_by_id("yizhuang13")].emplace_back(mm.get_station_by_id("yizhuang12"), 1281);
}

inline void initialize_transstations()
{
    mm.station_distances[mm.get_station_by_id("0108")].emplace_back(mm.get_station_by_id("1040"), 0);
    mm.station_distances[mm.get_station_by_id("0109")].emplace_back(mm.get_station_by_id("0904"), 0);
    mm.station_distances[mm.get_station_by_id("0112")].emplace_back(mm.get_station_by_id("0204"), 0);
    mm.station_distances[mm.get_station_by_id("0113")].emplace_back(mm.get_station_by_id("0417"), 0);
    mm.station_distances[mm.get_station_by_id("0117")].emplace_back(mm.get_station_by_id("0517"), 0);
    mm.station_distances[mm.get_station_by_id("0118")].emplace_back(mm.get_station_by_id("0211"), 0);
    mm.station_distances[mm.get_station_by_id("0120")].emplace_back(mm.get_station_by_id("1020"), 0);
    mm.station_distances[mm.get_station_by_id("0121")].emplace_back(mm.get_station_by_id("14e12"), 0);
    mm.station_distances[mm.get_station_by_id("0122")].emplace_back(mm.get_station_by_id("batong01"), 0);
    mm.station_distances[mm.get_station_by_id("0123")].emplace_back(mm.get_station_by_id("batong02"), 0);
    mm.station_distances[mm.get_station_by_id("0201")].emplace_back(mm.get_station_by_id("0412"), 0);
    mm.station_distances[mm.get_station_by_id("0201")].emplace_back(mm.get_station_by_id("1301"), 0);
    mm.station_distances[mm.get_station_by_id("0202")].emplace_back(mm.get_station_by_id("0606"), 0);
    mm.station_distances[mm.get_station_by_id("0204")].emplace_back(mm.get_station_by_id("0112"), 0);
    mm.station_distances[mm.get_station_by_id("0206")].emplace_back(mm.get_station_by_id("0418"), 0);
    mm.station_distances[mm.get_station_by_id("0209")].emplace_back(mm.get_station_by_id("0518"), 0);
    mm.station_distances[mm.get_station_by_id("0211")].emplace_back(mm.get_station_by_id("0118"), 0);
    mm.station_distances[mm.get_station_by_id("0212")].emplace_back(mm.get_station_by_id("0611"), 0);
    mm.station_distances[mm.get_station_by_id("0214")].emplace_back(mm.get_station_by_id("1316"), 0);
    mm.station_distances[mm.get_station_by_id("0214")].emplace_back(mm.get_station_by_id("air01"), 0);
    mm.station_distances[mm.get_station_by_id("0215")].emplace_back(mm.get_station_by_id("0512"), 0);
    mm.station_distances[mm.get_station_by_id("0217")].emplace_back(mm.get_station_by_id("0816"), 0);
    mm.station_distances[mm.get_station_by_id("0407")].emplace_back(mm.get_station_by_id("1003"), 0);
    mm.station_distances[mm.get_station_by_id("0410")].emplace_back(mm.get_station_by_id("0901"), 0);
    mm.station_distances[mm.get_station_by_id("0412")].emplace_back(mm.get_station_by_id("0201"), 0);
    mm.station_distances[mm.get_station_by_id("0412")].emplace_back(mm.get_station_by_id("1301"), 0);
    mm.station_distances[mm.get_station_by_id("0414")].emplace_back(mm.get_station_by_id("0607"), 0);
    mm.station_distances[mm.get_station_by_id("0417")].emplace_back(mm.get_station_by_id("0113"), 0);
    mm.station_distances[mm.get_station_by_id("0418")].emplace_back(mm.get_station_by_id("0206"), 0);
    mm.station_distances[mm.get_station_by_id("0419")].emplace_back(mm.get_station_by_id("0705"), 0);
    mm.station_distances[mm.get_station_by_id("0421")].emplace_back(mm.get_station_by_id("14e01"), 0);
    mm.station_distances[mm.get_station_by_id("0423")].emplace_back(mm.get_station_by_id("1031"), 0);
    mm.station_distances[mm.get_station_by_id("0424")].emplace_back(mm.get_station_by_id("daxing01"), 0);
    mm.station_distances[mm.get_station_by_id("0504")].emplace_back(mm.get_station_by_id("1310"), 0);
    mm.station_distances[mm.get_station_by_id("0507")].emplace_back(mm.get_station_by_id("1506"), 0);
    mm.station_distances[mm.get_station_by_id("0509")].emplace_back(mm.get_station_by_id("1011"), 0);
    mm.station_distances[mm.get_station_by_id("0512")].emplace_back(mm.get_station_by_id("0215"), 0);
    mm.station_distances[mm.get_station_by_id("0515")].emplace_back(mm.get_station_by_id("0610"), 0);
    mm.station_distances[mm.get_station_by_id("0517")].emplace_back(mm.get_station_by_id("0117"), 0);
    mm.station_distances[mm.get_station_by_id("0518")].emplace_back(mm.get_station_by_id("0209"), 0);
    mm.station_distances[mm.get_station_by_id("0519")].emplace_back(mm.get_station_by_id("0709"), 0);
    mm.station_distances[mm.get_station_by_id("0521")].emplace_back(mm.get_station_by_id("14e05"), 0);
    mm.station_distances[mm.get_station_by_id("0523")].emplace_back(mm.get_station_by_id("1027"), 0);
    mm.station_distances[mm.get_station_by_id("0523")].emplace_back(mm.get_station_by_id("yizhuang01"), 0);
    mm.station_distances[mm.get_station_by_id("0602")].emplace_back(mm.get_station_by_id("1042"), 0);
    mm.station_distances[mm.get_station_by_id("0604")].emplace_back(mm.get_station_by_id("0902"), 0);
    mm.station_distances[mm.get_station_by_id("0606")].emplace_back(mm.get_station_by_id("0202"), 0);
    mm.station_distances[mm.get_station_by_id("0607")].emplace_back(mm.get_station_by_id("0414"), 0);
    mm.station_distances[mm.get_station_by_id("0609")].emplace_back(mm.get_station_by_id("0818"), 0);
    mm.station_distances[mm.get_station_by_id("0610")].emplace_back(mm.get_station_by_id("0515"), 0);
    mm.station_distances[mm.get_station_by_id("0611")].emplace_back(mm.get_station_by_id("0212"), 0);
    mm.station_distances[mm.get_station_by_id("0613")].emplace_back(mm.get_station_by_id("1018"), 0);
    mm.station_distances[mm.get_station_by_id("0614")].emplace_back(mm.get_station_by_id("14e14"), 0);
    mm.station_distances[mm.get_station_by_id("0701")].emplace_back(mm.get_station_by_id("0905"), 0);
    mm.station_distances[mm.get_station_by_id("0705")].emplace_back(mm.get_station_by_id("0419"), 0);
    mm.station_distances[mm.get_station_by_id("0709")].emplace_back(mm.get_station_by_id("0519"), 0);
    mm.station_distances[mm.get_station_by_id("0713")].emplace_back(mm.get_station_by_id("14e11"), 0);
    mm.station_distances[mm.get_station_by_id("0801")].emplace_back(mm.get_station_by_id("changping10"), 0);
    mm.station_distances[mm.get_station_by_id("0805")].emplace_back(mm.get_station_by_id("1309"), 0);
    mm.station_distances[mm.get_station_by_id("0811")].emplace_back(mm.get_station_by_id("1504"), 0);
    mm.station_distances[mm.get_station_by_id("0813")].emplace_back(mm.get_station_by_id("1009"), 0);
    mm.station_distances[mm.get_station_by_id("0816")].emplace_back(mm.get_station_by_id("0217"), 0);
    mm.station_distances[mm.get_station_by_id("0818")].emplace_back(mm.get_station_by_id("0609"), 0);
    mm.station_distances[mm.get_station_by_id("0901")].emplace_back(mm.get_station_by_id("0410"), 0);
    mm.station_distances[mm.get_station_by_id("0902")].emplace_back(mm.get_station_by_id("0604"), 0);
    mm.station_distances[mm.get_station_by_id("0904")].emplace_back(mm.get_station_by_id("0109"), 0);
    mm.station_distances[mm.get_station_by_id("0905")].emplace_back(mm.get_station_by_id("0701"), 0);
    mm.station_distances[mm.get_station_by_id("0907")].emplace_back(mm.get_station_by_id("1038"), 0);
    mm.station_distances[mm.get_station_by_id("0908")].emplace_back(mm.get_station_by_id("14w06"), 0);
    mm.station_distances[mm.get_station_by_id("0913")].emplace_back(mm.get_station_by_id("fangshan01"), 0);
    mm.station_distances[mm.get_station_by_id("1003")].emplace_back(mm.get_station_by_id("0407"), 0);
    mm.station_distances[mm.get_station_by_id("1005")].emplace_back(mm.get_station_by_id("1303"), 0);
    mm.station_distances[mm.get_station_by_id("1009")].emplace_back(mm.get_station_by_id("0813"), 0);
    mm.station_distances[mm.get_station_by_id("1011")].emplace_back(mm.get_station_by_id("0509"), 0);
    mm.station_distances[mm.get_station_by_id("1012")].emplace_back(mm.get_station_by_id("1313"), 0);
    mm.station_distances[mm.get_station_by_id("1014")].emplace_back(mm.get_station_by_id("air02"), 0);
    mm.station_distances[mm.get_station_by_id("1018")].emplace_back(mm.get_station_by_id("0613"), 0);
    mm.station_distances[mm.get_station_by_id("1020")].emplace_back(mm.get_station_by_id("0120"), 0);
    mm.station_distances[mm.get_station_by_id("1024")].emplace_back(mm.get_station_by_id("14e07"), 0);
    mm.station_distances[mm.get_station_by_id("1027")].emplace_back(mm.get_station_by_id("0523"), 0);
    mm.station_distances[mm.get_station_by_id("1027")].emplace_back(mm.get_station_by_id("yizhuang01"), 0);
    mm.station_distances[mm.get_station_by_id("1031")].emplace_back(mm.get_station_by_id("0423"), 0);
    mm.station_distances[mm.get_station_by_id("1037")].emplace_back(mm.get_station_by_id("14w07"), 0);
    mm.station_distances[mm.get_station_by_id("1038")].emplace_back(mm.get_station_by_id("0907"), 0);
    mm.station_distances[mm.get_station_by_id("1040")].emplace_back(mm.get_station_by_id("0108"), 0);
    mm.station_distances[mm.get_station_by_id("1042")].emplace_back(mm.get_station_by_id("0602"), 0);
    mm.station_distances[mm.get_station_by_id("1301")].emplace_back(mm.get_station_by_id("0412"), 0);
    mm.station_distances[mm.get_station_by_id("1301")].emplace_back(mm.get_station_by_id("0201"), 0);
    mm.station_distances[mm.get_station_by_id("1303")].emplace_back(mm.get_station_by_id("1005"), 0);
    mm.station_distances[mm.get_station_by_id("1306")].emplace_back(mm.get_station_by_id("changping12"), 0);
    mm.station_distances[mm.get_station_by_id("1309")].emplace_back(mm.get_station_by_id("0805"), 0);
    mm.station_distances[mm.get_station_by_id("1310")].emplace_back(mm.get_station_by_id("0504"), 0);
    mm.station_distances[mm.get_station_by_id("1312")].emplace_back(mm.get_station_by_id("1508"), 0);
    mm.station_distances[mm.get_station_by_id("1313")].emplace_back(mm.get_station_by_id("1012"), 0);
    mm.station_distances[mm.get_station_by_id("1316")].emplace_back(mm.get_station_by_id("0214"), 0);
    mm.station_distances[mm.get_station_by_id("1316")].emplace_back(mm.get_station_by_id("air01"), 0);
    mm.station_distances[mm.get_station_by_id("14w06")].emplace_back(mm.get_station_by_id("0908"), 0);
    mm.station_distances[mm.get_station_by_id("14w07")].emplace_back(mm.get_station_by_id("1037"), 0);
    mm.station_distances[mm.get_station_by_id("14e01")].emplace_back(mm.get_station_by_id("0421"), 0);
    mm.station_distances[mm.get_station_by_id("14e05")].emplace_back(mm.get_station_by_id("0521"), 0);
    mm.station_distances[mm.get_station_by_id("14e07")].emplace_back(mm.get_station_by_id("1024"), 0);
    mm.station_distances[mm.get_station_by_id("14e11")].emplace_back(mm.get_station_by_id("0713"), 0);
    mm.station_distances[mm.get_station_by_id("14e12")].emplace_back(mm.get_station_by_id("0121"), 0);
    mm.station_distances[mm.get_station_by_id("14e14")].emplace_back(mm.get_station_by_id("0614"), 0);
    mm.station_distances[mm.get_station_by_id("14e22")].emplace_back(mm.get_station_by_id("1509"), 0);
    mm.station_distances[mm.get_station_by_id("1504")].emplace_back(mm.get_station_by_id("0811"), 0);
    mm.station_distances[mm.get_station_by_id("1506")].emplace_back(mm.get_station_by_id("0507"), 0);
    mm.station_distances[mm.get_station_by_id("1508")].emplace_back(mm.get_station_by_id("1312"), 0);
    mm.station_distances[mm.get_station_by_id("1509")].emplace_back(mm.get_station_by_id("14e22"), 0);
    mm.station_distances[mm.get_station_by_id("batong01")].emplace_back(mm.get_station_by_id("0122"), 0);
    mm.station_distances[mm.get_station_by_id("batong02")].emplace_back(mm.get_station_by_id("0123"), 0);
    mm.station_distances[mm.get_station_by_id("changping12")].emplace_back(mm.get_station_by_id("1306"), 0);
    mm.station_distances[mm.get_station_by_id("changping10")].emplace_back(mm.get_station_by_id("0801"), 0);
    mm.station_distances[mm.get_station_by_id("yizhuang01")].emplace_back(mm.get_station_by_id("0523"), 0);
    mm.station_distances[mm.get_station_by_id("yizhuang01")].emplace_back(mm.get_station_by_id("1027"), 0);
    mm.station_distances[mm.get_station_by_id("daxing01")].emplace_back(mm.get_station_by_id("0424"), 0);
    mm.station_distances[mm.get_station_by_id("fangshan01")].emplace_back(mm.get_station_by_id("0913"), 0);
    mm.station_distances[mm.get_station_by_id("air01")].emplace_back(mm.get_station_by_id("0214"), 0);
    mm.station_distances[mm.get_station_by_id("air01")].emplace_back(mm.get_station_by_id("1316"), 0);
    mm.station_distances[mm.get_station_by_id("air02")].emplace_back(mm.get_station_by_id("1014"), 0);
}

void initialization()
{
    initialize_stations();
    initialize_distances();
    initialize_transstations();
}