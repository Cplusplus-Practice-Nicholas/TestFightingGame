#include "../headers/Player.h"

// Constructor with initalizer list
Player::Player(std::string x)
    : name{x}, strength{Player::randomNumber(time(nullptr))}, speed{Player::randomNumber(time(nullptr)+1)}
    {
        
    }

// Member Methods
int Player::randomNumber(time_t num)
    {
        srand((unsigned) num);
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