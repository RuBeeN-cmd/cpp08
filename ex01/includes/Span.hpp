#ifndef SPAN_HPP
#define SPAN_HPP

#include <list>
#include <iostream>
#include <exception>
#include <algorithm>
#include <iomanip>

class Span
{
private:
	unsigned int		_size;
	std::list<int>		_list;

public:
	Span();
	Span(const unsigned int);
	Span(const Span &);
	~Span();

	const std::list<int>	&get_list() const;
	const unsigned int		&get_size() const;
	Span	&operator=(const Span &);
	void	addNumber(const int);
	unsigned int	shortestSpan() const;
	unsigned int	longuestSpan() const;

	void	display_list() const;
	
	class NoDistance: public std::exception
	{
		const char* what() const throw() {
			return ("Can't calculate distance");
		}
	};

	class ListFull: public std::exception
	{
		const char* what() const throw() {
			return ("List is full");
		}
	};
};

#endif