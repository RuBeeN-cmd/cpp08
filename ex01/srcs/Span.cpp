#include "Span.hpp"
#include <iostream>
#include <exception>

Span::Span(): _index(0) {
}

Span::Span(const unsigned int size): _index(0), _list(std::list<int>(size)) {
}

Span::Span(const Span &copy) {
	*this = copy;
}

Span::~Span() {
}

const std::list<int>	&Span::get_list() const {
	return (_list);
}

const unsigned int	&Span::get_index() const {
	return (_index);
}

Span	&Span::operator=(const Span &rhs) {
	 if (this == &rhs)
	 	return (*this);
	_index = rhs.get_index();
	_list = std::list<int>(rhs.get_list());
	return (*this);
}

void	Span::addNumber(const int nb) {
	if (_index >= _list.size())
		throw std::out_of_range("Out of range");
	_list.push_back(nb);
}