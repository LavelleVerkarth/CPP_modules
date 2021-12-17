#include "Point.hpp"

int main( void )
{

	// Point	a(6.3, 4.38);
	// Point	b(4.6, -1.02);
	// Point	c(12.14, 2.58);
	// Point	point(6.31, 0);

	// std::cout << bsp(a, b, c, point) <<std::endl;

	Point	a(-4, -3);
	Point	b(4, -3);
	Point	c(0, 4);
	Point	point(0, 2);

	std::cout << bsp(a, b, c, point) <<std::endl;

	return (0);
}