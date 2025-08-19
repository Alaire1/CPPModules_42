
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Name"), _grade(LOW_GRADE) {}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
    setGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): _name(src._name) {
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src) {
    _grade = src._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat() {}


std::string Bureaucrat::getName() const {
    return (_name);
}

int Bureaucrat::getGrade() const {
    return (_grade);
}
void Bureaucrat::incrementGrade() {
    setGrade(--_grade);
}

void Bureaucrat::decrementGrade() {
    setGrade(++_grade);
}

void Bureaucrat::setGrade(int grade) {
    if (grade > LOW_GRADE)
        throw GradeTooLowException();
    if (grade < HIGH_GRADE)
        throw GradeTooHighException();
    _grade = grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Exception: Grade too high.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Exception: Grade too low.");
}


std::ostream &operator<<(std::ostream &output, Bureaucrat const &input)
{
    output << input.getName() << ", grade is " << input.getGrade();
    return (output);
}
