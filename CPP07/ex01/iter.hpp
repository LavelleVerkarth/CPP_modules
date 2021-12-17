#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T* ptr, const size_t lan, void (*f)(T &a))
{
	for (size_t i = 0; i < lan; i++)
	{
		f(ptr[i]);
	}
}

template <typename T>
void x2(T &a){
	a = a + a;
}

#endif