#include <string>
#include <vector>
#include <iostream>
#include <stdlib.h>

#ifndef _Player_h_

class Player
{
private:
    // Private Atrrabutes
    int health{ 10 };
    std::string name;
    int strength;
    int speed;
    int weaponDamage{ 2 };
    time_t currentTime = time(NULL);
    int score{0};

public:
// Public Constructor
    Player(std::string x)
    {
        name = x;
        strength = randomNumber(currentTime);
        speed = randomNumber(currentTime + 1);
    }

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