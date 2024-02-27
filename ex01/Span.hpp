/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:06:28 by mmarcott          #+#    #+#             */
/*   Updated: 2024/02/27 17:13:16 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_SPAN
# define HPP_SPAN

# include <iostream>
# include <vector>

class Span {
	private:
		std::vector<int>	_nb;
		unsigned int		_max;
	public:
		Span(unsigned int n);
		Span(const Span &copy);
		~Span(void);

		const Span&	operator=(const Span &rhs);

		void				addNumber(int nb);
		unsigned int		shortestSpan(void) const;
		unsigned int		longestSpan(void) const;
		std::vector<int>	getVector(void) const;
		unsigned int		getLimit(void) const;
		void				fillSpan(int startingNb);
};

#endif
