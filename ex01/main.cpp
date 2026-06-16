#include "Span.hpp"

int main(void)
{
	Span span_test(0);

	try
	{
		std::cout << span_test.longestSpan() << std::endl;
		span_test.addNumber(4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	// span_test.addNumber(10);
	// std::cout << span_test.longestSpan() << std::endl;

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