#ifndef SPAN_HPP
#define SPAN_HPP

#include <list>
#include <iostream>
#include <exception>

class Span
{
private:
	unsigned int		_index;
	std::list<int>		_list;

public:
	Span();
	Span(const unsigned int);
	Span(const Span &);
	~Span();

	const std::list<int>	&get_list() const;
	const unsigned int		&get_index() const;
	Span	&operator=(const Span &);
	void	addNumber(const int);
};


#endif