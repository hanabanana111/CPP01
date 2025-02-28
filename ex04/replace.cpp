#include"replace.hpp"

Replace::Replace():
new_line_("")
{}

void Replace::setNewLine(const std::string &line, std::string &s1, std::string &s2)
{
    this->new_line_ = "";
    for(unsigned long i = 0; i < line.size(); i++)
    {
        if(!line.compare(i, s1.size(), s1))
        {
            this->new_line_ += s2;
            i += s1.size() - 1;
        }
        else
        {
            this->new_line_ += line[i];
        }
    }
}

std::string Replace::getNewLine() const
{
    return new_line_;
}

Replace::~Replace()
{}
