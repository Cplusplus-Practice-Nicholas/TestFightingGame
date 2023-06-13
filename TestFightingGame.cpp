//#include "test.cpp"
#include <iostream>
#include <string>
#include "Player.cpp"
#include "Enemy.cpp"
//#include "Bat.cpp"
//#include "Rat.cpp"

using namespace std;

void fight(int rate, Player player);
int playerAttack(int damage, int health);
int monsterAttack(int damage, int health);

int main()
{
    // Uncommit to run tests
    //unitTests();

    // Game Variables
    bool gameOn {1};
    string playerName;
    int playerInput{0};
    int monsterRate {0};
    
    cout << "Enter the name of your Player: ";
    getline(cin,playerName);
    Player player(playerName);
    cout <<"\n\n";
    player.showStats();
    cout << '\n';

    while(gameOn)
        {
            
            srand(time(nullptr));
            monsterRate = 1 + (rand() % 2);
            
            cout << "Choose your next action" << endl;
            cout << "1 - Next Fight" << endl;
            cout << "2 - Show Stats" << endl;
            cout << "3 - Show Current Weapon" << endl;
            cout << "4 - Quit" << endl;
            cout << "\nEnter the number: ";
            cin >> playerInput;
            system("clear");
            switch(playerInput)
                {
                    case 1:
                        {
                        fight(monsterRate, player);
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
                }
            
        }
    return 0;
}


void fight(int rate, Player player)
{
    bool inCombat = 1;
    int playerOption{ 0 };
    int playerDamage = player.attackDamage();
   
    if (rate == 1)
    {
        Rat monster = Rat();
        int monsterDamage = monster.attackDamage();

        if (player.speed > monster.speed)
        {
           
            while (inCombat)
            {
                cout << "You are being attacked by a " << monster.name << endl;
                cout << "You attack first" << endl;
                cout << "What do you choose to do?" << endl;
                cout << "1 - Attack" << endl;
                cout << "2 - Run (Not Implamented)" << endl;
                cout << "Your Choice: ";
                cin >> playerOption;
                system("clear");
                if (playerOption == 1)
                {
                    monster.takeDamage(playerDamage);
                    if (monster.health <= 0)
                    {
                        inCombat = 0;
                        cout << "You killed " << monster.name << endl;
                        break;
                    }
                    else
                    {
                        cout << monster.name << " is at " << monster.health << " HP" << endl;
                    }

                    player.takeDamage(monsterDamage);

                    if (player.health <= 0)
                    {
                        inCombat = 0;
                        cout << monster.name << " killed you" << endl;
                        break;
                    }
                    else
                    {
                        cout << "You are at " << player.health << " HP" << endl;
                    }

                }
               /* system("cls");*/
            }
        }
        else if (player.speed < monster.speed)
        {
            while (inCombat)
            {
                cout << "You are being attacked by a " << monster.name << endl;
                cout << monster.name << " attacks first." << endl;
                cout << "What do you choose to do?" << endl;
                cout << "1 - Attack" << endl;
                cout << "2 - Run (Not Implamented)" << endl;
                cout << "Your Choice: ";
                cin >> playerOption;
                system("clear");
                if (playerOption == 1)
                {

                    player.takeDamage(monsterDamage);

                    if (player.health <= 0)
                    {
                        inCombat = 0;
                        cout << monster.name << " killed you" << endl;
                        break;
                    }
                    else
                    {
                        cout << "You are at " << player.health << " HP" << endl;
                    }


                    monster.takeDamage(playerDamage);
                    if (monster.health <= 0)
                    {
                        inCombat = 0;
                        cout << "You killed " << monster.name << endl;
                        break;
                    }
                    else
                    {
                        cout << monster.name << " is at " << monster.health << " HP" << endl;
                    }
                }
                else if (playerOption == 2)
                {
                    cout << "\nNot Implamented\n" << endl;
                }
                //system("cls");
            }
        }
       
    }
    else if (rate == 2)
    {
        Bat monster = Bat();
        int monsterDamage = monster.attackDamage();

        if (player.speed > monster.speed)
        {
            while (inCombat)
            {
                cout << "You are being attacked by a " << monster.name << endl;
                cout << "What do you choose to do?" << endl;
                cout << "1 - Attack" << endl;
                cout << "2 - Run (Not Implamented)" << endl;
                cout << "Your Choice: ";
                cin >> playerOption;
                system("clear");
                if (playerOption == 1)
                {
                    monster.takeDamage(playerDamage);
                    if (monster.health <= 0)
                    {
                        inCombat = 0;
                        cout << "You killed " << monster.name << endl;
                        break;
                    }
                    else
                    {
                        cout << monster.name << " is at " << monster.health << " HP" << endl;
                    }

                    player.takeDamage(monsterDamage);

                    if (player.health <= 0)
                    {
                        inCombat = 0;
                        cout << monster.name << " killed you" << endl;
                        break;
                    }
                    else
                    {
                        cout << "You are at " << player.health << " HP" << endl;
                    }

                }
                else if (playerOption == 2)
                {
                    cout << "\nNot Implamented\n" << endl;
                }
                //system("cls");
            }
        }
        else if (player.speed < monster.speed)
        {
            while (inCombat)
            {
                cout << "You are being attacked by a " << monster.name << endl;
                cout << monster.name << " attacks first." << endl;
                cout << "What do you choose to do?" << endl;
                cout << "1 - Attack" << endl;
                cout << "2 - Run (Not Implamented)" << endl;
                cout << "Your Choice: ";
                cin >> playerOption;
                system("clear");
                if (playerOption == 1)
                {

                    player.takeDamage(monsterDamage);

                    if (player.health <= 0)
                    {
                        inCombat = 0;
                        cout << monster.name << " killed you" << endl;
                        break;
                    }
                    else
                    {
                        cout << "You are at " << player.health << " HP" << endl;
                    }


                    monster.takeDamage(playerDamage);
                    if (monster.health <= 0)
                    {
                        inCombat = 0;
                        cout << "You killed " << monster.name << endl;
                        break;
                    }
                    else
                    {
                        cout << monster.name << " is at " << monster.health << " HP" << endl;
                    }
                }
                else if (playerOption == 2)
                {
                    cout << "\nNot Implamented\n" << endl;
                }
                //system("cls");
            }
        }
    
    }
}
