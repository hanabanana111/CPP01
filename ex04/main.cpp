#include"SedIsForLosers.h"

int printError(const char *str)
{
    std::cerr << str << std::endl;
    return(0);
}

int main(int argc, char *argv[])
{
    std::string line;
    Replace replace;

    if(argc != 4)
        return (printError("Arguments error"));
    std::ifstream inputFile(argv[1]);
    if(inputFile.fail())
        return (printError("Input file open error"));
    std::string outputFileName = argv[1];
    size_t pos = outputFileName.find_last_of(".");
    if (pos != std::string::npos)
        outputFileName = outputFileName.substr(0, pos);
    outputFileName += ".replace";
    std::ofstream outputFile(outputFileName.c_str());
    if(outputFile.fail())
        return (printError("Output file open error"));
    std::string argv2 = argv[2];
    std::string argv3 = argv[3];
    while(std::getline(inputFile, line))
    {
        replace.setNewLine(line, argv2, argv3);
        outputFile << replace.getNewLine() << std::endl;
    }
    inputFile.close();
    outputFile.close();
}
