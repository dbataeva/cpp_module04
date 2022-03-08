#include "Ice.hpp"

const Ice& Ice::operator=(const Ice &to_assignation) {
	if (this != &to_assignation) {
		AMateria::operator=(to_assignation);
	}
	return (*this);
}

Ice::Ice(const Ice &old) : AMateria::AMateria(old) {
	// *this = old;
}
	
Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice* Ice::clone() const {
	Ice *new_ice = new Ice(*this);
	return (new_ice);
}
