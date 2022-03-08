#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type) {}

std::string const & AMateria::getType() const {
	return (this->type);
};

void AMateria::use(ICharacter& target) {
	if (this->getType() == "ice") {
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	}
	else if (this->getType() == "cure") {
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	}
	else {
		std::cout << "I don't know this materia!" << std::endl;
	}
}

const AMateria& AMateria::operator=(const AMateria &to_assignation) {
	if (this != &to_assignation) {
		this->setType(to_assignation.getType());
	}
	return (*this);
}

void AMateria::setType(std::string const & type) {
	this->type = type;
}

AMateria::AMateria(const AMateria &old) {
	*this = old;
}

AMateria::~AMateria() {}