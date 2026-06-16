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
		void	addMember(void);
};
// une classe span, son constructeur recoit N, qui est le nomre de int que peut recevoir le span
// cette classe a une methode addnumber qui va ajouter des choffres au span
// cette classe a deux methodes longestspan et shortest span qui va calculer la plus grande distance entre deux chiffre 
// utiliser un range of iterators pour ajputer beaucoup de nomres a mon span
#endif