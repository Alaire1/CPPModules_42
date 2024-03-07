#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl is born" << std::endl;
	this->_levels[0]._level = "DEBUG";
	this->_levels[0]._func = &Harl::debug;
	this->_levels[1]._level = "INFO";
	this->_levels[1]._func = &Harl::info;
	this->_levels[2]._level = "WARNING";
	this->_levels[2]._func = &Harl::warning;
	this->_levels[3]._level = "ERROR";
	this->_levels[3]._func = &Harl::error;
}

Harl::~Harl()
{
	std::cout << "Harl is dead" << std::endl;
}

void Harl::debug(void)
{
	std::string str = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
	std::cout << str << std::endl;
}

void Harl::info(void)
{
	std::string str = "I cannot believe adding extra bacon costs more money. You don't put enough! If you did I would not have to ask for it!";
	std::cout << str << std::endl;
}

void Harl::warning(void)
{
	std::string str = "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.";
    std::cout << str << std::endl;
}

void Harl::error(void)
{
	std::string str =  "This is unacceptable! I want to speak to the manager now.";
	std::cout << str << std::endl;
}

void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_levels[i]._level == level)
		{
			(this->*_levels[i]._func)();
			return ;
		}
	}
	std::cout << "Invalid level" << std::endl;
}

