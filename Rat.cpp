#include "Enemy.cpp"



using namespace std;

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