#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include<string.h>
#include <cstdlib>
#include <cerrno>

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        void announce( void );
        std::string getZombieName();
        void setZombieName(const std::string& new_name);
    private:
        std::string name_;
};

#endif