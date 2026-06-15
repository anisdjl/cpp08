#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>

class exception_not_found : public std::exception
{
	private:
		std::string _error;

	public:
		exception_not_found(int to_find);
		~exception_not_found(void) throw();
		const char *what(void) const throw();
};

#include "easyfind.tpp"
// je recois un container de int (de type T) donc je suppose que c'est un tab ou quoi
// je dois chercher dans ce container la premiere occurence du deuxieme param passe a la fonction template
// si je ne trouve pas je dois soit lever une erreur soit renvoyer une valeur d'erreur (a voir comment les containers reagissent)

#endif