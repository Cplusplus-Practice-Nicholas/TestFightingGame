#ifndef _ENEMY_H_
#define _ENEMY_H_

#include <iostream>
#include <fstream>
#include <string>
#include "../json/nlohmann/json.hpp"

class Enemy
{
private:
// Private Atrrabutes
    int health{ 0 };
    std::string name{ "y"};
    int strength{ 0 };
    int speed{ 0 };
    int damage{ 0 };

public:
//  Public Constructor
    Enemy(std::string a, int b, int c, int d, int e);

// Public Methods
    int attackDamage();
    void takeDamage(int damageValue);
    static Enemy createMonster();
    int getHealth();
    int getSpeed();
    std::string getName();
};

#endif