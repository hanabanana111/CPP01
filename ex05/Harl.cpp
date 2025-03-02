#include"Harl.hpp"

void Harl::complain( std::string level)
{
    void (Harl::*complaints[])() = {&Harl::_debug, &Harl::_info,
                                    &Harl::_warning, &Harl::_error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for(int i = 0; i < 4; i++)
    {
        if(level == levels[i])
        {
            (this->*complaints[i])();
            break;
        }
    }
}

void Harl::_debug( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::_info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::_warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::_error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
