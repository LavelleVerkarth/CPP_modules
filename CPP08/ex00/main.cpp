#include "easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int> vector;

	for (int i = 0; i < 10; ++i)
		vector.push_back(i*2);
	std::vector<int>::iterator it;
	try {
		it = easyfind(vector, 18);
		std::cout << *it << " found!" << std::endl;
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}

}