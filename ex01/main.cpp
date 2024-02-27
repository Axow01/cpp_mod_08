/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:06:03 by mmarcott          #+#    #+#             */
/*   Updated: 2024/02/27 17:28:57 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void) {
	Span	spa = Span(5);
	Span	barce = Span(10000);

	spa.addNumber(6);
	spa.addNumber(3);
	spa.addNumber(17);
	spa.addNumber(9);
	spa.addNumber(11);

	std::cout << spa.shortestSpan() << std::endl;
	std::cout << spa.longestSpan() << std::endl;

	try {
		barce.addNumber(1020002);
		barce.fillSpan(20);
		barce.addNumber(10); // Should fail here.
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "Size: " << barce.getVector().size() << std::endl;
	std::cout << barce.shortestSpan() << std::endl;
	std::cout << barce.longestSpan() << std::endl;

	return (0);
}
