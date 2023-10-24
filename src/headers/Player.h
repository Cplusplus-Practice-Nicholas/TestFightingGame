#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include "../json/nlohmann/json.hpp"

using json = nlohmann::json;

class Player
{
private:
    // Private Atrrabutes
    int health{10};
    std::string name;
    int strength;
    int speed;
    int weaponDamage{2};
    int score{0};
    json inventory;
    int coins{0};

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
    int getCoins();
    void setHealth(int num);
<<<<<<< HEAD
=======
    int getCoins();
>>>>>>> 00e5947dc404cb4da37b20f3f5b24692581c829c
    void setCoins(int num);
    void addToInventory(std::string item);
    void getInventory();
};

#endif