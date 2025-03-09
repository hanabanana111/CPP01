#include"./HumanA.hpp"

HumanA::HumanA(const std::string &new_name, Weapon& new_weapon):
name_(new_name), weapon_type_(""), weapon_(new_weapon)
{}

void HumanA::setWeaponName(const std::string new_weapon_type)
{
    if(this->weapon_type_ != "")
        std::cout << this->name_ << " said \"OK! come back! " << weapon_type_ << "\"" <<std::endl;
    this->weapon_type_ = "";
    for(unsigned long i = 0; i < new_weapon_type.size(); i++)
    {
        if (new_weapon_type[i] == ' ')
            break;
        this->weapon_type_ += new_weapon_type[i];
    }
    std::cout << this->name_ << " sent out " << weapon_type_ << std::endl;
}

std::string HumanA::getWeaponName() const
{
    return this->weapon_type_;
}

void HumanA::attack()
{
    if(this->weapon_type_.compare(this->weapon_.getType()))
        setWeaponName(this->weapon_.getType());
    std::string type = this->weapon_.getType();
    std::cout << this->name_ << " attacks with their " << type << std::endl;
    if(type == "Magikarp Splash")
        std::cout << "No effect!" << std::endl;
}

HumanA::~HumanA()
{
    std::cout << this->name_ << " Got away safety!" << std::endl;
}
