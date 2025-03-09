#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include<string.h>
#include <cstdlib>
#include <cerrno>
#include <sstream> 
#include <limits>

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        void announce( void );
        std::string getZombieName() const;
        void setZombieName(const std::string& new_name);
    private:
        std::string name_;
};

Zombie* zombieHorde( int N, std::string name );
void setZombiesName(std::string& name, const std::string& message);
void setZombiesNumber(std::string& in_n_str, long& in_n, const std::string& message);
bool isStringDigits(const std::string& str);
void printErrorExit(std::string& str);

#endif