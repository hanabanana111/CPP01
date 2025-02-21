#ifndef ZOMBIE_H
#define ZOMBIE_H

#include"Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );
void setZombiesName(std::string& name, const std::string& message);
void setZombiesNumber(int& in_n, const std::string& message);

#endif