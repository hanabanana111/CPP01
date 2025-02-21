#include"Zombie.h"

Zombie* newZombie( std::string name )
{
    Zombie* new_zombie_p;

    new_zombie_p = new Zombie();
    new_zombie_p->setZombieName(name);
    return new_zombie_p;
}
