#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>
#include <vector>
#include <iostream>
#include <stdlib.h>

class Player
{
private:
    // Private Atrrabutes
    int health{ 10 };
    std::string name;
    int strength;
    int speed;
    int weaponDamage{ 2 };
    int score{0};

public:
// Public Constructor
    Player(std::string x);

// Public Methods
    int randomNumber(time_t num);
    int attackDamage();
    void showStats();
    void showCurrentWeapon();
    void takeDamage(int damageValue);
    void updateScore();
    int getHealth();
    int getSpeed();
};

#endif