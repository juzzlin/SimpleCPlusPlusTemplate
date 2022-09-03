#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <string>
#include <vector>

class Application
{
public:
    Application(int argc, char ** argv);

    int run();

private:
    void parseArgs(const std::vector<std::string> & args);

    void printUsage(std::string name) const;

    bool m_printUsage = false;

    std::string m_cmd;
};

#endif // APPLICATION_HPP
