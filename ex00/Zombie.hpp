#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie
{
    public:
        Zombie(const std::string& name);
        ~Zombie();
        void announce( void );
    private:
        std::string name_;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif