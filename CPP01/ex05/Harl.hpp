#pragma once
#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl
{
	private:
		struct _lvl
		{
			std::string _level;
			void (Harl::*_func)(void);
		};
		struct _lvl _levels[4];
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:
		Harl();
		~Harl();
		void complain(std::string level);	
};

#endif
