#include "Shell.h"
#include "utility.h"

#include <iostream>
#include <string>
#include <vector>

int Shell::run() const
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
            commands.at(args[0])(decltype(args)(++args.begin(), args.end()));
        }
        else
        {
            std::cout << "Î´ÖªÃüÁî \"" << args[0] << "\"£¬Çë¼ì²éÊäÈë¡£" << std::endl;
        }
    }
    return 0;
}