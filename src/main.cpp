#include <iostream>
#include <string>
#include "headers/Player.h"
#include "headers/Enemy.h"
#include "headers/helper.h"

using namespace std;

int main()
{
   // Game Variables
   bool gameOn{1};
   string playerName;
   int playerInput{0};

   cout << "Enter the name of your Player: ";
   getline(cin, playerName);
   Player player = Player(playerName);
   cout << "\n\n";
   player.showStats();
   cout << '\n';

   while (gameOn)
   {
      cout << "Choose your next action" << endl;
      cout << "1 - Next Fight" << endl;
      cout << "2 - Show Stats" << endl;
      cout << "3 - Show Current Weapon" << endl;
      cout << "4 - Show Player Inventory" << endl;
      cout << "5 - Quit" << endl;
      cout << "\nEnter the number: ";
      cin >> playerInput;
      // system("clear");
      system("cls");
      switch (playerInput)
      {
      case 1:
      {
         fight(player);
         if (player.getHealth() <= 0)
         {
            gameOn = 0;
            cout << "***********************\n"
                 << endl;
            cout << "GAME OVER" << endl;
            cout << "\n*********************\n"
                 << endl;
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
      case 4:
      {
         cout << '\n';
         player.getInventory();
         cout << '\n';
      }
      break;
      case 5:
      {
         gameOn = 0;
         cout << "***********************\n"
              << endl;
         cout << "GAME OVER" << endl;
         cout << "\n*********************\n"
              << endl;
      }
      }
   }

   return 0;
}
