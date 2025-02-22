#include"./Weapon.hpp"
#include"./HumanA.hpp"

HumanA(std::string new_name, Weapon& new_weapon):
name_(new_name),weapon_(new_weapon)
{}

void attack()
{
    std::cout << this->name_ << " attacks with their " << this->weapon_.getType() << std::endl;
}

~HumanA()
{
    std::cout << this->name_ << " cleaned up their " << this->weapon_.getType() << std::endl;
}
