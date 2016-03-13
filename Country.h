/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Country.h
 * Author: Matthew Luce <your.name at your.org>
 *
 * Created on March 13, 2016, 2:22 PM
 */

#ifndef COUNTRY_H
#define COUNTRY_H

enum CountryName{
    
    //North America
    alaska,
    albera,
    central_america,
    eastern_united_states,
    greenland,
    northwest_territory,
    ontario,
    quebec,
    western_united_states,
    
    //South America
    argentina,
    brazil,
    peru,
    venezuela,
    
    //Europe
    great_britain,
    iceland,
    northern_europe,
    scandinavia,
    southern_europe,
    ukrain,
    western_europe,
    
    //Africa
    congo,
    east_africa,
    egypt,
    madagascar,
    north_africa,
    south_africa,
    
    //Asia
    afghanistan,
    china,
    india,
    irkutsk,
    japan,
    kamchatka,
    middle_east,
    mongolia,
    siam,
    siberia,
    ural,
    yakutsk,
    
    //Australia
    eastern_australia,
    indonesia,
    new_guinea,
    western_australia
    
};

class Country {
public:
    Country();
    Country(const Country& orig);
    virtual ~Country();
private:
    CountryName name;
};

#endif /* COUNTRY_H */

