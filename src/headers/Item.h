#ifndef _ITEM_H_
#define _ITEM_H_

#include <iostream>
#include "Player.h"
#include "../json/nlohmann/json.hpp"

class Item
{
private:
    std::string name;
    std::string description;
    std::string effect;
    std::string type;

public:
    Item(std::string a, std::string b, std::string c, std::string d);

    std::string getName();
    std::string getDescription();
    std::string getEffect();
    std::string getType();
    void doEffect(Player &player);
    static Item createItem();
};

#endif