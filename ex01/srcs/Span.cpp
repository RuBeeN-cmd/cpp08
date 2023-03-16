#include "Span.hpp"
#include <iostream>

Span::Span(): _size(0) {
}

Span::Span(const unsigned int size): _size(size) {
}

Span::Span(const Span &copy) {
	*this = copy;
}

Span::~Span() {
}

const std::list<int>	&Span::get_list() const {
	return (_list);
}

const unsigned int	&Span::get_size() const {
	return (_size);
}

Span	&Span::operator=(const Span &rhs) {
	 if (this == &rhs)
	 	return (*this);
	_size = rhs.get_size();
	_list = std::list<int>(rhs.get_list());
	return (*this);
}

void	Span::addNumber(const int nb) {
	if (_list.size() >= _size)
		throw Span::ListFull();
	_list.push_back(nb);
}

unsigned int	Span::shortestSpan() const {
	if (_list.size() < 2)
		throw Span::NoDistance();
	unsigned int	shortest_span = longuestSpan();
	int old_value = *_list.begin();
	std::list<int>	tmp = std::list<int>(_list);
	tmp.sort();
	std::list<int>::const_iterator it = _list.begin();
	while (++it != _list.end()) {
		if (std::abs(*it - old_value) < shortest_span)
			shortest_span = std::abs(*it - old_value);
		old_value = *it;
	}
	return (shortest_span);
}

unsigned int	Span::longuestSpan() const {
	if (_list.size() < 2)
		throw Span::NoDistance();
	return (*std::max_element(_list.begin(), _list.end()) - *std::min_element(_list.begin(), _list.end()));
}

void	Span::display_list() const {
		for (std::list<int>::const_iterator it = _list.begin(); it != _list.end(); ++it) {
			std::cout << std::setw(5) << *it << std::flush;
		}
		std::cout << std::endl;	
}