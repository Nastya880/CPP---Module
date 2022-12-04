/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:23:44 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/04 15:01:12 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"
#include <iostream>
#include <iomanip>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid quantity args" << std::endl;
		return (0);
	}

	Converter arg(argv[1]);

	//std::cout << "literal type: " << arg.getStr() << std::endl;
	arg.print_char();
	arg.print_int();

	std::cout << std::fixed;
	std::cout << std::setprecision(1);
	arg.print_float();
	arg.print_double();

	return (0);
}