#include "Shell.h"
#include "utility.h"

#include <iostream>
#include <string>
#include <vector>

int Shell::run()
{
    while (true)
    {
        std::cout << prefix << "> ";
        std::string input;
        std::getline(std::cin, input);

        auto args = split(input, ' ');

        if (args[0] == "exit")
        {
            break;
        }

        if (commands.find(args[0]) != commands.end())
        {
            commands.at(args[0])(*this, decltype(args)(++args.begin(), args.end()));
        }
        else
        {
            std::cout << "δ֪���� \"" << args[0] << "\"���������롣" << std::endl;
        }
    }
    return 0;
}