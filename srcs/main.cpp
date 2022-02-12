/*
** EPITECH PROJECT, 2020
** GroundHog
** File description:
** Main
*/

#include "../include/GroundHog.hpp"

int main(int ac, char **argv)
{
    Groundhog engine;

    if (ac != 2) {
        std::cout << HELP << std::endl;
        return 84;
    }
    if (strcmp(argv[1], "-h") == 0) {
        std::cout << HELP << std::endl;
        return 0;
    }
    /*if (std::atoi(argv[1]) < 2); {
        std::cout << HELP << std::endl;
        return 84;
    }*/
    return (engine.Engine(std::atoi(argv[1])));
}

