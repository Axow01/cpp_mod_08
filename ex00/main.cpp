/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:28:10 by mmarcott          #+#    #+#             */
/*   Updated: 2024/02/27 15:05:08 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int	main(void) {
	std::vector<int>	vec;

	for (size_t i = 0; i < 10; i++) {
		vec.push_back(5 * i);
	}
	try {
		std::vector<int>::iterator	a = easyfind(vec, 25);
		std::cout << "Iterator: " << *a << std::endl;
		a = easyfind(vec, 100); // Should fail.
		std::cout << "Iterator: " << *a << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
