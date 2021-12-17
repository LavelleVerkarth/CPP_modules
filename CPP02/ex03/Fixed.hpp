#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>


# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define F_NONE		"\033[37m"

class Fixed{
	private:
		int 				fix_poin;
		static const int	litt;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &a);
		Fixed(const int integer);
		Fixed(const float fl);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat (void) const;
		int		toInt (void) const;


		bool operator>(const Fixed &fix);
		bool operator<(const Fixed &fix);
		bool operator>=(const Fixed &fix);
		bool operator<=(const Fixed &fix);
		bool operator==(const Fixed &fix);
		bool operator!=(const Fixed &fix);

		Fixed& operator=(const Fixed &fix);
		Fixed operator+(const Fixed &fix);
		Fixed operator-(const Fixed &fix);
		Fixed operator*(const Fixed &fix);
		Fixed operator/(const Fixed &fix);

		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);

		static Fixed 		&max(Fixed &x, Fixed &y);
		static Fixed 		&min(Fixed &x, Fixed &y);
		static Fixed const	&max(Fixed const &x, Fixed const &y);
		static Fixed const	&min(Fixed const &x, Fixed const &y);
};

	std::ostream& operator<<(std::ostream& os, const Fixed& dt);
#endif