#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "default Dog constructor was called" << std::endl;
}

Dog::~Dog() {
	std::cout << "default Dog destructor is calling" << std::endl;
}

const Dog& Dog::operator=(const Dog &to_assignation) {
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &to_assignation) {
		this->Animal::operator=(to_assignation);
	}
	return (*this);
}
	
Dog::Dog(const Dog &old) {
	std::cout << "Dog copy operator is calling" << std::endl;
	*this = old;
}

void Dog::makeSound(void) const {
	std::cout << "auf" << std::endl;
}