#include <iostream>
#include <string>

using namespace std;

class Enemy
{
public:
    // Public Atrrabutes
    int health;
    string name;
    int strength;
    int speed;
    int damage;
    time_t currentTime = time(NULL);

    // Methods
    int attackDamage()
    {
        return damage + strength;
    }
    

};