#include"./Weapon.hpp"
#include"./HumanB.hpp"

HumanB(const std::string &new_name)
{
    this->name_ = new_name;
    this->weapon = NULL;
}

void setWeapon(Weapon &new_weapon)
{
    this->weapon = new_weapon;
}

void attack()
{
    if (!this->weapon)
        return;
    std::cout << this->name_ << " attacks with their " << this->weapon_.getType() << std::endl;
}

~HumanB()
{
    std::cout << this->name_ << " clean up their " << this->weapon_.getType() << std::endl;
}
