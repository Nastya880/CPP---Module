/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 21:34:01 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/05 22:08:10 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP

# define WHATEVER_HPP

#include <iostream>

template <typename T>
void	swap(T &value1, T &value2)
{
	T	tmp = value1;
	value1 = value2;
	value2 = tmp;
}

template <typename T>
T	min(T &value1, T &value2)
{
	return (value1 < value2 ? value1 : value2);
}

template <typename T>
T	max(T &value1, T &value2)
{
	return (value1 > value2 ? value1 : value2);
}

#endif