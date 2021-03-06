/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Continent.h
 * Author: Matthew Luce <your.name at your.org>
 *
 * Created on March 13, 2016, 2:52 PM
 */

#ifndef CONTINENT_H
#define CONTINENT_H

#include "Country.h"


enum ContinentName{
    north_america,
    south_america,
    europe,
    africa,
    asia,
    australia
};

class Continent {
public:
    Continent();
    Continent(const Continent& orig);
    virtual ~Continent();
private:
    ContinentName name;
    std::vector<Country> countries;
    Player owner;
    
};

#endif /* CONTINENT_H */

