#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point{
	private:
		Fixed x;
		Fixed y;
	public:
		Point(void);
		~Point(void);
		Point(const Point &cop);
		Point(const float x, const float y);
		Point& operator=(const Point &fix);

		Fixed	get_y(void) const;
		Fixed	get_x(void) const;

};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif