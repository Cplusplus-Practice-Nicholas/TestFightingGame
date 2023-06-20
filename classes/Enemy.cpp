#include <iostream>
#include <fstream>
#include <string>
#include <nlohmann/json.hpp>

using namespace std;

class Enemy
{
public:
    // Atrrabutes
    int health{ 0 };
    string name{ "y"};
    int strength{ 0 };
    int speed{ 0 };
    int damage{ 0 };

    Enemy(string a, int b, int c, int d, int e)
    {
        name = a;
        health = b;
        strength = c;
        speed = d;
        damage = e;
    }
    
    // Methods
    int attackDamage()
    {
        return damage + strength;
    }

    void takeDamage(int damageValue)
    {
        health = health - damageValue;
    }

    static Enemy createMonster()
    {
        using json = nlohmann::json;

        // Gets random number and converts to a string
        srand(time(nullptr));
        int randomId = 1 + (rand() % 3);
        string convertedId = to_string(randomId);

        // Open a JSON file
        ifstream f("json/enemy.json");
        json data = json::parse(f);

        json monsterData = data[convertedId];

        Enemy monster = Enemy(monsterData["name"], monsterData["health"], monsterData["strength"], monsterData["speed"], monsterData["damage"]);

        return monster;
    }
};
