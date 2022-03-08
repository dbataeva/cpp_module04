#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		const Brain& operator=(const Brain &to_assignation);
		Brain(const Brain &old);
		Brain(std::string idea);
		Brain();
		~Brain();
};

#endif