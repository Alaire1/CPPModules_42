#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{

}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "* FragTrap * " << this->_name << " is born!" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "* FragTrap * " << this->_name << " is dead!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if ( this->_energyPoints <= 0 ) 
    {
        std::cout << "* FragTrap * " << this->_name << " is out of energy." << std::endl;
        return;
    }
    this->_energyPoints--;
    std::cout << "* FragTrap * " << this->_name << " is asking for high fives!" << std::endl;
}

