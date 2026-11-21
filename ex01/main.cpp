#include "ScavTrap.hpp"

int main()
{
    std::cout << "\n--- CONSTRUCTORS ---\n" << std::endl;
    ScavTrap Jean;
    ScavTrap Adrien("Adrien");
    ScavTrap CopyJean(Jean);
    ScavTrap DefaultBot;

    DefaultBot = Adrien;

    std::cout << "\n--- TURN 1 (Basic attack & guardGate) ---\n" << std::endl;
    Jean.attack("Adrien");
    Adrien.takeDamage(20);
    Adrien.attack("Jean");
    Jean.takeDamage(20);
    Jean.guardGate();

    std::cout << "\n--- TURN 2 (Repair & Fatal damage) ---\n" << std::endl;
    Jean.beRepaired(5);
    Adrien.takeDamage(100);
    Adrien.attack("Jean");
    Adrien.beRepaired(5);

    std::cout << "\n--- TURN 3 (Energy depletion) ---\n" << std::endl;
    for (int i = 0; i < 50; i++)
        Jean.attack("a training dummy");

    std::cout << "\n--- DESTRUCTORS ---\n" << std::endl;
    return 0;
}