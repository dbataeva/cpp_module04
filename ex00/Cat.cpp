#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << "default Cat constructor was called" << std::endl;
}

Cat::~Cat() {
	std::cout << "default Cat destructor is calling" << std::endl;
}

const Cat& Cat::operator=(const Cat &to_assignation) {
	std::cout << "Cat assignation operator is calling" << std::endl;
	if (this != &to_assignation) {
		this->Animal::operator=(to_assignation);
	}
	return (*this);
}
	
Cat::Cat(const Cat &old) {
	std::cout << "Cat copy constructor is calling" << std::endl;
	*this = old;
}

void Cat::makeSound(void) const {
	std::cout << "meow" << std::endl;
}