#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		void set_type(std::string type);
		std::string getType(void) const;

		void makeSound(void) const;

		const WrongAnimal& operator=(const WrongAnimal &to_assignation);
		WrongAnimal(const WrongAnimal &old);
		WrongAnimal(std::string &type);
		WrongAnimal();
		~WrongAnimal();
};

#endif