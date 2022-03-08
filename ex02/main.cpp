#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
	Animal *array[4];
	
	int i = 0;
	while (i < 2) {
		array[i] = new Dog();
		i++;
		std::cout << "\n";
	}
	while (i < 4) {
		array[i] = new Cat();
		i++;
		std::cout << "\n";
	}

	std::cout << "\n";

	i = 0;
	while (i < 4)
	{
		delete array[i];
		i++;
		std::cout << "\n";
	}

	Dog basic;
	std::cout << "\ndeep copy test:" << std::endl;
	Dog tmp = basic;
	
	// while (1) {}

	// Animal a;
	return (0);
}