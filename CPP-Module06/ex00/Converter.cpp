/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:23:48 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/04 21:07:29 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter() : _str("Default")
{
	//std::cout << "Default constructor called. Converter created" << std::endl;
}

Converter::Converter(std::string str) : _str(str)
{
	//std::cout << "Constructot with parametrs called. Converter creted" << std::endl;
}

Converter::~Converter()
{
	//std::cout << "Destructor called. Converter destroyed" << std::endl;
}

Converter::Converter(const Converter &copy)
{
	_str = copy.getStr();
	//std::cout << "Copy constructor called. Converter copied" << std::endl;
}

Converter &Converter::operator=(const Converter &copy)
{
	_str = copy.getStr();
	//std::cout << "Assignement operator called" << std::endl;

	return (*this);
}

std::string Converter::getStr() const
{
	return (this->_str);
}

int	Converter::print_char()
{
	char cha = 0;
	std::cout << "char: ";

	if (_str.length() == 1)
	{
		int symb = 0;

		try
		{
			symb = stoi(_str);
			cha = static_cast<char>(symb);
		}
		catch (const std::invalid_argument &e){
			cha = _str[0];
		}

		if (cha >= ' ' && cha <= '~')
		{
			std::cout << "'"  << cha << "'" << std::endl;
			return 0;
		}
		else
			std::cout << "Non displayable" << std::endl;

		return 0;
	}

	else
	{
		int	symb = 0;

		try
		{
			symb = stoi(_str);
		}
		catch (const std::invalid_argument &e)
		{
			std::cout << "impossible" << std::endl; // invalid argument
			return 0;
		}
		catch (const std::out_of_range &e)
		{
			std::cout << "impossible" << std::endl; //out of range
			return 0;
		}
		if (symb < -128 || symb > 127)
		{
			std::cout << "impossible" << std::endl; //out of range
			return 0;
		}

		cha = static_cast<char>(symb);

		if (symb >= ' ' && symb <= '~')
		{
			std::cout << "'" << cha << "'" << std::endl;
			return 0;
		}
		else
			std::cout << "Non displayable" << std::endl;
	}

	return 0;
}

int	Converter::print_int()
{
	int	in = 0;

	std::cout << "int: ";

	try
	{
		if (_str.length() == 1)
        {
            if (_str >= "0" && _str <= "9")
                in = _str[0] - 48;
            else
                in = _str[0] + 0;
        }
        else
			in = stoi(_str);

        if (in > INT_MAX || in < INT_MIN)
			std::cout << "impossible" << std::endl; // out of range
        else
		    std::cout << in << std::endl;
		return 0;
	}
	catch (const std::invalid_argument &e)
	{
		std::cout << "impossible" << std::endl; //invalid argument
		return 0;
	}
	catch (const std::out_of_range &e)
	{
		std::cout << "impossible" << std::endl; //out of int range
		return 0;
	}
}

int	Converter::print_float()
{
	float	floa = 0.0;

	std::cout << "float: ";
	try
	{
		if (_str.length() == 1)
		{
			if (_str >= "0" && _str <= "9")
				floa = _str[0] - 48;
			else
				floa = _str[0] + 0.0;
		}
		else
			floa = stof(_str);

		if (_str == "+inf" || _str == "-inf" || _str == "inf")
			std::cout << _str << "f" << std::endl;
		else if (_str == "+inff" || _str == "-inff"|| _str == "inff")
			std::cout << _str << std::endl;
		else if (floa > fabs((pow(2,sizeof(float) * 8.0 - 1) - 1)))
			std::cout << "impossible" << std::endl;
		else
			std::cout << floa << "f" << std::endl;

		return 0;
	}
	catch (const std::invalid_argument &e)
	{
		std::cout << "impossible" << std::endl; // invalid argument
		return 0;
	}
	catch (const std::out_of_range &e)
	{
		std::cout << "impossible" << std::endl; //out of float range
		return 0;
	}
}

int	Converter::print_double()
{
	double	doubl = 0;

	std::cout << "double: ";
	try
	{
		if (_str.length() == 1)
		{
			if (_str >= "0" && _str <= "9")
 				doubl = _str[0] - 48;
			else
				doubl = _str[0] + 0.0;
		}
		else
			doubl = stof(_str);

		if (_str == "+inf" || _str == "-inf" || _str == "+inff" || _str == "-inff" || _str == "inf" || _str == "inff")
			std::cout << _str << std::endl;
		else if (doubl > fabs((pow(2,sizeof(double) * 8.0 - 1) - 1)))
			std::cout << "impossible" << std::endl;
		else
			std::cout << doubl << std::endl;

		return 0;
	}
	catch (const std::invalid_argument &e){
		std::cout << "impossible" << std::endl; //invalid argument
		return 0;
	}
	catch (const std::out_of_range &e)
	{
		std::cout << "impossible" << std::endl; // out of double range
		return 0;
	}
}