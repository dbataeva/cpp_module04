#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		
		
	public:
		void makeSound(void) const;

		const WrongCat& operator=(const WrongCat &to_assignation);
		WrongCat(const WrongCat &old);
		WrongCat();
		~WrongCat();
};

#endif
