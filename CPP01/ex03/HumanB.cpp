#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "HumanB constructor called" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB destructor called" << std::endl;
}

void	HumanB::attack()
{
	if (this->_weapon != NULL && this->_weapon->getType() != "")
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with his bare hands" << std::endl;
}	


void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}
