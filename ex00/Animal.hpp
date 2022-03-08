#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		void set_type(std::string type);
		std::string getType(void) const;

		virtual void makeSound(void) const;

		const Animal& operator=(const Animal &to_assignation);
		Animal(const Animal &old);
		Animal(std::string &type);
		Animal();
		virtual ~Animal();
};

#endif