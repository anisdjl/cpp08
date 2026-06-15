class exception_not_found;

template <typename T> typename T::iterator easyfind(T &container, int occur)
{
	// je ne dois pas faire de check pour verifier si le container est vide le find le fait nativement
	typename T::iterator finded = std::find(container.begin(), container.end(), occur);
	if (finded == container.end())
		throw (exception_not_found(occur));
	return (finded);
}
