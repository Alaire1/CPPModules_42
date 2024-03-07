#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	std::cout  << "Weapon constructor called" << std::endl;
	this->setType(type);
}

Weapon::~Weapon()
{
	std::cout << "Weapon destructor called" << std::endl;
}

std::string Weapon::getType() const
{
	return (this->_type);
}

void Weapon::setType(std::string newType)
{
	this->_type = newType;
}
