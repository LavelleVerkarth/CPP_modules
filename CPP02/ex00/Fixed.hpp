#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{
	private:
		int 				fix_poin;
		static const int	litt;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed &a);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		Fixed& operator=(const Fixed &fix);
};

#endif