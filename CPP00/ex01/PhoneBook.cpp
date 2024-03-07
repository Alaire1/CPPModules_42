#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->_current = 0;
    this->_index = 0;
    green = "\033[32m";
    red =  "\033[31m";
    reset = "\033[0m";
}

PhoneBook::~PhoneBook()
{
}

bool PhoneBook::isNumeric(const std::string& str) {
	if (str.empty()) {
        std::cout << red <<"\033[0;31mThe input is empty. Please enter a valid one:\033[0m" << reset << std::endl;
        return false;
    }
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
        if (!isdigit(*it)) {
			std::cout << red << "\033[0;31mPhone Number can only contain mumbers. Please enter a valid one:\033[0m" << reset << std::endl;
            return false; 
        }
    }
    return true; 
}

void PhoneBook::add(void)
{
    if (this->_index == 8)
        this->_index = 0;
    this->_contacts[this->_index].setFirstName(this->getInput("First name: "));
    this->_contacts[this->_index].setLastName(this->getInput("Last name: "));
    this->_contacts[this->_index].setNickname(this->getInput("Nickname: "));
    std::string phoneNumber = this->getInput("Phone number: ");
    while (!this->isNumeric(phoneNumber))
    {
        phoneNumber = this->getInput("Phone number: ");
    }
    this->_contacts[this->_index].setPhoneNumber(phoneNumber);
    this->_contacts[this->_index].setDarkestSecret(this->getInput("Darkest secret: "));
    this->_index++;
    if (this->_current < 8) {
        this->_current++;
    }
}


void PhoneBook::search(void)
{
    int index;
    std::string input;

    if (this->_current == 0)
    {
        std::cout << green <<"PhoneBook is empty. Please add a contact first." << reset << std::endl;
        return;
    }
    std::cout << "     index|first name| last name|  nickname" << std::endl;
      for (int i = 0; i < this->_current; i++)
    {
        std::cout << std::setw(10) << i << "|";
        if (this->_contacts[i].getInfo("firstName").length() > 10)
            std::cout << std::setw(9) << this->_contacts[i].getInfo("firstName").substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << this->_contacts[i].getInfo("firstName").substr(0, 10) << "|";
        if (this->_contacts[i].getInfo("lastName").length() > 10)
            std::cout << std::setw(9) << this->_contacts[i].getInfo("lastName").substr(0, 9) << ".|";
        else
            std::cout << std::setw(10) << this->_contacts[i].getInfo("lastName").substr(0, 10) << "|";
        if (this->_contacts[i].getInfo("nickname").length() > 10)
            std::cout << std::setw(9) << this->_contacts[i].getInfo("nickname").substr(0, 9) << "." << std::endl;
        else
            std::cout << std::setw(10) << this->_contacts[i].getInfo("nickname").substr(0, 10) << std::endl;
    }
    std::cout << green << "Enter index of the contact you want to see: " << reset << std::endl;
    std::getline(std::cin, input);
    if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
    {
        index = input[0] - '0';
        this->_contacts[index].printContact();
    }
    else
        std::cout << red << "Invalid input. Please try again." << reset << std::endl;
}


std::string PhoneBook::getInput(const std::string& prompt) {
    std::string input;
    std::cout << prompt;
    std::getline(std::cin, input);
    while (input.empty()) {
        std::cout << red << "Input cannot be empty. Please try again." << reset << std::endl;
        std::cout << prompt;
        std::getline(std::cin, input);
    }
    return input;
}

std::string PhoneBook::getGreenColor() const 
{
    return this->green;
}

std::string PhoneBook::getRedColor() const 
{
    return this->red;
}

std::string PhoneBook::getResetColor() const 
{
    return this->reset;
}

void PhoneBook::displayBanner(void) 
{
    std::cout << green << "-----------------------------------\n";
    std::cout << "|         MY PHONE BOOK           |\n";
    std::cout << "-----------------------------------\n" << reset;
}
int main()
{
    PhoneBook phoneBook;
    std::string input;
    phoneBook.displayBanner();

    std::cout << phoneBook.getGreenColor() << "Hello! I'm your PhoneBook assistant.\nUse one of the COMMANDs to start:" << std::endl;
    std::cout << "ADD, SEARCH or EXIT" << phoneBook.getResetColor() << std::endl;
    while (1)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, input);
        if (input == "ADD")
            phoneBook.add();
        else if (input == "SEARCH")
            phoneBook.search();
        else if (input == "EXIT")
            break;
        else
            std::cout << phoneBook.getRedColor() << "Invalid command. Please try again." << phoneBook.getResetColor() << std::endl;
    }
    return 0;
}
