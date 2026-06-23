#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <list>


// std::stack n'est pas un container de base c'est seulement un adaptateur de container, elle utilise une dqueue
template <typename T>
class MutantStack : public std::stack<T>
{
	private:
	
	public:
		typedef typename std::stack<T>::container_type::iterator iterator; // on met le typname pcq le compilateur ne connait pas T
		MutantStack(void) {};
		~MutantStack(void) {};
		MutantStack(const MutantStack &src) : std::stack<T>(src) {};
		MutantStack &operator=(const MutantStack &src) {
			if (this != &src)
			{
				std::stack<T>::operator=(src);
			}
			return (*this);
		};
		iterator begin(void)	{ return (this->c.begin()); };
		iterator end(void)		{ return (this->c.end()); };
};

#endif
