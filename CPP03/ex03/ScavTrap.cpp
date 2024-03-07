#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "< ScavTrap >" << this->_name << " is called" << std::endl;
}


ScavTrap::~ScavTrap() 
{
    std::cout << "< ScavTrap > - " << this->_name << " destructed." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if ((unsigned int)this->_energyPoints == 0)
    {
        std::cout << "< ScavTrap > - " << this->_name << " has no energy points left!" << std::endl;
        return ;
    }
    this->_energyPoints--;
    std::cout << "< ScavTrap > - " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "< ScavTrap > - " << this->_name << " has entered in Gate keeper mode." << std::endl;
}

