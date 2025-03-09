#include"replace.hpp"

Replace::Replace():
new_file_("")
{}

void Replace::setNewFile(const std::string &pre_file, std::string &s1, std::string &s2)
{
    this->new_file_ = "";
    for(unsigned long i = 0; i < pre_file.size(); i++)
    {
        if(!pre_file.compare(i, s1.size(), s1))
        {
            this->new_file_ += s2;
            i += s1.size() - 1;
        }
        else
        {
            this->new_file_ += pre_file[i];
        }
    }
}

std::string Replace::getNewFile() const
{
    return new_file_;
}

Replace::~Replace()
{}
