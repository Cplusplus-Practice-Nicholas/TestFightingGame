#ifndef _HELPER_H_
#define _HELPER_H_

#include "Player.h"
#include "Enemy.h"

// Method Declerations
void fight(Player &player);
Enemy createMonster();
void displayFightMenu(Enemy &monster);
bool playerAttacksFirst(Enemy &monster, Player &player);
bool monsterAttacksFirst(Enemy &monster, Player &player);
bool hasRanAway(Player &player, Enemy &monster);

#endif