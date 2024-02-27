/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarcott <mmarcott@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:28:13 by mmarcott          #+#    #+#             */
/*   Updated: 2024/02/27 14:51:58 by mmarcott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HPP_EASYFIND
# define HPP_EASYFIND

# include <iostream>

template <typename T>
typename T::iterator	easyfind(T container, int n) {
	typename T::iterator	it = std::find(container.begin(), container.end(), n);

	if (it == container.end())
		throw std::invalid_argument("n is not in the container.");
	return (it);
}

#endif
