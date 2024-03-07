#include "DiamondTrap.hpp"

int	main(void)
{
	{
		DiamondTrap	diamond("Machine1");

		diamond.attack("human");
		diamond.takeDamage(50);
		diamond.beRepaired(10);
		diamond.getStats();
		diamond.highFivesGuys();
		diamond.whoAmI();
		diamond.guardGate();
		diamond.takeDamage(50);
		diamond.getStats();
		diamond.takeDamage(50);
		diamond.attack("human");
	}
	std::cout << std::string(50, '-') << std::endl;
	return (0);
}
