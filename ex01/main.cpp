#include "Span.hpp"

int main(void)
{
	Span span_test(10000);
	std::vector<int> first_vect(10000);
	std::generate_n(first_vect.begin(), 10000, rand); // va remplir le vect de chiffre aleatoire

	try
	{
		span_test.addMember(first_vect.begin(), first_vect.end());
		std::cout << span_test.longestSpan() << std::endl;
		// for (int i = 0; i < 10000; i++)
		// {
		// 	std::cout << "span: " << span_test.getVlaue(i) << "\n"
		// 	<< "vect: " << first_vect[i] << std::endl;
		// }
		span_test.addNumber(4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << span_test.longestSpan() << std::endl;

	return (0);
}

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }