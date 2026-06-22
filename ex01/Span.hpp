#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <climits>

class Span
{
	private:
		unsigned int _num_elem; // nombre d'elements max qu'on peut mettre dans le vect
		std::vector<int> _vect;
	public:
		Span(unsigned int N);
		Span(const Span &src);
		Span &operator=(const Span &src);
		~Span(void);
		void	addNumber(int num); //avnat d'ajouter dans le vect je dois checker la taille actuelle du vect 
		int		shortestSpan(void);
		int		longestSpan(void);
		template <typename T> void addMember(T begin, T end)
		{
			size_t distance = std::distance(begin, end);

			if (distance + _vect.size() > _num_elem) // vect.size() c'est le nombre de choffre qui sont deja dans le vect
				throw std::runtime_error("Error: couldn't fill the span");
			_vect.insert(_vect.end(), begin, end); // on va inserer a la fin de notre vecteur de span tout les elements de begin jusqu'a end
		}
		// int getVlaue(int i)
		// {
		// 	return (_vect[i]);
		// }
};

#endif