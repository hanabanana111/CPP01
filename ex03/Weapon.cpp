#include"./Weapon.hpp"

Weapon::Weapon(const std::string &new_type):
type_(new_type)
{}

std::string Weapon::getType() const
{
    return this->type_;
}

void Weapon::setType(const std::string &new_type)
{
    this->type_ = new_type;
}

Weapon::~Weapon()
{}
