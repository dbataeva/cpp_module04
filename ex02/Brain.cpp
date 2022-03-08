#include "Brain.hpp"

Brain::Brain() {
	std::cout << "default barin constructor is calling" << std::endl;
}

Brain::~Brain() {
	std::cout << "default barin destructor is calling" << std::endl;
}

const Brain& Brain::operator=(const Brain &to_assignation) {
	std::cout << "Brain assignation operator was called" << std::endl;
	if (this != &to_assignation) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = to_assignation.ideas[i];
		}
	}
	return (*this);
}

Brain::Brain(const Brain &old) {
	std::cout << "Brain copy operator is calling" << std::endl;
	*this = old;
}

Brain::Brain(std::string idea) {
	this->ideas[0] = idea;
	std::cout << "barin constructor is calling" << std::endl;
}