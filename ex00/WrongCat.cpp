#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << "default WrongCat constructor was called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "default WrongCat destructor is calling" << std::endl;
}

const WrongCat& WrongCat::operator=(const WrongCat &to_assignation) {
	std::cout << "WrongCat assignation operator is calling" << std::endl;
	if (this != &to_assignation) {
		this->WrongAnimal::operator=(to_assignation);
	}
	return (*this);
}
	
WrongCat::WrongCat(const WrongCat &old) {
	std::cout << "WrongCat copy constructor is calling" << std::endl;
	*this = old;
}

void WrongCat::makeSound(void) const {
	std::cout << "meow" << std::endl;
}
