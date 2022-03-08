#include "Character.hpp"

const Character& Character::operator=(const Character &to_assignation) {
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i])
			delete this->inventory[i];
	}
	if (this != &to_assignation) {
		this->set_name(to_assignation.getName());
		for (int i = 0; i < 4; i++) {
			if (to_assignation.inventory[i])
				this->inventory[i] = to_assignation.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	return (*this);
}

void Character::set_name(std::string const &name) {
	this->name = name;
}
		
Character::Character(const Character &old) {
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i])
			delete this->inventory[i];
	}
	this->set_name(old.getName());
	for (int i = 0; i < 4; i++) {
		if (old.inventory[i])
			this->inventory[i] = old.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

std::string const & Character::getName() const {
	return (this->name);
}

void Character::equip(AMateria* m) {
	if ((m->getType() == "cure") || (m->getType() == "ice")) {
		int i = 0;
		while (this->inventory[i])
			i++;
		if (i < 4)
			this->inventory[i] = m;
		else 
			std::cout << "I haven't enough space in my inventory. it's full!" << std::endl;
	}
	else
		std::cout << "I don't know this materia!" << std::endl;
}

void Character::unequip(int idx) {
	if (idx < 4) {
		if (this->inventory[idx])
			this->inventory[idx] = NULL;
		else
			std::cout << "This slot is already empty!" << std::endl;
	}
	else
		std::cout << "I haven't such materia!" << std::endl;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 4) {
		if (this->inventory[idx])
			this->inventory[idx]->use(target);
		else
			std::cout << "This slot is empty!" << std::endl;
	}
	else 
		std::cout << "I haven't such materia!" << std::endl;
}

Character::Character(std::string const &name) {
	this->set_name(name);
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}