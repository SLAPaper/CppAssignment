#pragma once

#include <unordered_map>

#include "Station.h"
#include "Line.h"

/*! \brief 用于记录到某个地铁站点之间的相联的结构体
 *
 * 分别记录目标站点和两站之间的间距。
 */
struct conn_t {
    Station * station; //!< 相联站点1
    size_t distance;    //!< 站间距

    /*! \brief 默认构造函数
     *
     */
    conn_t() {
        station = nullptr;
        distance = 0;
    }

    /*! \brief 完全构造函数
     *
     */
    conn_t(Station * s, size_t d) {
        station = s;
        distance = d;
    }

    /*! \brief 拷贝构造函数
     *
     */
    conn_t(const conn_t & other)
    {
        station = other.station;
        distance = other.distance;
    }

    /*! \brief 移动构造函数
     *
     */
    conn_t(conn_t && other)
    {
        station = std::move(other.station);
        distance = std::move(other.distance);
    }

    /*! \brief 拷贝赋值函数
     *
     */
    conn_t & operator=(const conn_t & other) {
        station = other.station;
        distance = other.distance;

        return *this;
    }

    /*! \brief 移动赋值函数
     *
     */
    conn_t & operator=(conn_t && other)
    {
        station = std::move(other.station);
        distance = std::move(other.distance);

        return *this;
    }
};

/*! \brief 相等比较函数
 *
 */
static bool operator==(const conn_t & c1, const conn_t & c2) {
    return c1.station == c2.station;
}

/*! \brief 不等比较函数
 *
 */
static bool operator!=(const conn_t & c1, const conn_t & c2) {
    return c1.station != c2.station;
}

/*! \brief 管理整个地铁网络的类
 *
 */
class MetroManager {
public:
    std::vector<Line> lines;    //!< 地铁线路列表
    std::unordered_map<Station *, std::vector<conn_t>> station_distances; //!< 站间距列表

    MetroManager() : MetroManager(std::vector<Line>(), std::unordered_map<Station *, std::vector<conn_t>>())
    {
    }

    MetroManager(std::vector<Line> lines) : MetroManager(lines, std::unordered_map<Station *, std::vector<conn_t>>())
    {
    }

    MetroManager(std::vector<Line> lines, std::unordered_map<Station *, std::vector<conn_t>> trans_stations) :lines(lines), station_distances(trans_stations)
    {
    }

    /*! \brief 从 id string 获取地铁线路
     *
     */
    Line * get_line_by_id(const std::string & id);
    /*! \brief 从 id string 获取地铁线路
     *
     */
    Line * get_line_by_id(std::string && id);

    /*! \brief 从 id string 获取地铁站点
     *
     */
    Station * get_station_by_id(const std::string & id);
    /*! \brief 从 id string 获取地铁站点
     *
     */
    Station * get_station_by_id(std::string && id);

    /*! \brief 计算两个地铁站点间的最短路径
     *
     * 使用 Dijkstra Algorithm
     */
    std::vector<Station *> find_path(Station & s1, Station & s2);

    /*! \brief 刷新全部地铁线路的站点列表
     *
     */
    void refresh_lines();
};