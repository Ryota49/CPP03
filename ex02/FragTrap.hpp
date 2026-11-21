#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

    public :
        FragTrap();
        ~FragTrap();
        FragTrap(const FragTrap &other);
        FragTrap &operator=(const FragTrap &other);
        FragTrap(std::string name);
        void highFivesGuys(void);
};

#endif