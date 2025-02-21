#include"Zombie.h"

int main()
{
    Zombie* new_zombie_p;

    new_zombie_p = newZombie("new_zombieeeeeeee");    
    new_zombie_p->announce();
    delete new_zombie_p;

    randomChump("chump");
    return 0;
}
