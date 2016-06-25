#include "initializer.h"

extern MetroManager mm;

inline void initialize_stations()
{
    mm.get_line_by_id("01").value().assign_station({
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
    mm.get_line_by_id("02").value().assign_station({
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
    mm.get_line_by_id("04").value().assign_station({
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
    mm.get_line_by_id("05").value().assign_station({
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
    mm.get_line_by_id("06").value().assign_station({
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
    mm.get_line_by_id("07").value().assign_station({
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
    mm.get_line_by_id("08").value().assign_station({
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
    mm.get_line_by_id("09").value().assign_station({
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
    mm.get_line_by_id("10").value().assign_station({
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
    mm.get_line_by_id("13").value().assign_station({
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
    mm.get_line_by_id("14e").value().assign_station({
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
    mm.get_line_by_id("14w").value().assign_station({
        Station{ "张郭庄" },
        Station{ "园博园" },
        Station{ "大瓦窑" },
        Station{ "郭庄子" },
        Station{ "大井" },
        Station{ "七里庄" },
        Station{ "西局" }
    });
    mm.get_line_by_id("15").value().assign_station({
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
    mm.get_line_by_id("air").value().assign_station({
        Station{ "东直门" },
        Station{ "三元桥" },
        Station{ "T3航站楼" , false, true },
        Station{ "T2航站楼" , false, true }
    });
    mm.get_line_by_id("batong").value().assign_station({
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
    mm.get_line_by_id("changping").value().assign_station({
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
    mm.get_line_by_id("daxing").value().assign_station({
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
    mm.get_line_by_id("fangshan").value().assign_station({
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
    mm.get_line_by_id("yizhuang").value().assign_station({
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