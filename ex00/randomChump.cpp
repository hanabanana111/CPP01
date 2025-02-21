#include"Zombie.h"

void randomChump( std::string name )
{
    Zombie new_zombie;

    new_zombie.setZombieName(name);
    new_zombie.announce();
}
