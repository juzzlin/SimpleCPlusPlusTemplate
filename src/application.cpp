#include "application.hpp"

#include <iostream>

Application::Application(int argc, char ** argv)
{
    parseArgs({argv, argv + argc});
}

int Application::run()
{
    std::cout << NAME << " version " VERSION << std::endl
              << std::endl;

    if (m_printUsage) {
        printUsage(m_cmd);
    } else {
        // TODO: Add your code here..
    }

    return 0;
}

void Application::printUsage(std::string name) const
{
    std::cout << "Usage: " << name << " [OPTIONS]" << std::endl;
}

void Application::parseArgs(const std::vector<std::string> & args)
{
    m_cmd = args.at(0);
    for (auto && arg : args) {
        if (arg == "-h" || arg == "--help") {
            m_printUsage = true;
        }
    }
}
