#include"Zombie.hpp"

Zombie::Zombie():
    name_("")
{}

Zombie::~Zombie()
{
    std::cout << this->name_ << ": ..." << std::endl;
}

void Zombie::announce( void )
{
    std::cout << this->name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getZombieName() const
{
    return this->name_;
}

void Zombie::setZombieName(const std::string& new_name)
{
    this->name_ = new_name;
}

