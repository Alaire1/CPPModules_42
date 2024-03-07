#include "Fixed.hpp"
// int main(void) 
// {
//     Fixed a;
//     Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
//     std::cout << a << std::endl;
//     std::cout << ++a << std::endl;
//     std::cout << a << std::endl; 
//     std::cout << a++ << std::endl; 
//     std::cout << a << std::endl;

//     std::cout << b << std::endl;

//     std::cout << Fixed::max( a, b ) << std::endl;
    
//     return 0;
// }

int main() {
    //default constructor
    Fixed a;
    std::cout << "a is " << a << std::endl;

    //int constructor
    Fixed b(10);
    std::cout << "b is " << b << std::endl;

    //float constructor
    Fixed c(10.5f);
    std::cout << "c is " << c << std::endl;

    //copy constructor
    Fixed d(b);
    std::cout << "d is " << d << std::endl;

    //assignment operator
    Fixed e = c;
    std::cout << "e is " << e << std::endl;

    // comparison operators
    std::cout << "b > c: " << (b > c) << std::endl;
    std::cout << "b < c: " << (b < c) << std::endl;
    std::cout << "b >= c: " << (b >= c) << std::endl;
    std::cout << "b <= c: " << (b <= c) << std::endl;
    std::cout << "b == c: " << (b == c) << std::endl;
    std::cout << "b != c: " << (b != c) << std::endl;

    //arithmetic operators
    std::cout << "b + c: " << (b + c) << std::endl;
    std::cout << "b - c: " << (b - c) << std::endl;
    std::cout << "b * c: " << (b * c) << std::endl;
    std::cout << "b / c: " << (b / c) << std::endl;

    // increment and decrement operators
    std::cout << "++b: " << ++b << std::endl;
    std::cout << "--b: " << --b << std::endl;

    //min and max functions
    std::cout << "min(a, c): " << Fixed::min(a, c) << std::endl;
    std::cout << "max(b, c): " << Fixed::max(b, c) << std::endl;

   a.setRawBits(56);
    std::cout << "After setting raw bits to 10, a is " << a << std::endl;

    // Test setting raw bits to zero
    a.setRawBits(0);
    std::cout << "After setting raw bits to 0, a is " << a << std::endl;

    // Test setting raw bits to a negative value
    a.setRawBits(-10);
    std::cout << "After setting raw bits to -10, a is " << a << std::endl;

    return 0;
}
