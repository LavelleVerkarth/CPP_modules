#include "Fixed.hpp"

const int Fixed::litt = 8;

Fixed::Fixed(Fixed &a){
	std::cout << "Copy constructor called\n";
	fix_poin = a.getRawBits();	
}

Fixed::Fixed(void){
	std::cout << "Default constructor called\n";
	fix_poin = 0;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called\n";
	return (fix_poin);

}
void	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called\n";
	fix_poin = raw;
}

Fixed& Fixed::operator=(const Fixed &fix){
	std::cout << "Assignation operator called\n";
	fix_poin = fix.getRawBits();
	return (*this);
}
