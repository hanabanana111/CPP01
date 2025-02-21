#include"Zombie.h"

int main()
{
    int in_n;
    std::string in_name;
    Zombie *zombies;

    setZombiesNumber(in_n, "Put number of Zombies");
    setZombiesName(in_name, "Put name of Zombies");
    zombies = zombieHorde( in_n, in_name );
    for(int i = 0; i < in_n; i++ )
    {
        std::cout << i << " : " << std::flush;
        zombies[i].announce();
    }
    delete []zombies;
    return 0;
}

void setZombiesNumber(int& in_n, const std::string& message)
{
    std::cout << message << std::endl;
    std::cin >> in_n;
    if(std::cin.eof() || std::cin.fail() || std::cin.bad())
    {
        std::cerr << "std::cin error" << std::endl;
        exit(EXIT_FAILURE);
    }
}

void setZombiesName(std::string& name,const std::string& message)
{
    std::cout << message << std::endl;
    std::cin >> name;
    if(std::cin.eof() || std::cin.fail() || std::cin.bad())
    {
        std::cerr << "std::cin error" << std::endl;
        exit(EXIT_FAILURE);
    }
}
