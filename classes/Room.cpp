#include <iostream>
#include <vector>

using namespace std;

class Room
{


public:

static void generateRoom()
{

     string description[3] 
    {
        "You enter a dank dark room lit by only a single torch",
        "The room is warm and inviting with a soft light filling it",
        "A sickly smell hits you as you pass the rooms threshold"
    };

    string actionPhrase[2]
    {
        "You are being attacked",
        "You find the room empty"
    };   

    
    srand(time(nullptr));
    int randomDescription = 1 + (rand() % 3);

    srand(time(nullptr) + 1);
    int randomAction = 1 + (rand() % 2);

    cout << description[randomDescription] << endl;
    cout << actionPhrase[randomAction] << endl;
}

};