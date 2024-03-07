#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

#pragma once // Prevent multiple inclusion of the header file

class PhoneBook
{
	private:
		Contact _contacts[8];
		int _index;
        int _current;
        std::string green;
        std::string red;
        std::string reset;
		bool isNumeric(const std::string& str);
		std::string getInput(const std::string& prompt);

	public:
		PhoneBook();
		~PhoneBook();
		void add(void);
		void search(void);
		std::string getGreenColor() const;
        std::string getRedColor() const;
        std::string getResetColor() const;
        void displayBanner(void);       
};

#endif
