/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.h
 * Author: Matthew Luce <your.name at your.org>
 *
 * Created on March 13, 2016, 2:22 PM
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>

#include "Continent.h"

enum Color{
    green,
    yellow,
    blue, 
    red,
    white,
    black
};

class Player {
public:
    Player();
    Player(const Player& orig);
    virtual ~Player();
    Color playerColor;
    bool inGame;
    bool attacking(int numOfDice);
    bool defending(int numOfDice);
private:
    Army playersArmy;
    std::vector<Country> territories;
    std::vector<Continent> continentsOwned;
    std::string name;
    
    
};

#endif /* PLAYER_H */

