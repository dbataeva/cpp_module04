#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
	std::cout << "make animal: ";
	const Animal* meta = new Animal();
	std::cout << "make dog: ";
	const Animal* j = new Dog();
	std::cout << "make cat: ";
	const Animal* i = new Cat();
	std::cout << "animal type is " << j->getType() << std::endl;
	std::cout << "animal type is " << i->getType() << std::endl;
	std::cout << "cat says: ";
	i->makeSound(); //will output the cat sound!
	std::cout << "dog says: ";
	j->makeSound();
	std::cout << "animal says: ";
	meta->makeSound();
	std::cout << "delete animal: ";
	delete meta;
	std::cout << "delete dog: ";
	delete j;
	std::cout << "delete cat: ";
	delete i;

	std::cout << "\nmake wrong animal: ";
	const WrongAnimal a;
	std::cout << "make wrong cat: ";
	const WrongCat b;
	std::cout << "wrong animal type is " << b.getType() << std::endl;
	std::cout << "wrong animal says: ";
	a.makeSound();
	std::cout << "wrong cat says: ";
	b.makeSound();

	std::cout << "\nmake wrong animal: ";
	const WrongAnimal* animal = new WrongAnimal();
	std::cout << "make wrong cat: ";
	const WrongAnimal* cat = new WrongCat();
	std::cout << "wrong animal type is ";
	std::cout << cat->getType() << " " << std::endl;
	std::cout << "wrong cat says: ";
	cat->makeSound();
	std::cout << "wrong animal says: ";
	animal->makeSound();
	std::cout << "delete cat: ";
	delete cat;
	std::cout << "delete animal: ";
	delete animal;

	return (0);
}