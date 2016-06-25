#pragma once

#include <unordered_map>

#include "boost/optional.hpp"

#include "Station.h"
#include "Line.h"

/*! \brief ���ڼ�¼��ĳ������վ��֮��������Ľṹ��
 *
 * �ֱ��¼Ŀ��վ�����վ֮��ļ�ࡣ
 */
struct conn_t {
    Station * station; //!< ����վ��1
    size_t distance;    //!< վ���

    /*! \brief Ĭ�Ϲ��캯��
     *
     */
    conn_t() {
        station = nullptr;
        distance = 0;
    }

    /*! \brief ��ȫ���캯��
     *
     */
    conn_t(Station * s, size_t d) {
        station = s;
        distance = d;
    }

    /*! \brief �������캯��
     *
     */
    conn_t(const conn_t & other)
    {
        station = other.station;
        distance = other.distance;
    }

    /*! \brief �ƶ����캯��
     *
     */
    conn_t(conn_t && other)
    {
        station = std::move(other.station);
        distance = std::move(other.distance);
    }

    /*! \brief ������ֵ����
     *
     */
    conn_t & operator=(const conn_t & other) {
        station = other.station;
        distance = other.distance;

        return *this;
    }

    /*! \brief �ƶ���ֵ����
     *
     */
    conn_t & operator=(conn_t && other)
    {
        station = std::move(other.station);
        distance = std::move(other.distance);

        return *this;
    }
};

/*! \brief ��ȱȽϺ���
 *
 */
static bool operator==(const conn_t & c1, const conn_t & c2) {
    return c1.station == c2.station;
}

/*! \brief ���ȱȽϺ���
 *
 */
static bool operator!=(const conn_t & c1, const conn_t & c2) {
    return c1.station != c2.station;
}

/*! \brief �������������������
 *
 */
class MetroManager {
public:
    std::vector<Line> lines;    //!< ������·�б�
    std::unordered_map<Station *, std::vector<conn_t>> station_distances; //!< վ����б�

    MetroManager() : MetroManager(std::vector<Line>(), std::unordered_map<Station *, std::vector<conn_t>>())
    {
    }

    MetroManager(std::vector<Line> lines) : MetroManager(lines, std::unordered_map<Station *, std::vector<conn_t>>())
    {
    }

    MetroManager(std::vector<Line> lines, std::unordered_map<Station *, std::vector<conn_t>> trans_stations) :lines(lines), station_distances(trans_stations)
    {
    }

    /*! \brief �� id string ��ȡ������·
     *
     */
    boost::optional<Line &> get_line_by_id(const std::string & id);
    /*! \brief �� id string ��ȡ������·
     *
     */
    boost::optional<Line &> get_line_by_id(std::string && id);

    /*! \brief �� id string ��ȡ����վ��
     *
     */
    boost::optional<Station &> get_station_by_id(const std::string & id);
    /*! \brief �� id string ��ȡ����վ��
     *
     */
    boost::optional<Station &> get_station_by_id(std::string && id);

    /*! \brief ������������վ�������·��
     *
     * ʹ�� Dijkstra Algorithm
     */
    std::vector<Station *> find_path(Station & s1, Station & s2);

    /*! \brief ˢ��ȫ��������·��վ���б�
     *
     */
    void refresh_lines();
};