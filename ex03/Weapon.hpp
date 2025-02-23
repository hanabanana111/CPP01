#ifndef WHEAPON_HPP
#define WHEAPON_HPP

#include <iostream>
#include <string> 
#include <cstdlib>
#include <cerrno>

class Weapon
{
    public:
        Weapon(const std::string &new_type);
        ~Weapon();
        std::string getType() const;
        void setType(const std::string &new_type);
    private:
        std::string type_;

};

#endif
