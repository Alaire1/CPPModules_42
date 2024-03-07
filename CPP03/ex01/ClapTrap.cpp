#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout <<"ClapTrap " << this->_name << " is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    if (this != &other)
    {
        this->_name = other._name;
        this->_hitPoints = other._hitPoints;
        this->_energyPoints = other._energyPoints;
        this->_attackDamage = other._attackDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if ((unsigned int)this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " has no energy points left!" << std::endl;
        return ;
    }
    this->_energyPoints--;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if ((unsigned int)this->_hitPoints <= amount)
    {
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
        return ;
    }
    this->_hitPoints -= amount;
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if ((unsigned int)this->_hitPoints + amount > 10)
    {
        std::cout << "ClapTrap " << this->_name << " has max hit points!" << std::endl;
        return ;
    }
    else if ((unsigned int)_energyPoints <= amount)
    {
        std::cout << "ClapTrap " << this->_name << " has no energy points left!" << std::endl;
        return ;
    }
    this->_energyPoints -= amount;
    this->_hitPoints += amount;
    std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points!" << std::endl;
}

