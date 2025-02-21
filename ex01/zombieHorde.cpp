#include"Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombies;

    if(N < 1)
    {
        std::cout << "Invalid number" << std::endl;
        exit(EXIT_SUCCESS);
    }
    zombies = new Zombie[N];

    for(int i = 0; i < N ; i++)
        zombies[i].setZombieName(name);
    return zombies;
}
