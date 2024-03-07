#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::getInfo(const std::string& data) {
  if (data == "firstName") {
    return getFirstName();
  } else if (data == "lastName") {
    return getLastName();
  } else if (data == "nickname") {
    return getNickname();
  } else {
    return "";
  }
}

void Contact::setFirstName(std::string firstName)
{
    this->_firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
    this->_lastName = lastName;
}

void Contact::setNickname(std::string nickname)
{
    this->_nickname = nickname;
}


void Contact::setPhoneNumber(std::string phoneNumber)
{
    this->_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
    this->_darkestSecret = darkestSecret;
}

std::string Contact::getFirstName() const
{
    return this->_firstName;
}

std::string Contact::getLastName() const
{
    return this->_lastName;
}

std::string Contact::getNickname() const
{
    return this->_nickname;
}

std::string Contact::getPhoneNumber() const
{
    return this->_phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
    return this->_darkestSecret;
}

void Contact::printContact() const {
    std::cout << "First name: " << getFirstName() << std::endl;
    std::cout << "Last name: " << getLastName() << std::endl;
    std::cout << "Nickname: " << getNickname() << std::endl;
    std::cout << "Phone number: " << getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << getDarkestSecret() << std::endl;
}
