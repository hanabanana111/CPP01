#include"Zombie.hpp"

Zombie::Zombie(const std::string& name):
    name_(name)
{}

Zombie::~Zombie()
{
    std::cout << this->name_ << ": ..." << std::endl;
}

void Zombie::announce( void )
{
    std::cout << this->name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
