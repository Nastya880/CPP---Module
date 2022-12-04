/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:08:54 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/05 23:05:06 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP

# define ITER_HPP

#include <iostream>

template <typename T>
void	print(const T &value)
{
	std::cout << value << " ";
}

template <typename T>
void	iter(T *array, int length, void (*func)(const T&))
{
	for (int i = 0; i < length; i++)
		func(array[i]);
}

template <typename T>
int	sorted(const T &value1, const T &value2)
{
	if (value1 > value2)
		return (1);
	else if (value1 == value2)
		return (0);
	else
		return (-1);
}

template <typename T>
void	iter(T *array, int length, int (*sorted)(const T&, const T&))
{
	for (int i = 0; i < length - 1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < length; j++)
		{
			if (sorted(array[minIndex], array[j]) > 0)
				minIndex = j;
		}
		if (minIndex != i)
		{
			T tmp = array[i];
			array[i] = array[minIndex];
			array[minIndex] = tmp;
		}
	}
}

#endif