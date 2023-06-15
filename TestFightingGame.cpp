//#include "test.cpp"
#include <iostream>
#include <string>
#include "Player.cpp"
#include "Enemy.cpp"


using namespace std;

void fight(Player &player);
Enemy createMonster();
void displayFightMenu(Enemy &monster);
bool playerAttacksFirst(Enemy &monster, Player &player);
bool monsterAttacksFirst(Enemy &monster, Player &player);
bool hasRanAway();

int main()
{
    // Uncommit to run tests
    //unitTests();

    // Game Variables
    bool gameOn {1};
    string playerName;
    int playerInput{0};
    //int monsterRate {0};
    
    cout << "Enter the name of your Player: ";
    getline(cin,playerName);
    Player player(playerName);
    cout <<"\n\n";
    player.showStats();
    cout << '\n';

    while(gameOn)
        {
            
            cout << "Choose your next action" << endl;
            cout << "1 - Next Fight" << endl;
            cout << "2 - Show Stats" << endl;
            cout << "3 - Show Current Weapon" << endl;
            cout << "4 - Quit" << endl;
            cout << "\nEnter the number: ";
            cin >> playerInput;
            //system("clear");
            system("cls");
            switch(playerInput)
                {
                    case 1:
                        {
                            fight(player);
                            if(player.health <= 0)
                            {
                                gameOn = 0;
                                cout << "***********************\n" << endl; 
                                cout << "GAME OVER" << endl;
                                cout << "\n*********************\n" << endl;
                            }
                        }
                    break;
                    case 2:
                        {
                            cout << '\n';
                            player.showStats();
                            cout << '\n';
                        }
                    break;
                    case 3:
                        {
                            cout << '\n';
                            player.showCurrentWeapon();
                            cout << '\n';
                        }
                    break;
                    case 4:
                        {
                            gameOn = 0;
                        }
                    default:
                        {
                            cout << "\nInvalid Entery. Please enter a valid value.\n" << endl;
                        }
                }
            
        }
    return 0;
}

Enemy createMonster()
{
    srand(time(nullptr));
    int monsterRate = 1 + (rand() % 2);
    if(monsterRate == 1)
    {
        Rat monster = Rat();
        return monster;
    }
    else
    {
        Bat monster = Bat();
        return monster;
    }

    
}
void displayFightMenu(Enemy &monster)
{
    cout << "You are being attacked by a " << monster.name << endl;
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
    if (monster.health <= 0)
    {
        combat = 0;
        cout << "You killed " << monster.name << endl;
    }
    else
    {
        cout << monster.name << " is at " << monster.health << " HP" << endl;
    }

    player.takeDamage(monsterDamage);

    if (player.health <= 0)
    {
        combat = 0;
        cout << monster.name << " killed you" << endl;
    }
    else
    {
        cout << "You are at " << player.health << " HP" << endl;
    }

    return combat;

}

bool monsterAttacksFirst(Enemy &monster, Player &player)
{
    int playerDamage = player.attackDamage();
    int monsterDamage = monster.attackDamage();
    bool combat {1};
    
    player.takeDamage(monsterDamage);
    if (player.health <= 0)
    {
        combat = 0;
        cout << monster.name << " killed you" << endl;
    }
    else
    {
        cout << "You are at " << player.health << " HP" << endl;
    }
                
    monster.takeDamage(playerDamage);
    if (monster.health <= 0)
    {
        combat = 0;
        cout << "You killed " << monster.name << endl;
    }
    else
    {
        cout << monster.name << " is at " << monster.health << " HP" << endl;
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
    Enemy monster = createMonster();

    if (player.speed > monster.speed)
    {
        while (inCombat)
        {
            displayFightMenu(monster);
            cin >> playerOption;
            //system("clear");
            system("cls");
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
    else if (player.speed < monster.speed)
    {
        while (inCombat)
        {
            displayFightMenu(monster);
            cin >> playerOption;
            //system("clear");
            system("cls");
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

