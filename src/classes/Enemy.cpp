#include "../headers/Enemy.h" 

// Constructor with initalizer list
Enemy::Enemy(std::string a, int b, int c, int d, int e) 
    : name{a}, health{b}, strength{c}, speed{d}, damage{e}
{
    
}    

// Member Methods
int Enemy::attackDamage()
{
    return damage + strength;
}

void Enemy::takeDamage(int damageValue)
{
    health = health - damageValue;
}

Enemy Enemy::createMonster()
{
    
// Gets random number and converts to a string
    srand(time(nullptr));
    int randomId = 1 + (rand() % 3);
    std::string convertedId = std::to_string(randomId);

// Open a JSON file
    Json::Value root;
    Json::Reader reader;
    std::ifstream data("../json/enemy.json");
    bool works = reader.parse(data, root);
    Json::Value::Members names = root.getMemberNames();
    for(int i{0}; i < 2; i++)
    {
        std::cout << names[i] << std::endl;
    }
    

    //Enemy monster = Enemy(monsterData["name"], monsterData["health"], monsterData["strength"], monsterData["speed"], monsterData["damage"]);

    //return monster;
}

int Enemy::getHealth()
{
    return health;
}

int Enemy::getSpeed()
{
    return speed;
}

std::string Enemy::getName()
{
    return name;
}
