
#ifndef HPP_MUTANTSTACK
# define HPP_MUTANTSTACK

# include <iostream>
# include <algorithm>
# include <stack>

template <typename T>
class MutantStack: public std::stack<T> {
	private:

	public:
		MutantStack(void);
		MutantStack(const MutantStack &copy);
		~MutantStack(void) {};

		MutantStack&	operator=(const MutantStack &rhs);

		typedef typename	std::stack<T>::container_type Container;

		typedef typename	Container::iterator iterator;
		iterator	begin(void) {
			return (this->c.begin());
		}
		iterator	end(void) {
			return (this->c.end());
		}

		typedef typename	Container::const_iterator const_iterator;
		const_iterator	cbegin(void) {
			return (this->c.cbegin());
		}
		const_iterator	cend(void) {
			return (this->c.cend());
		}

		typedef typename	Container::reverse_iterator reverse_iterator;
		reverse_iterator	rbegin(void) {
			return (this->c.rbegin());
		}
		reverse_iterator	rend(void) {
			return (this->c.rend());
		}

		typedef typename	Container::const_reverse_iterator const_reverse_iterator;
		const_reverse_iterator	crbegin(void) {
			return (this->c.crbegin());
		}
		const_reverse_iterator	crend(void) {
			return (this->c.crend());
		}
};

#endif
