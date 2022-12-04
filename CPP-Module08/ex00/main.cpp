/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 11:52:04 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/07 15:06:14 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <iomanip>
#include <vector>
#include <random>

int	main()
{
	std::vector<int> vec(196);

	std::default_random_engine generator;
	generator.seed(std::time(nullptr));
	std::uniform_int_distribution<int> distribution(5, 1000);
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		*it = distribution(generator);

	std::cout << "Vector: " << std::endl;
	for (std::size_t i = 0; i < vec.size(); i++)
	{
		std::cout << std::setw(7) << vec[i];
		if ((i + 1) % 7 == 0)
			std::cout << std::endl;
		else
			std::cout << " ";
	}

	for (int i = 0; i < 5; i++)
		try
		{
			int		value;
			std::cout << "search value : ";
			std::cin >> value;
			int foundValue = easyfind(vec, value);
			std::cout << "found " << foundValue << " in container" << std::endl;
		}
		catch(const std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}

	return (0);
}