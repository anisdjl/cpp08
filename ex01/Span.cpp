#include "Span.hpp"

Span::Span(unsigned int N) : _num_elem(N) {

}

Span::Span(const Span &src) : _num_elem(src._num_elem) {

}

Span::~Span(void) {

}

Span	&Span::operator=(const Span &src) {

	if (this != &src)
	{
		_num_elem = src._num_elem;
	}
	return (*this);
}

void	Span::addNumber(int num)
{
	if (_vect.size() == _num_elem)
		throw std::runtime_error("Cannot add elements anymore, no space left");
	_vect.push_back(num);
	return;
}

int	Span::longestSpan(void) // la diff entre le plus grand et le plus petit
{
	if (_vect.size() < 2)
		throw std::runtime_error("*No span can be found, not enough elements*");
	return (*std::max_element(_vect.begin(), _vect.end()) - *std::min_element(_vect.begin(), _vect.end()));
}

int	Span::shortestSpan(void) // je parcours le _vector trie et je calcule la diff entre chaque deux chiffres et la diff la plus petite c'est elle que je renvoie mais pas sur de cette idee 
{
	if (_vect.size() < 2)
		throw std::runtime_error("*No span can be found, not enough elements*");
	int diff;

	std::vector<int> copy(_vect);
	std::sort(copy.begin(), copy.end());
	diff = INT_MAX;
	for (size_t i = 1; i < copy.size(); i++)
	{
		if (copy[i] - copy[i - 1] < diff)
		{
			diff = copy[i] - copy[i - 1];
		}
	}
	return (diff);
}
