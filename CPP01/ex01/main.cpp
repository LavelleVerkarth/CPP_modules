# include "Zombie.hpp"

int main(void){
	Zombie	*arrZ;

	arrZ = zombieHorde(8, "SARA");
	delete[] (arrZ);
}