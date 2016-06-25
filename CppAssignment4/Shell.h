#pragma once

#include <map>
#include <functional>
#include <vector>

/*! \brief ����ʽ�����н���
 *
 */
class Shell
{
public:
    typedef std::map<std::string, std::function<int(const std::vector<std::string> &)>> command_type;

    std::string prefix;

private:
    command_type commands;

public:
    Shell(command_type comm, const std::string & pref = "") : prefix(pref), commands(comm)
    {
    }

    int run() const;
};