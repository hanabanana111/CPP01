#include"Zombie.hpp"
#include <sstream> 

int main()
{
    std::string in_n_str;
    int in_n;
    std::stringstream ss;
    std::string in_name;
    Zombie *zombies;

    setZombiesNumber(in_n_str, "Put number of Zombies");
    setZombiesName(in_name, "Put name of Zombies");
    ss << in_n_str;
    ss >> in_n;
    zombies = zombieHorde( in_n, in_name );
    for(int i = 0; i < in_n; i++ )
    {
        std::cout << i << " : " << std::flush;
        zombies[i].announce();
    }
    delete []zombies;
    return 0;
}

bool isStringDigits(std::string& str)
{
    for(int i = 0; str[i]; i++)
    {
        if(!std::isdigit(str[i]))
        return false;
    }
    return true;
}

void printErrorExit(const char* str)
{
    std::cerr << str << std::endl;
    exit(EXIT_FAILURE);
}

void setZombiesNumber(std::string& in_n_str, const std::string& message)
{
    std::cout << message << std::endl;
    std::getline(std::cin, in_n_str);
    if(std::cin.eof() || std::cin.fail() || std::cin.bad())
        printErrorExit("std::cin error");
    else if(in_n_str.empty())
        printErrorExit("Empty input");
    else if(isStringDigits(in_n_str) == false || in_n_str.length() > 7)
        printErrorExit("Invalid number");
}

void setZombiesName(std::string& name,const std::string& message)
{
    std::cout << message << std::endl;
    std::getline(std::cin, name);
    if(std::cin.eof() || std::cin.fail() || std::cin.bad())
        printErrorExit("std::cin error");
    else if(name.empty())
        printErrorExit("Empty input");
}
