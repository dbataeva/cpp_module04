#include "Dog.hpp"

Dog::Dog() : dogs_brain(new Brain("I want to sleep")) {
	this->type = "Dog";
	std::cout << "default Dog constructor was called" << std::endl;
}

Dog::~Dog() {
	std::cout << "default Dog destructor is calling" << std::endl;
	delete this->dogs_brain;
}

const Dog& Dog::operator=(const Dog &to_assignation) {
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &to_assignation) {
		this->Animal::operator=(to_assignation);
		this->dogs_brain = new Brain(*to_assignation.dogs_brain);
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