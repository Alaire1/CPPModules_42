#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << this->_name << " is born !" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	this->_name = other._name;
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << this->_name << " is born !" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &other)
{
	this->_name = other._name;
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " is dead !" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
