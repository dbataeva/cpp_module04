#include "Animal.hpp"

Animal::Animal() {
	std::cout << "default Animal constructor is calling" << std::endl;
	this->type = "empty";
}

Animal::~Animal() {
	std::cout << "default Animal destructor was called" << std::endl;
}

const Animal& Animal::operator=(const Animal &to_assignation) {
	std::cout << "Animal assignation operator was called" << std::endl;
	if (this != &to_assignation) {
		this->set_type(to_assignation.getType());
	}
	return (*this);
}

void Animal::makeSound(void) const {
	std::cout << "AaAaAaAaAa!!!" << std::endl;
}

Animal::Animal(const Animal &old) {
	std::cout << "Animal copy constructor is called" << std::endl;
	*this = old;
}

Animal::Animal(std::string &type) {
	this->type = type;
}

void Animal::set_type(std::string type) {
	this->type = type;
}

std::string Animal::getType(void) const {
	return (this->type);
}