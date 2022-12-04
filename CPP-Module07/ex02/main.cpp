/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 23:07:00 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/06 00:03:10 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main()
{
	std::cout << std::endl << "EMPTY" << std::endl;
	Array<int>	array;
	try
	{
		std::cout << "Element 1:" << array[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	try
	{
		std::cout << "Element 5:" << std::endl;
		array[5] = 5;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << array << std::endl;

	std::cout << std::endl << "INT" << std::endl;
	Array<int> narr(4);
	std::cout << "Default array:" << std::endl << narr << std::endl;
	narr[0] = 1;
	narr[1] = 2;
	narr[2] = 3;
	narr[3] = 4;
	std::cout << "After assigning:" << std::endl << narr << std::endl;

	std::cout << std::endl << "FLOAT" << std::endl;
	Array<float> farr(4);
	std::cout << "Default array:" << std::endl << farr << std::endl;
	farr[0] = 5.12;
	farr[1] = 10.4;
	farr[2] = 0.7;
	farr[3] = 9.65;
	std::cout << "After assigning:" << std::endl << farr << std::endl;

	std::cout << std::endl << "STRING" << std::endl;
	Array<std::string> sarr(4);
	std::cout << "Default array:" << std::endl << sarr << std::endl;
	sarr[0] = "Element 1";
	sarr[1] = "Element 2";
	sarr[2] = "Element 3";
	sarr[3] = "Element 4";
	std::cout << "After assigning:" << std::endl << sarr << std::endl;

	return 0;
}