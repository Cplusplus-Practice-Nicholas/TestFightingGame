#include <iostream>
#include <fstream>
#include <string>
#include <nlohmann/json.hpp>

#ifndef _Enemy_h_

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
    Enemy(std::string a, int b, int c, int d, int e)
    {
        name = a;
        health = b;
        strength = c;
        speed = d;
        damage = e;
    }    
// Public Methods
    int attackDamage();
    void takeDamage(int damageValue);
    static Enemy createMonster();
};

#endif