//#include "test.cpp"
#include <iostream>
#include <string>
#include "Player.cpp"
#include "Bat.cpp"
#include "Rat.cpp"

using namespace std;

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

            switch(playerInput)
                {
                    case 1:
                        {
                            if(monsterRate == 1)
                            {
                                Rat monster = Rat();

                                if(player.speed > monster.speed)
                                {
                                    /*
                                        Attack Loop
                                        Player will attack
                                        Monster health decrease
                                        Monster attack
                                        Player health decrease
                                        Repeat till one has no health
                                        If Player loses show game over
                                        If monster loses show player status and then options screen
                                        */
                                }
                            }
                            else if(monsterRate == 2)
                            {
                                Bat monster = Bat();
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
                }
        }
    return 0;
}