#ifndef HUMANA_HPP
#define HUMANA_HPP

#include"./Weapon.hpp"

class HumanA
{
    public:
        HumanA(const std::string &new_name, Weapon &new_weapon);
        ~HumanA();
        void attack();
    private:
        void setWeaponName(const std::string new_weapon_name);
        std::string getWeaponName() const;
        std::string name_;
        std::string weapon_type_;
        Weapon *weapon_;
};

#endif