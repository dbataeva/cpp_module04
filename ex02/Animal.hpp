#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string type;

		void set_type(std::string type);
		std::string getType(void) const;

		virtual void makeSound(void) const = 0;

		const Animal& operator=(const Animal &to_assignation);
		Animal(const Animal &old);
		Animal(std::string &type);
		Animal();
	
	public:
		virtual ~Animal();
};

#endif