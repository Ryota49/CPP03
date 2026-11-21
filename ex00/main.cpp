#include "ClapTrap.hpp"

int main()
{
    std::cout << "\n--- CONSTRUCTORS ---\n" << std::endl;
    ClapTrap Jean("Jean");
    ClapTrap Adrien("Adrien");
    ClapTrap CopyJean(Jean);
    ClapTrap DefaultBot;

    DefaultBot = Adrien;

    std::cout << "\n--- TURN 1 (Basic attack) ---\n" << std::endl;
    Jean.attack("Adrien");
    Adrien.takeDamage(0);
    Adrien.attack("Jean");
    Jean.takeDamage(4);

    std::cout << "\n--- TURN 2 (Repair & Fatal damage) ---\n" << std::endl;
    Jean.beRepaired(2);
    Adrien.takeDamage(15);
    Adrien.attack("Jean");
    Adrien.beRepaired(5);

    std::cout << "\n--- TURN 3 (Energy depletion) ---\n" << std::endl;
    for (int i = 0; i < 10; i++)
        Jean.attack("a training dummy");

    std::cout << "\n--- DESTRUCTORS ---\n" << std::endl;
    return 0;
}