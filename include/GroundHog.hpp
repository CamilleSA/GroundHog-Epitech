/*
** EPITECH PROJECT, 2020
** GroundHog.hpp
** File description:
** .hpp
*/

#ifndef GROUNDHOG_HH
#define GROUNDHOG_HH
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>

#define HELP "SYNOPSIS\n\t./groundhog period\n\nDESCRIPTION\n\tperiod\t\tthe number of days defining a period"


class Groundhog {
    public:
        Groundhog(void);
        ~Groundhog(void);
        void calculAverage(unsigned int period);
        void displayResult(unsigned int period);
        int Engine(int period);

    private:
        //Groundhog _engine;
        float _g;
        float _difference;
        std::vector<float> _temperature;
        size_t _n;
        char _tmp[10];
};

#endif
