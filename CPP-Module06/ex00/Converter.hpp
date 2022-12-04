/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:24:38 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/04 21:05:40 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP

# define CONVERTER_HPP

#include <iostream>
#include <math.h>

class Converter
{
	private:
		std::string	_str;

	public:
		Converter();
		Converter(std::string str);
		Converter(const Converter &copy);
		Converter &	operator=(const Converter &copy);
		~Converter();

		std::string getStr() const;

		int	print_char();
		int	print_int();
		int	print_float();
		int	print_double();
};

#endif