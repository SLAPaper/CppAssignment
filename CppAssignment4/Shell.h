#pragma once

#include <map>
#include <functional>
#include <vector>

/*! \brief 交互式命令行界面
 *
 */
class Shell
{
public:
    typedef std::map<std::string, std::function<int(Shell &, const std::vector<std::string> &)>> command_type;

    std::string prefix;

private:
    command_type commands;

public:
    Shell(command_type comm, const std::string & pref = "") : prefix(pref), commands(comm)
    {
    }

    int run();
};