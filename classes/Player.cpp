#include <string>
#include <vector>
#include <iostream>
#include <stdlib.h>

using namespace std;

class Player
{
public:
    // Public Atrrabutes
    int health{ 10 };
    string name;
    int strength;
    int speed;
    int weaponDamage{ 2 };
    time_t currentTime = time(NULL);
    int score{0};

    // Constructor
    Player(string x)
    {
        name = x;
        strength = randomNumber(currentTime);
        speed = randomNumber(currentTime + 1);
    }

    // Methods
    int randomNumber(time_t num)
    {
        srand((unsigned) num);
        return 1 + (rand() % 10);
    }
    int attackDamage()
    {
        return weaponDamage + strength;
    }

    void showStats()
    {
        cout << "Player: " << name << endl;
        cout << "Score: " << score << endl;
        cout << "Health: " << health << endl;
        cout << "Strength: " << strength << endl;
        cout << "Speed: " << speed << endl;
    }

    void showCurrentWeapon()
    {
        cout << "Sword" << endl;
        cout << "Base Damage: " << weaponDamage << endl;
    }

   void takeDamage(int damageValue)
    {
        Player::health = Player::health - damageValue;
    }

    void updateScore()
    {
        score += 1;
    }


};