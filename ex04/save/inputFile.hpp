#ifndef INPUT_FILE_H
#define INPUT_FILE_H

#include"SedIsForLosers.h"

class InputFile
{
    public:
        InputFile();
        ~InputFile();
        bool setInputFile(const std::string &input_file_path);
        std::ifstream getInputFile();
    private:
        std::ifstream input_file_;
};

#endif