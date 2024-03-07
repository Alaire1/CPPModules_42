
#include "ScavTrap.hpp"

int main(void)
{
    int damage = 50;
    int repair_amount = 10;
    ScavTrap scavTrap("machine");

    scavTrap.attack("human");  
    scavTrap.takeDamage(damage);
    scavTrap.beRepaired(repair_amount);
    scavTrap.guardGate();
}