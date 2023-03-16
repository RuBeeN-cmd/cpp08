#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack: public std::stack<T> {
public:
	MutantStack(): std::stack<T>() {}
	MutantStack(const MutantStack<T> &copy) {
		*this = copy;
	}
	~MutantStack() {}
	MutantStack<T>	&operator=(const MutantStack<T> &rhs) {
		if (this == &rhs)
			return (*this);
		this->std::stack<int>::operator=(rhs);
		return (*this);
	}

	typedef typename std::stack<int>::container_type::iterator iterator;
	typedef typename std::stack<int>::container_type::const_iterator const_iterator;

	iterator begin() {
		MutantStack<int>::iterator it = this->c.begin();
		return (it);
	}

	iterator end() {
		MutantStack<int>::iterator it = this->c.end();
		return (it);
	}


	const_iterator begin() const {
		MutantStack<int>::const_iterator it = this->c.begin();
		return (it);
	}

	const_iterator end() const {
		MutantStack<int>::const_iterator it = this->c.end();
		return (it);
	}
};

#endif