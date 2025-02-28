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
    return true;
}

std::ifstream InputFile::getInputFile()
{
    return this->input_file_;
}

InputFile::~InputFile()
{
    this->getInputFile().close();
}
