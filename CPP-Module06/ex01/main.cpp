/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:03:37 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/04 21:37:34 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return	(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return	(reinterpret_cast<Data *>(raw));
}

int	main()
{
	Data data1("example");

	//Data data3;
	//std:: cout << data3.getData();

	uintptr_t ser = serialize(&data1);
	Data *data2 = deserialize(ser);

	std::cout << "Data1 address: "<< &data1 << std::endl;
	std::cout << "Data2 address: "<< data2 << std::endl;

	std::cout << "Data1 data: " << data1.getData() << std::endl;
	std::cout << "Data2 data: " << (*data2).getData() << std::endl;

	return (0);
}