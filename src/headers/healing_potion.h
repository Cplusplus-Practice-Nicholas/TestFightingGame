#ifndef _HEALING_POTION_H_
#define _HEALING_POTION_H_

#include "Item.h"
#include "Player.h"

class HealingPotion : public Item 
{
public:
    using Item::Item;
    ~HealingPotion();

    void doEffect(Player &player);
};


#endif