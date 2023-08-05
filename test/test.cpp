#include "../headers/Player.h"
#include "../headers/Enemy.h"
#include <iostream>

using namespace std;

static void unitTests()
{
    cout << "Player Class Unit Tests\n" << endl;

    // Creates the test Player object
    Player test("test");
    time_t currentTime = time(NULL);

    cout << "Test --> Player::getHelath()" << endl;
    cout << "Expects --> Gets the player's current health\n" << endl;
    cout << "Player Health: " << test.getHealth() << endl;
    cout << "\n****************************\n" << endl;

    cout << "Test --> Player::randomNumber()" << endl;
    cout << "Expects --> randomly genorated number form 1 to 10\n" << endl;
    int rand = test.randomNumber(currentTime + 2);
    cout << rand << endl;
    cout << "\n****************************\n" << endl;

    cout << "Test --> Player::attackDamage()" << endl;
    cout << "Expects --> To return the Sum of 2 + randomNumber()\n" << endl;
    int damage = test.attackDamage();
    cout << damage << endl;
    cout << "\n****************************\n" << endl;

    cout << "Test --> Player::showStats()" << endl;
    cout << "Expects --> Display player name, strength, and speed\n" << endl;
    test.showStats();
    cout << "\n****************************\n" << endl;

    cout << "Test --> Player::showCurrentWeapon()" << endl;
    cout << "Expects --> Display Sword and damage\n" << endl;
    test.showCurrentWeapon();
    cout << "\n****************************\n" << endl;

    cout << "Test --> Player::takeDamage()" << endl;
    cout << "Expects --> Player health to by given int value\n" << endl;
    cout << "Player Health: " << test.getHealth() << endl;
    test.takeDamage(5);
    cout << "Player Health after 5 points of damage: " << test.getHealth() << endl;
    cout << "\n****************************\n" << endl;
}
