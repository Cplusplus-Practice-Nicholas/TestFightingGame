#include <iostream>
#include <string>

using namespace std;

class Enemy
{
public:
    // Public Atrrabutes
    int health{ 0 };
    string name{ "yy"};
    int strength{ 0 };
    int speed{ 0 };
    int damage{ 0 };
    time_t currentTime = time(NULL);

    // Methods
    int attackDamage()
    {
        return damage + strength;
    }

    void takeDamage(int damageValue)
    {
        health -= damageValue;
    }
    

};

class Bat : public Enemy
{
public:
    int rate{ 2 };
    Bat()
    {
        health = 5;
        name = "Bat";
        strength = 3;
        speed = 7;
        damage = 2;
    }
};


class Rat : public Enemy
{
public:
    int rate{ 1 };
    Rat()
    {
        health = 7;
        name = "Rat";
        strength = 5;
        speed = 4;
        damage = 3;
    }
};