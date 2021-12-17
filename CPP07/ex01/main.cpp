#include "iter.hpp"


int main(){
	int a[5] = {1, 2, 3, 4, 5};
	std::string b[5] = {"'a'", "'b'", "'c'", "'d'", "'e'"};

	::iter(a, 5, x2);
	::iter(b, 5, x2);

	for(int i = 0; i < 5; i++){
		std::cout << a[i] << std::endl;
	}

	for(int i = 0; i < 5; i++){
		std::cout << b[i] << std::endl;
	}
	
}