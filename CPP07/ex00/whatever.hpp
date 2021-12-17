#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>
T min(const T& lhs, const T& rhs)
{
    return lhs < rhs ? lhs : rhs;
}

template <typename T>
T max(const T& lhs, const T& rhs)
{
    return lhs > rhs ? lhs : rhs;
}

template <typename T>
void swap(T& lhs, T& rhs)
{
	T buf;
	buf = lhs;
	lhs = rhs;
	rhs = buf;
}


#endif