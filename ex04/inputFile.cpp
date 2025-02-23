#include"inputFile.hpp"

InputFile::InputFile():
{}

bool InputFile::setInputFile(const std::string &input_file_path)
{
    this->input_file_.open(input_file_path);
    if(this->input_file_.fail())
    {
        std::cerr << "Error Opening file" << std::endl;
        return false;
    }
}

std::ofstream InputFile::getInputFile() const
{}

InputFile::~InputFile()
{}
