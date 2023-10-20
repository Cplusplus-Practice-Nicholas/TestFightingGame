#include "../headers/healing_potion.h"

void HealingPotion::doEffect(Player &player)
{
    player.setHealth(5);
}