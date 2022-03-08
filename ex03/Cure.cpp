#include "Cure.hpp"

const Cure& Cure::operator=(const Cure &to_assignation) {
	if (this != &to_assignation) {
		AMateria::operator=(to_assignation);
	}
	return (*this);
}

Cure::Cure(const Cure &old) : AMateria::AMateria(old) {
	// *this = old;
}
	
Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure* Cure::clone() const {
	Cure *new_Cure = new Cure(*this);
	return (new_Cure);
}