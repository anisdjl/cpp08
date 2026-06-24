//#include "MutantStack.hpp"

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