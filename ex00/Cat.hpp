#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
		
	public:
		virtual void makeSound(void) const;

		const Cat& operator=(const Cat &to_assignation);
		Cat(const Cat &old);
		Cat();
		virtual ~Cat();
};

#endif
