#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_name = "Jean";
    this->_EnergyPoints = 100;
    this->_HitPoint = 100;
    this->_AttackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_HitPoint = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
    std::cout << "FragTrap constructor with name called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->_name << " requests a positive high five!" << std::endl;
}