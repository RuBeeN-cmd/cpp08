#include "Span.hpp"

int main()
{
	Span span(1);

	std::cout << *(span.get_list().begin()) << std::endl;
	span.addNumber(2);
	std::cout << *(span.get_list().begin()) << std::endl;
	return 0;
}
