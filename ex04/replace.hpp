#ifndef REPLACE_HPP
#define REPLACE_HPP

#include"SedIsForLosers.h"

class Replace
{
    public:
        Replace();
        ~Replace();
        void setNewLine(const std::string &line, std::string &s1, std::string &s2);
        std::string getNewLine() const;
    private:
        std::string new_line_;
};

#endif