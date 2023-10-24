#include "../headers/Player.h"

// Constructor with initalizer list
Player::Player(std::string x)
    : name{x}, strength{Player::randomNumber(time(nullptr))}, speed{Player::randomNumber(time(nullptr) + 1)}
{
}

// Member Methods
int Player::randomNumber(time_t num)
{
    srand((unsigned)num);
    return 1 + (rand() % 10);
}
int Player::attackDamage()
{
    return weaponDamage + strength;
}

void Player::showStats()
{
    std::cout << "Player: " << name << std::endl;
    std::cout << "Score: " << score << std::endl;
    std::cout << "Health: " << health << std::endl;
    std::cout << "Strength: " << strength << std::endl;
    std::cout << "Speed: " << speed << std::endl;
    std::cout << "Coins: " << coins << std::endl;
}

void Player::showCurrentWeapon()
{
    std::cout << "Sword" << std::endl;
    std::cout << "Base Damage: " << weaponDamage << std::endl;
}

void Player::takeDamage(int damageValue)
{
    Player::health = Player::health - damageValue;
}

void Player::updateScore()
{
    score += 1;
}

int Player::getHealth()
{
    return health;
}

int Player::getSpeed()
{
    return speed;
}



void Player::setHealth(int num)
{
    health += num;
}

int Player::getCoins()
{
    return coins;
}

void Player::setCoins(int num)
{
    coins += num;
}

void Player::addToInventory(std::string item)
{
    int count{0};
    for (auto i : inventory)
    {
        if (i["name"] == item)
        {
            i["count"] += 1;
        }
        count += 1;
    }

    inventory[count]["name"] = item;
    inventory[count]["count"] = 1;
}

void Player::getInventory()
{
    if (inventory.is_null() == 1)
    {
        std::cout << "Inventory Empty" << std::endl;
        std::cout << '\n';
    }
    else
    {
        for (auto i : inventory)
        {
            std::cout << i["name"] << std::endl;
            std::cout << i["count"] << std::endl;
            std::cout << '\n';
        }
    }
}
