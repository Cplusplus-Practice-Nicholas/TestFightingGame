#include "../headers/Item.h"

Item::Item(std::string a, std::string b, std::string c, std::string d) 
            : name{a}, description{b}, effect{c}, type{d}
{
    
}

std::string Item::getName()
{
    return name;
}

std::string Item::getDescription()
{
    return description;
}

std::string Item::getEffect()
{
    return effect;
}

std::string Item::getType()
{
    return type;
}

