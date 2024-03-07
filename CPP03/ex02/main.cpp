
#include "FragTrap.hpp"

int main(void)
{
    int damage = 50;
    int repair_amount = 10;
   FragTrap fragTrap("machine");

   fragTrap.attack("human");  
   fragTrap.takeDamage(damage);
   fragTrap.beRepaired(repair_amount);
   fragTrap.highFivesGuys();
}