#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <string>
#include <iostream>

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *inventory[4];

	public:
		const Character& operator=(const Character &to_assignation);
		Character(const Character &old);
		void set_name(std::string const &name);

		virtual ~Character();
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		Character(std::string const &name);
};

#endif