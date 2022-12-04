/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:52:01 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/07 14:39:15 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP

# define EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <sstream>

template <typename T>
int	easyfind(T const &container, int value)
{
	typename T::const_iterator it = std::find(container.cbegin(), container.cend(), value);
	if (it == container.cend())
	{
		std::stringstream line;
		line << value;
		throw std::runtime_error(line.str() + " not found");
	}
	return (*it);
}

#endif