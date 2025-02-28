#include"SedIsForLosers.h"

int printError(const char *str)
{
    std::cerr << str << std::endl;
    return(0);
}

std::string setOutputFileName(char *argv1)
{
    std::string fileName;
    size_t pos;

    fileName = argv1;
    pos = fileName.find_last_of(".");
    if (pos != std::string::npos)
        fileName = fileName.substr(0, pos);
    fileName += ".replace";
    return fileName;
}

int main(int argc, char *argv[])
{
    std::string line;
    Replace replace;
    std::ifstream inputFile(argv[1]);
    std::string argv2 = argv[2];
    std::string argv3 = argv[3];

    if(argc != 4)
        return (printError("Arguments error"));
    if(inputFile.fail())
        return (printError("Input file open error"));
    std::ofstream outputFile(setOutputFileName(argv[1]).c_str());
    if(outputFile.fail())
        return (printError("Output file open error"));
    while(std::getline(inputFile, line))
    {
        replace.setNewLine(line, argv2, argv3);
        outputFile << replace.getNewLine() << std::endl;
    }
    inputFile.close();
    outputFile.close();
}
