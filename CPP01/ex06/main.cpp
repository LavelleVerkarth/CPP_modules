#include "Karen.hpp"

int main(int argc, char **argv){
	Karen bot;

	if (argc != 2){
		std::cout << "Error: bad arguments!\n";
		return (1);
	}
	bot.complain(argv[1]);
}