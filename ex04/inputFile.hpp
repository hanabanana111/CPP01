#ifndef INPUT_FILE_H
#define INPUT_FILE_H

#include"SedIsForLosers.h"

class InputFile
{
    public:
        InputFile();
        ~InputFile();
        bool setInputFile(const std::string &input_file_path);
        std::ofstream getInputFile() const;
    private:
        std::ofstream input_file_;
};

#endif