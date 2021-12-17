#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>


class ErrorMyIter: public std::exception{
	public:
				const char* what() const throw(){return ("Did not find!");};
};

template <typename T>
typename T::iterator easyfind(T &arr, int n){
	typename T::iterator ret;
	ret = find(arr.begin(), arr.end(), n);
	if (ret == arr.end())
		throw ErrorMyIter();
	return (ret);
}


#endif