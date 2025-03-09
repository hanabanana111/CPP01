#ifndef REPLACE_HPP
#define REPLACE_HPP

#include"main.hpp"

class Replace
{
    public:
        Replace();
        ~Replace();
        void setNewFile(const std::string &pre_file, std::string &s1, std::string &s2);
        std::string getNewFile() const;
    private:
        std::string new_file_;
};

#endif