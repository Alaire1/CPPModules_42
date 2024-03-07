Code written according to the rules of cpp98
# CPP 00
<details>
<summary>Exercises: </summary>
	<strong>ex00</strong><br>
This C++ program takes command-line arguments and prints them in uppercase, separated by spaces. It uses toupper from <cctype> for conversion. If no arguments are provided, it prints a "noise" message.<br>

<strong>ex01</strong><br>
<strong>ex02</strong><br>
Code defines an `Account` class representing a bank account. It includes methods for deposits, withdrawals, checking balance, and displaying account status. The class also tracks total number of accounts, total amount in all accounts, total deposits, and total withdrawals using static members. A timestamp is printed in console output using a private static method. The [constructor](#constructor) initializes a new account with a deposit, and the [destructor](#Destructor) closes the account.

</details>

# CPP 01
<details>
<summary>Exercises: </summary>
<strong>ex00</strong> <br>
	
<strong>ex01</strong> <br>
<strong>ex02</strong> <br>
<strong>ex03</strong> <br>
<strong>ex04</strong> <br>
<strong>ex05</strong> <br>
</details>

# CPP 02
<details>
<summary>Exercises: </summary>
<strong>ex00</strong> <br>	
<strong>ex01</strong> <br>
<strong>ex02</strong> <br>
</details>

# CPP 03
<details>
<summary>Exercises: </summary>
<strong>ex00</strong> <br>	
<strong>ex01</strong> <br>
<strong>ex02</strong> <br>
<strong>ex03</strong> <br>
</details>

# CPP 04
<details>
<summary>Exercises: </summary>
<strong>ex00</strong> <br>
	
<strong>ex01</strong> <br>
<strong>ex02</strong> <br>

</details>

# Cpp Class Elements
## Class
```cpp
class Weapon <-- name
{
    private: <-- private members
        std::string _type;

    public: <-- public members
        Weapon( std::string type);
        ~Weapon();
        std::string getType() const; <-- getter
        void setType(std::string newType); <-- setter

};
```
### Private memebers 
Private members of a class are elements of the class (variables or functions) that are only accessible from within methods of the same class. They are not accessible from outside the class or from subclasses.

### Public members
Public members of a class are elements of the class (variables or functions) that are accessible from anywhere where the object of the class is accessible. This means they can be accessed both from inside the class and from outside the class.
### Constructor
A constructor in C++ is a special member function of a class that is used to initialize objects of that class type. It has the same name as the class itself, has no return type, and is invoked whenever an instance of the class is created.
Example: 
```cpp
Account::Account( int initial_deposit ) : _amount(initial_deposit)
{
    _accountIndex = _nbAccounts;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
    Account::_nbAccounts++;
}
```
Constructor here takes value `initial-deposit` and assgning the value to `_amount`, later assigning few more varibles and displays timestamp.
### Destructor
A destructor in C++ is a special member function (can be identified by `~`) of a class that is executed whenever an object of the class goes out of scope or is explicitly deleted (delete key used). A destructor will have the exact same name as the class and it cannot return any value or take any parameters. Destructor can be very useful for releasing resources before coming out of the program like closing files, releasing memory, etc.
Example:
```cpp
Account::~Account()
{
	_accountIndex = _nbAccounts - 1;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << this->checkAmount();
	std::cout << ";closed" << std::endl;
	Account::_nbAccounts--;
}
```
Destructors do not take any input, what we can see here. We can specify what is happening like changing the values of variables and printng a message that this account has been closed as it is in the example above.
### Getters
Getters are methods used to get the value of private variables from a class. They are also known as accessor methods.
Example:
```cpp
int Account::getNbAccounts( void ) 
{
	return _nbAccounts;
}
```
In this example, `getNbAccounts()` is a getter method that returns the value of the private variable `_nbAccounts`.

### Setters
Setters are methods used to set the value of private variables in a class. They are also known as mutator methods.
Example:
```cpp
void Account::setNbAccounts(int nbAccounts) 
{
	_nbAccounts = nbAccounts;
}
```

In this example, `setNbAccounts(int nbAccounts)` is a setter method that sets the value of the private variable `_nbAccounts`.
## Orthodox Canonical Form
In C++98, the Orthodox Canonical Form, also known as the Rule of Three, refers to the three special member functions that a class will have:
**Constructor**, **Destructor**, **Copy Constructor**, **Copy Assignment Operator**
```cpp

class Fixed 
{
    private:
        int _value;
        static const int _bits = 8;

    public: 
        Fixed(); // <--default constructor
        Fixed(const Fixed &fixed); // <-- copy constructor
        ~Fixed(); // <--destructor
        Fixed &operator=(const Fixed &fixed); // <-- assigment operator
        int getRawBits(void) const; 
        void setRawBits(int const raw);
};

```
### Default Constructor
A default constructor in C++ is a constructor that can be called with no arguments. This means it's a constructor that either has no parameters, or if it has parameters, all the parameters have default values.
### Copy Constructor
A copy constructor in C++ is a special constructor that initializes a new object as a copy of an existing object. The copy constructor is used whenever an object is initialized (by direct initialization or copy initialization) from another object of the same type (unless overload resolution selects a better match or the call is elided), which can happen in various contexts, including:

- when an object is returned by value
- when an object is passed (to a function) by value as an argument
- when an object is thrown or caught (by an exception handling mechanism)
- when an object is placed in a brace-enclosed initializer list

The copy constructor for a class is declared as:

```cpp
class_name (const class_name &old_obj);
```

Here, `old_obj` is the object that is being copied. The constructor should be `const` to ensure that the copied object is not modified.

For example, if we had a `Person` class, a copy constructor for this class might look like this:

```cpp
Person::Person(const Person &p) {
    name = p.name;
    age = p.age;
}
```
### Assignment Operator
The assignment operator in C++ is used to assign the value of one object to another of the same type. It's denoted by the `=` symbol.

For user-defined types (classes), you can overload the assignment operator to perform some specific action during assignment. This is typically done when your class manages a resource like memory or a file handle, and you need to do a deep copy of that resource.

### Destructor
This is a special function that is called when an object of a class is destroyed. It helps to clean up and free the resources that were acquired by the object.

