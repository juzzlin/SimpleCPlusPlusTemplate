#include <cstdlib>
#include <iostream>

#include "application.hpp"

int main(int argc, char ** argv)
{
    try {
        return Application(argc, argv).run();
    } catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    return EXIT_FAILURE;
}
