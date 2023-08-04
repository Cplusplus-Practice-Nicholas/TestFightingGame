#include "Room.h"


int* Room::generateRoom()
{

     std::string description[3] 
    {
        "You enter a dank dark room lit by only a single torch",
        "The room is warm and inviting with a soft light filling it",
        "A sickly smell hits you as you pass the rooms threshold"
    };

    std::string actionPhrase[2]
    {
        "You are being attacked",
        "You find the room empty"
    };   

    
    srand(time(nullptr));
    int randomDescription = 1 + (rand() % 3);

    srand(time(nullptr) + 1);
    int randomAction = 1 + (rand() % 2);

    std::cout << description[randomDescription] << std::endl;
    std::cout << actionPhrase[randomAction] << std::endl;

    int arr[2] = {randomDescription, randomAction};

    int *arr_ptr = arr;
    
    return arr_ptr;
}