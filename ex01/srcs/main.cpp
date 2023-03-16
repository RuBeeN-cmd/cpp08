#include "Span.hpp"
#include <iomanip>
#include <stdlib.h>
#include <time.h>

int main() {
	{
		Span span(2);

		span.addNumber(4);

		Span copy(span);

		copy.addNumber(3);
		std::cout << "span :" << std::endl;
		span.display_list();
		std::cout << "copy :" << std::endl;
		copy.display_list();
	}
	{
		Span span;

		try {
			span.addNumber(0);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		Span span(1);

		span.addNumber(0);
		try {
			span.shortestSpan();
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		try {
			span.shortestSpan();
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		Span span(10002);

		for (unsigned int i = 10000; i > 0; --i)
			span.addNumber(i);
		std::cout << "longuest : " << span.longuestSpan() << std::endl;
		std::cout << "shortest : " << span.shortestSpan() << std::endl;
		span.addNumber(12001);
		span.addNumber(12001);
		std::cout << "longuest : " << span.longuestSpan() << std::endl;
		std::cout << "shortest : " << span.shortestSpan() << std::endl;
	}
	return (0);
}
