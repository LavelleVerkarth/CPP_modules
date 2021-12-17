#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

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

		Fixed& operator=(const Fixed &fix);
};

	std::ostream& operator<<(std::ostream& os, const Fixed& dt);
#endif