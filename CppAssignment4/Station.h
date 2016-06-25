#pragma once

#include "Line.h"
#include "unicode/unistr.h"

class Line;

struct line_t
{
    Line * line;    // ������·
    size_t index;   // ����·�е����

    line_t() {
        line = nullptr;
        index = 0;
    }

    line_t(Line * line, size_t i) :line(line) {
        index = i;
    }

    line_t(const line_t & other)
    {
        line = other.line;
        index = other.index;
    }

    line_t(line_t && other)
    {
        line = other.line;
        index = other.index;
    }

    line_t & operator=(const line_t & other) {
        line = other.line;
        index = other.index;

        return *this;
    }

    line_t & operator=(line_t && other) {
        line = other.line;
        index = other.index;

        return *this;
    }

    void swap(line_t & other) {
        std::swap(line, other.line);
        std::swap(index, other.index);
    }
};

static inline bool operator==(const line_t & l1, const line_t & l2) {
    return l1.line == l2.line;
}

static inline bool operator!=(const line_t & l1, const line_t & l2) {
    return l1.line != l2.line;
}

class Station {
public:
    icu::UnicodeString name;   // վ������
    line_t line;    // ������·�����Ϣ
    bool is_up;  // �Ƿ�����վ��
    bool is_down;   // �Ƿ�����վ��

    Station(const icu::UnicodeString & name);
    Station(icu::UnicodeString && name);
    Station(const icu::UnicodeString & name, bool is_up, bool is_down);
    Station(icu::UnicodeString && name, bool is_up, bool is_down);

    Station(const Station & other);
    Station(Station && other);
    Station & operator=(const Station & other);
    Station & operator=(Station && other);

    std::string get_id() const;
};