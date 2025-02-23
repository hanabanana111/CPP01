#ifndef FILE_INFO_H
#define FILE_INFO_H

#include"SedIsForLosers.h"

class FileInfo
{
    public:
        FileInfo(const std::string &new_type);
        std::string getType() const;
        void setType(const std::string &new_type);
    private:
        std::string type_;

};

#endif