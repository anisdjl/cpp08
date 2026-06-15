#include "easyfind.hpp"

exception_not_found::exception_not_found(int to_find)
{
	std::stringstream err;
	err << "Error: the number " << to_find << " is not found in the container\n";
 	_error = err.str();
}

exception_not_found::~exception_not_found(void) throw()
{

}

const char *exception_not_found::what(void) const throw()
{
	return (_error.c_str());
}

int main(void)
{
	std::vector<int> vect;
	vect.push_back(1);
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