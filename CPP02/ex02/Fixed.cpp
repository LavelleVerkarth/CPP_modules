#include "Fixed.hpp"

const int Fixed::litt = 8;

Fixed::Fixed(const int integer){
	// std::cout << "Int constructor called\n";
	fix_poin = integer << litt;
}

Fixed::Fixed(const float fl){
	// std::cout << "Float constructor called\n";
	fix_poin = roundf(fl * (1 << litt));

}


Fixed::Fixed(const Fixed &a){
	// std::cout << "Copy constructor called\n";
	// std::cout << "Assignation operator called\n";
	fix_poin = a.getRawBits();	
}

Fixed::Fixed(void){
	// std::cout << "Default constructor called\n";
	fix_poin = 0;
}

Fixed::~Fixed(void){
	// std::cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const{
	// std::cout << "getRawBits member function called\n";
	return (fix_poin);

}
void	Fixed::setRawBits(int const raw){
	// std::cout << "setRawBits member function called\n";
	fix_poin = raw;
}

Fixed& Fixed::operator=(const Fixed &fix){
	// std::cout << "Assignation operator called\n";
	fix_poin = fix.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& dt){
	os << dt.toFloat();
	return (os);
}


float	Fixed::toFloat (void) const{
	return ((float)fix_poin / (float)(1 << litt));
}

int		Fixed::toInt (void) const{
	return(fix_poin >> litt);
}

bool Fixed::operator>(const Fixed &fix){
	return (fix_poin > fix.fix_poin);
}

bool Fixed::operator<(const Fixed &fix){
	return (fix_poin < fix.fix_poin);
}

bool Fixed::operator>=(const Fixed &fix){
	return (fix_poin >= fix.fix_poin);
}

bool Fixed::operator<=(const Fixed &fix){
	return (fix_poin <= fix.fix_poin);
}

bool Fixed::operator==(const Fixed &fix){
	return (fix_poin == fix.fix_poin);
}

bool Fixed::operator!=(const Fixed &fix){
	return (fix_poin != fix.fix_poin);
}

Fixed Fixed::operator+(const Fixed &fix){
	Fixed ret;

	ret.fix_poin = this->getRawBits() + fix.getRawBits();
	return (ret);
}

Fixed Fixed::operator-(const Fixed &fix){
	Fixed ret;

	ret.fix_poin = this->getRawBits() - fix.getRawBits();
	return (ret);
}

Fixed Fixed::operator*(const Fixed &fix){
	Fixed ret;
	float x;
	float y;
	float res;

	x = this->toFloat();
	y = fix.toFloat();
	res = x * y;
	ret.fix_poin = res * (1 << litt);
	return (ret);
}

Fixed Fixed::operator/(const Fixed &fix){
	Fixed ret;

	float x;
	float y;
	float res;

	x = this->toFloat();
	y = fix.toFloat();
	res = x / y;
	ret.fix_poin = res * (1 << litt);
	return (ret);
}

Fixed& Fixed::operator++(void){
	fix_poin++;
	return(*this);
}

Fixed Fixed::operator++(int){
	Fixed temp = *this;

	++*this;
	return temp;
}

Fixed& Fixed::operator--(void){
	fix_poin--;
	return(*this);
}
Fixed Fixed::operator--(int){
	Fixed temp = *this;

	--*this;
	return temp;
}

Fixed&		Fixed::max(Fixed &x, Fixed &y){
	return(x.getRawBits() > y.getRawBits() ? x : y);
}

Fixed&		Fixed::min(Fixed &x, Fixed &y){
	return(x.getRawBits() < y.getRawBits() ? x : y);
}

const Fixed &Fixed::max(Fixed const &x, Fixed const &y){ 
	return(x.getRawBits() > y.getRawBits() ? x : y);

}

const Fixed	&Fixed::min(Fixed const &x, Fixed const &y){
	return(x.getRawBits() < y.getRawBits() ? x : y);
}

