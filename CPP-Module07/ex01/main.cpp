/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 22:08:50 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/05 23:04:49 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include "iter.hpp"
#include <iostream>
#include <string>

int	main()
{
	std::cout << "INT" << std::endl;
	int	intArray[5] = {-10, 3, -12, 0, 6};
	::iter(intArray, 5, print);
	std::cout << std::endl;

	::iter(intArray, 5, sorted);
	std::cout << "sorted: ";
	::iter(intArray, 5, print);
	std::cout << std::endl << std::endl;

	std::cout << "DOUBLE" << std::endl;
	double	doubleArray[5] = {4.3, -56.32, 0.1, 59.894, -2.0};
	::iter(doubleArray, 5, print);
	std::cout << std::endl;

	::iter(doubleArray, 5, sorted);
	std::cout << "sorted: ";
	::iter(doubleArray, 5, print);
	std::cout << std::endl << std::endl;

	std::cout << "STRING" << std::endl;
	std::string	stringArray[5] = {"pwd", "cd", "zsh", "make", "touch"};
	::iter(stringArray, 5, print);
	std::cout << std::endl;

	::iter(stringArray, 5, sorted);
	std::cout << "sorted: ";
	::iter(stringArray, 5, print);
	std::cout << std::endl;

	return (0);
}