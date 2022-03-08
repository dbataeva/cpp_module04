#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:
		
	public:
		virtual void makeSound(void) const;

		const Dog& operator=(const Dog &to_assignation);
		Dog(const Dog &old);
		Dog();
		virtual ~Dog();
};


#endif