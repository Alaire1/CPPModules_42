#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath> 

class Fixed
{
	private:
		int _value;
		static const int _bits = 8;

	public:
		Fixed(); // default constructor
		Fixed(const Fixed &fixed);//copy constructor
		Fixed(const int i); // int constructor
		Fixed(const float f); // float constructor
		Fixed &operator=(const Fixed &fixed);//assigment operator 
		~Fixed(); // destructor
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif