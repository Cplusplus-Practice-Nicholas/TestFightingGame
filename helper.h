#ifndef _HELPER_H_
#define _HELPER_H_

#include "classes/Player.h"
#include "classes/Enemy.h"


// Method Declerations
extern void fight(Player& player);
//Enemy createMonster();
void displayFightMenu(Enemy& monster);
bool playerAttacksFirst(Enemy& monster, Player& player);
bool monsterAttacksFirst(Enemy& monster, Player& player);
bool hasRanAway();

#endif