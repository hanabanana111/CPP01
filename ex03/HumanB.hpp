#ifndef HUMANB_HPP
#define HUMANB_HPP

#include"./Weapon.hpp"

class HumanB
{
    public:
        HumanB(const std::string &new_name);
        ~HumanB();
        void setWeapon(Weapon &new_weapon);
        void attack();
    private:
        void setWeaponName(const std::string new_weapon_name);
        std::string getWeaponName() const;
        std::string name_;
        std::string weapon_type_;
        Weapon *weapon_;
};

#endif
