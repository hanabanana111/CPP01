#include"Zombie.hpp"

int main()
{
    try{
        std::string in_n_str;
        long in_n;
        std::string in_name;
        Zombie *zombies;

        setZombiesNumber(in_n_str,in_n ,"Put number of Zombies");
        setZombiesName(in_name, "Put name of Zombies");
        zombies = zombieHorde( in_n, in_name );
        for(long i = 0; i < in_n; i++ )
        {
            std::cout << i << " : " << std::flush;
            zombies[i].announce();
        }
        delete []zombies;
    }
    catch(const std::bad_alloc& e)
    {
        std::cerr << "Bad alloc error" << std::endl;
        std::exit(1);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error" << std::endl;
        std::exit(2);
    }
    return 0;
}

bool isStringDigits(const std::string& str)
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

void setZombiesNumber(std::string& in_n_str, long& in_n, const std::string& message)
{
    std::stringstream ss;

    std::cout << message << std::endl;
    std::getline(std::cin, in_n_str);
    if(std::cin.eof() || std::cin.fail() || std::cin.bad())
        printErrorExit("std::cin error");
    else if(in_n_str.empty())
        printErrorExit("Empty input");
    ss << in_n_str;
    ss >> in_n;
    if(isStringDigits(in_n_str) == false)
        printErrorExit("Invalid number");
    else if( in_n_str.length() > 10)
        printErrorExit("Invalid number");
    else if (in_n > std::numeric_limits<int>::max())
        printErrorExit("Invalid number");
    else if( in_n < std::numeric_limits<int>::min())
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
