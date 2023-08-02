//#include "Player.h"
//#include <iostream>
//
//using namespace std;
//
//static void unitTests()
//{
//
//
//    cout << "Player Class Unit Tests" << endl;
//
//    // Creates the test Player object
//    Player test("test");
//    time_t currentTime = time(NULL);
//
//    // Test --> Player::randomNumber()
//    // Expects --> randomly genorated number form 1 to 10
//    cout << "\n****************************\n" << endl;
//    int rand = test.randomNumber(currentTime + 2);
//    cout << rand << endl;
//
//    // Test --> Player::attackDamage()
//    // Expects --> To return the Sum of 2 + randomNumber()
//    cout << "\n****************************\n" << endl;
//    int damage = test.attackDamage();
//    cout << damage << endl;
//
//    // Test --> Player::showStats()
//    // Expects --> Display player name, strength, and speed
//    cout << "\n****************************\n" << endl;
//    test.showStats();
//
//    // Test --> Player::showCurrentWeapon()
//    // Expects --> Display Sword and damage
//    cout << "\n****************************\n" << endl;
//    test.showCurrentWeapon();
//}
