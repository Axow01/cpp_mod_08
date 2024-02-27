/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:06:26 by mmarcott          #+#    #+#             */
/*   Updated: 2024/02/27 17:27:41 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n): _max(n) {}

Span::Span(const Span &copy): _nb(copy._nb), _max(copy._max) {
	*this = copy;
}

Span::~Span(void) {}

const Span&	Span::operator=(const Span &rhs) {
	if (this != &rhs) {
		_nb = rhs._nb;
		_max = rhs._max;
	}
	return (*this);
}

void	Span::addNumber(int nb) {
	if (_nb.size() < _max) {
		_nb.push_back(nb);
	} else
		throw std::invalid_argument("The vector is full!");
}

unsigned int	Span::shortestSpan(void) const {
	if (_nb.size() <= 1)
		return (0);
	int	res = _nb[0] - _nb[1];

	if (res < 0)
		res *= -1;
	for (size_t i = 0; i < _nb.size() - 1; i++) {
		int	temp = _nb[i] - _nb[i + 1];
		if (temp < 0)
			temp *= -1;
		if (temp < res)
			res = temp;
	}
	return (res);
}

unsigned int	Span::longestSpan(void) const {
	if (_nb.size() <= 1)
		return (0);
	int	res = _nb[0] - _nb[1];
	if (res < 0)
		res *= -1;

	for (size_t i = 0; i < _nb.size() - 1; i++) {
		int	temp = _nb[i] - _nb[i + 1];
		if (temp < 0)
			temp *= -1;
		if (temp > res)
			res = temp;
	}
	return (res);
}

std::vector<int>	Span::getVector(void) const {
	return (_nb);
}

unsigned int	Span::getLimit(void) const {
	return (_max);
}

void	Span::fillSpan(int startingNb) {
	for (size_t i = _nb.size(); i < _max; i++) {
		_nb.push_back(startingNb + i);
	}
}
