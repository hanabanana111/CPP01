#include"./HumanA.hpp"
#include"./HumanB.hpp"

int main()
{
    {
        Weapon pokemon = Weapon("Kodak Amnesia");
        HumanA Yosshii("Yosshii", pokemon);
        Yosshii.attack();
        pokemon.setType("Pippi Metronome");
        Yosshii.attack();
    }
    {
        Weapon pokemon = Weapon("Kodak Amnesia");
        HumanB Hana("Hana");
        Hana.setWeapon(pokemon);
        Hana.attack();
        pokemon.setType("Pippi Metronome");
        Hana.attack();
    }
    std::cout << std::endl;
    {
        Weapon pokemon = Weapon("Kodak Amnesia");
        HumanA Yosshii("Yosshii", pokemon);
        Yosshii.attack();
        HumanB Hana("Hana");
        Hana.setWeapon(pokemon);
        Hana.attack();
        pokemon.setType("Pippi Metronome");
        Yosshii.attack();
        Hana.attack();
        pokemon.setType("Magikarp Splash");
        Yosshii.attack();
        Hana.attack();
    }
    return 0;
}
