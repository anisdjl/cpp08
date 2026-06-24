class exception_not_found;

template <typename T> typename T::iterator easyfind(T &container, int occur)
{
	// je ne dois pas faire de check pour verifier si le container est vide le find le fait nativement
	typename T::iterator finded = std::find(container.begin(), container.end(), occur);
	if (finded == container.end())
		throw (exception_not_found(occur));
	return (finded);
}

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