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
	long long diff;
	if (_vect.size() < 2)
		throw std::runtime_error("*No span can be found, not enough elements*");
	
	diff = *std::max_element(_vect.begin(), _vect.end()) - *std::min_element(_vect.begin(), _vect.end());
	if (diff > INT_MAX)
		throw std::runtime_error("*The longest span is bigger than INT_MAX*");
	return (static_cast<int>(diff));
}

int	Span::shortestSpan(void) // je parcours le _vector trie et je calcule la diff entre chaque deux chiffres et la diff la plus petite c'est elle que je renvoie mais pas sur de cette idee 
{
	if (_vect.size() < 2)
		throw std::runtime_error("*No span can be found, not enough elements*");
	long long diff;
	long long min_diff = INT_MAX;

	std::vector<int> copy(_vect);
	std::sort(copy.begin(), copy.end());
	for (size_t i = 1; i < copy.size(); i++)
	{
		diff = static_cast<long long>(copy[i]) - static_cast<long long>(copy[i - 1]);
		if (diff < min_diff)
			min_diff = diff;
	}
	return static_cast<int>(min_diff);
}
