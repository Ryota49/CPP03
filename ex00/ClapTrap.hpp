#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <climits>

class ClapTrap {

    private :
        std::string _name;
        unsigned int _HitPoint;
        unsigned int _EnergyPoints;
        unsigned int _AttackDamage;

    public :
        ClapTrap();
        ClapTrap(const ClapTrap &other);          
        ClapTrap &operator=(const ClapTrap &other);
        ClapTrap(std::string name);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif