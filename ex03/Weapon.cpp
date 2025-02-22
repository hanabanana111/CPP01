#include"./Weapon.hpp"

std::string getType() const
{
    return this->type_;
}

void setType(const std::string &new_type)
{
    this->name_ = new_type;
}
