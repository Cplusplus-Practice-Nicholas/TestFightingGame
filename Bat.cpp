#include "Enemy.cpp"



using namespace std;

class Bat: public Enemy
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