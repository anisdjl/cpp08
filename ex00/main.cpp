#include "easyfind.hpp"

int main(void)
{
	std::vector<int> vect;
	vect.push_back(1); // ajoute des elements a la fin
	vect.push_back(2);
	vect.push_back(5);
	vect.push_back(4);

	try
	{
		std::vector<int>::iterator it = easyfind(vect, 3);
		std::cout << "The number : " << *it << "is well found" << std::endl;
	}
	catch (exception_not_found &e)
	{
		std::cerr << e.what();
	}
 	return (0);
}