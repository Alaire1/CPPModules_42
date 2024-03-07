#pragma once
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
    private:
        

    public:
        FragTrap();
        FragTrap(const std::string &name);
        ~FragTrap();

    void    highFivesGuys( void );
};