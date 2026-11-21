#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_name = "Jean";
    this->_HitPoint = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_HitPoint = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
    std::cout << "ScavTrap constructor with name called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return *this;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->_HitPoint <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " has no HP left, he cannot attack!" << std::endl;
        return;
    }
    if (this->_EnergyPoints <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " has no Energy points left, he cannot attack!" << std::endl;
        return;
    }
    this->_EnergyPoints--;
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
    std::cout << "ScavTrap " << this->_name << " has " << this->_EnergyPoints << " Energy points left." << std::endl;
}