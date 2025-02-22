#ifndef HUMANB_HPP
#define HUMANB_HPP

#include"./Weapon.hpp"

class HumanB
{
    public:
        HumanB(const std::string &new_name);
        ~HumanB();
        void setWeapon(Weapon &new_weapon);
        void attack() const;
    private:
        Weapon weapon_;
        std::string name_;
};

#endif
