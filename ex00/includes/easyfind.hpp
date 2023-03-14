#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <exception>
#include <algorithm>

class NotFound: public std::exception {
	const char*	what() const throw() {
		return "Value Not found";
	}
};

template<typename T>
int	&easy_find(T &container, int to_find)
{
	typename T::iterator	it;
	if ((it = std::find(container.begin(), container.end(), to_find)) == container.end())
		throw NotFound();
	return (*it);
}

#endif