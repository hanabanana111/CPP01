#include"./HumanB.hpp"

HumanB::HumanB(const std::string& new_name):
name_(new_name), weapon_type_(""), weapon_(NULL)
{}
void HumanB::setWeaponName(const std::string new_weapon_type)
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
    std::cout << this->name_ << " sent ont " << weapon_type_ << std::endl;
}

std::string HumanB::getWeaponName() const
{
    return this->weapon_type_;
}

void HumanB::attack()
{
    if (this->weapon_ == NULL)
        return;
    if(this->weapon_type_.compare(this->weapon_->getType()))
        setWeaponName(this->weapon_->getType());
    std::string type = this->weapon_->getType();
    std::cout << this->name_ << " attacks with their " << type << std::endl;
    if(type == "Magikarp Splash")
        std::cout << "No effect!" << std::endl;
}

void HumanB::setWeapon(Weapon &new_weapon)
{
    this->weapon_ = &new_weapon;
}

// void HumanB::attack() const
// {
//     if (this->weapon_ == NULL)
//         return;
//     std::string type = this->weapon_->getType();
//     std::cout << this->name_ << " attacks with their " << type << std::endl;
//     if(type == "Magikarp Splash")
//         std::cout << "No effect!" << std::endl;
// }

HumanB::~HumanB()
{
    std::cout << this->name_ << " Got away safety!" << std::endl;
}
