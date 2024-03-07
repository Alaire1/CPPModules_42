#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int _value;
        static const int _bits = 8;

    public:
        Fixed(); // default constructor
        Fixed(const Fixed &fixed); // copy constructor
        ~Fixed(); // destructor
        Fixed &operator=(const Fixed &fixed); // assigment operator
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif
