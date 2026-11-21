#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Jean"), _HitPoint(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _HitPoint(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "Constructor with name given called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_HitPoint = other._HitPoint;
        this->_EnergyPoints = other._EnergyPoints;
        this->_AttackDamage = other._AttackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_HitPoint <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " has no HP left, he cannot attack!" << std::endl;
        return;
    }
    if (this->_EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " has no Energy points left, he cannot attack!" << std::endl;
        return;
    }
    this->_EnergyPoints--;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
    std::cout << "ClapTrap " << this->_name << " has " << this->_EnergyPoints << " Energy points left." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_HitPoint == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already dead, stop killing a dead man!" << std::endl;
        return;
    }
    if (amount >= this->_HitPoint)
    {
        this->_HitPoint = 0;
        std::cout << "ClapTrap " << this->_name << " is dead, no HP left!" << std::endl;
        return;
    }
    this->_HitPoint -= amount;
    std::cout << "ClapTrap " << this->_name << " is taking " << amount << " points of damage!" << std::endl;
    std::cout << "ClapTrap " << this->_name << " has " << this->_HitPoint << " HP left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_HitPoint <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " has no HP left, it cannot be repaired!" << std::endl;
        return;
    }
    if (this->_EnergyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " has no Energy points left, it cannot be repaired!" << std::endl;
        return;
    }
    if (amount > UINT_MAX - this->_HitPoint)
        this->_HitPoint = UINT_MAX;
    else
        this->_HitPoint += amount;
    this->_EnergyPoints--;
    std::cout << "ClapTrap " << this->_name << " repaired " << amount << " HP!" << std::endl;
    std::cout << "ClapTrap " << this->_name << " has " << this->_HitPoint << " HP." << std::endl;
    std::cout << "ClapTrap " << this->_name << " has " << this->_EnergyPoints << " Energy points left." << std::endl;
}