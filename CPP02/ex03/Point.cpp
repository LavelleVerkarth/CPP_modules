#include "Point.hpp"

Point::Point(void){
}

Point::~Point(void){
}

Point::Point(const Point &cop){
	x = cop.x;
	y = cop.y;
}
Point::Point(const float x, const float y){
	this->x.setRawBits(roundf(x * 256));
	this->y.setRawBits(roundf(y * 256));
}
Point& Point::operator=(const Point &fix){
	x = fix.get_x();
	y = fix.get_y();
	return (*this);
}

Fixed	Point::get_x(void) const{
	return (x);
}

Fixed	Point::get_y(void) const{
	return (y);
}