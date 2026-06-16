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