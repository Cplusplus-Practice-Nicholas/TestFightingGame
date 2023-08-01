
#include <iostream>
#include "classes/Enemy.h"
#include "classes/Player.h"

using namespace std;

void fight(Player &player);
//Enemy createMonster();
void displayFightMenu(Enemy &monster);
bool playerAttacksFirst(Enemy &monster, Player &player);
bool monsterAttacksFirst(Enemy &monster, Player &player);
bool hasRanAway();

void displayFightMenu(Enemy &monster)
{

        
    cout << "\nYou are being attacked by a " << monster.getName() << endl;
    cout << "You attack first" << endl;
    cout << "What do you choose to do?" << endl;
    cout << "1 - Attack" << endl;
    cout << "2 - Run" << endl;
    cout << "Your Choice: ";
}

bool playerAttacksFirst(Enemy &monster, Player &player)
{
    int playerDamage = player.attackDamage();
    int monsterDamage = monster.attackDamage();
    bool combat {1};
    
    monster.takeDamage(playerDamage);
    if (monster.getHealth() <= 0)
    {
        combat = 0;
        player.updateScore();
        cout << "\nYou killed " << monster.getName() << endl;
        return combat;
    }
    else
    {
        cout << '\n' << monster.getName() << " is at " << monster.getHealth() << " HP\n" << endl;
    }

    player.takeDamage(monsterDamage);

    if (player.getHealth() <= 0)
    {
        combat = 0;
        cout << '\n' << monster.getName() << " killed you\n" << endl;
        return combat;
    }
    else
    {
        cout << "\nYou are at " << player.getHealth() << " HP\n" << endl;
    }

    return combat;

}

bool monsterAttacksFirst(Enemy &monster, Player &player)
{
    int playerDamage = player.attackDamage();
    int monsterDamage = monster.attackDamage();
    bool combat {1};
    
    player.takeDamage(monsterDamage);
    if (player.getHealth() <= 0)
    {
        combat = 0;
        cout << '\n' << monster.getName() << " killed you" << endl;
        return combat;
    }
    else
    {
        cout << "\nYou are at " << player.getHealth() << " HP" << endl;
    }
                
    monster.takeDamage(playerDamage);
    if (monster.getHealth() <= 0)
    {
        combat = 0;
        player.updateScore();
        cout << "\nYou killed " << monster.getName() << endl;
    }
    else
    {
        cout << '\n' << monster.getName() << " is at " << monster.getHealth() << " HP" << endl;
    }

    return combat;
    
}

bool hasRanAway()
{
    srand(time(nullptr));
    int playerRandom{ 1 + (rand() % 10) };
    cout << playerRandom << endl;

    srand(time(nullptr) + 1);
    int monsterRandom{ 1 + (rand() % 10) };
    cout << monsterRandom << endl;
    
    if (playerRandom >= monsterRandom)
    {
        cout << "You got away" << endl;
        return 0;
    }

    cout << "You did't get away" << endl;
    return 1;
}

void fight(Player &player)
{
    bool inCombat = 1;
    int playerOption{ 0 };
    Enemy monster = Enemy::createMonster();

    if (player.getSpeed() > monster.getSpeed())
    {
        while (inCombat)
        {
            displayFightMenu(monster);
            cin >> playerOption;
            system("clear");
            //system("cls");
            if (playerOption == 1)
            {
                inCombat = playerAttacksFirst(monster, player);
            }
            else if (playerOption == 2)
            {
                inCombat = hasRanAway();
            }
        }
    }
    else if (player.getSpeed() < monster.getSpeed())
    {
        while (inCombat)
        {
            displayFightMenu(monster);
            cin >> playerOption;
            system("clear");
            //system("cls");
            if (playerOption == 1)
            {
                inCombat = monsterAttacksFirst(monster, player);
            }
            else if (playerOption == 2)
            {
                inCombat = hasRanAway();
            }
        }
    }
}