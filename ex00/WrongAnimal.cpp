#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "default WrongAnimal constructor is calling" << std::endl;
	this->type = "empty";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "default WrongAnimal destructor was called" << std::endl;
}

const WrongAnimal& WrongAnimal::operator=(const WrongAnimal &to_assignation) {
	std::cout << "WrongAnimal assignation operator was called" << std::endl;
	if (this != &to_assignation) {
		this->set_type(to_assignation.getType());
	}
	return (*this);
}

void WrongAnimal::makeSound(void) const {
	std::cout << "AaAaAaAaAa!!!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &old) {
	std::cout << "WrongAnimal copy constructor is called" << std::endl;
	*this = old;
}

WrongAnimal::WrongAnimal(std::string &type) {
	this->type = type;
}

void WrongAnimal::set_type(std::string type) {
	this->type = type;
}

std::string WrongAnimal::getType(void) const {
	return (this->type);
}