#include "MutantStack.hpp"
#include <list>

template <typename T>
MutantStack<T>::MutantStack(void): std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &copy): std::stack<T>(copy) {}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack &rhs) {
	if (this != &rhs)
		this->c = rhs.c;
	return (*this);
}

int	main(void) {
	MutantStack<int>	mstack;

	for (int i = 0; i < 20; i++) {
		mstack.push(i);
	}
	std::cout << "Size: " << mstack.size() << "Top: " << mstack.top() << "Empty: " << mstack.empty() << std::endl;

	// Test iterator
	MutantStack<int>::iterator	it = mstack.begin();
	while (it != mstack.end()) {
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;

	// Test reverse_iterator
	MutantStack<int>::reverse_iterator	rit = mstack.rbegin();
	while (rit != mstack.rend()) {
		std::cout << *rit << std::endl;
		++rit;
	}
	return (0);
}
