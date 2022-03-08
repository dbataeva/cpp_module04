#include "MateriaSource.hpp"
	
const MateriaSource& MateriaSource::operator=(const MateriaSource &to_assignation) {
	if (this != &to_assignation) {
		for (int i = 0; i < 4; i++) {
			if (to_assignation.inventory[i])
				this->inventory[i] = to_assignation.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &to_assignation) {
	*this = to_assignation;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i]) {
			delete this->inventory[i];
			this->inventory[i] = NULL;
		}
	}
}

void MateriaSource::learnMateria(AMateria* m) {
	int i = 0;
	while (this->inventory[i])
		i++;
	if (i < 4)
		this->inventory[i] = m->clone();
	else 
		std::cout << "I haven't enough space in my inventory. it's full!" << std::endl;
}
	
AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] && (this->inventory[i]->getType() != type))
			i++;
		if (i == 4)
			std::cout << "I didn't learn this materia yet!" << std::endl;
		else {
			if (this->inventory[i]->getType() == "ice")
				return (new Ice());
			else if (this->inventory[i]->getType() == "cure")
				return (new Cure());
		}
	}	
	return (0);
}
