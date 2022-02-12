/*
** EPITECH PROJECT, 2020
** GroundHog
** File description:
** Groundhog
*/

#include "../include/GroundHog.hpp"

Groundhog::Groundhog()
{

}

Groundhog::~Groundhog()
{
}

void Groundhog::calculAverage(unsigned int period)
{
    _n = _temperature.size() - period; //Compteur d'augmentation de tmp
    if (_temperature.size() <= period)
        return;
    _g = 0;
    while (_n < _temperature.size()) {
        _difference = _temperature[_n] - _temperature[_n-1]; //Calcule de difference de temperature entre la periode actuelle et la dernière période
        if (_difference < 0)
            _difference = 0;
        _g = _g + _difference; //Add la diffenrence au resultat
        _n++;
    }
    _g = _g / period; // Divide le resultat par la periode pour obtenir la moyenne
}

void Groundhog::displayResult(unsigned int period)
{
    std::cout << std::setprecision(2) << std::fixed << "g="; //donner la valeur à la virgule près
    if (_temperature.size() <= period)
        std::cout << "nan";
    else
        std::cout << _g;
    std::cout << std::endl;
}

int Groundhog::Engine(int period)
{
    while (true) {
        std::scanf("%s", _tmp); //lis la température entrée
        if (std::strcmp("STOP", _tmp) == 0) //Si STOP est entré on arrête
            break;
        if (std::atof(_tmp) != 0) { //Analyse la température entré
            _temperature.push_back(std::atof(_tmp));
            calculAverage(period);
            displayResult(period);
        }
    }
    return (0);
}