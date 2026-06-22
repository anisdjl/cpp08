#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <string>
#include <stack>


// std::stack n'est pas un container de base c'est seulement un adaptateur de container, elle utilise une dqueue
template <typename T>
class MutantStack
{
	private:
		std::stack<T>	_mystack;
	public:
		MutantStack(void);
		MutantStack()
};

#endif
