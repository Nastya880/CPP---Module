/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:21:14 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/24 21:43:49 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int int_value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = int_value << Fixed::_fractionalBits;
}

Fixed::Fixed(const float float_value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(float_value * ft_pow(2, Fixed::_fractionalBits));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed&	Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawBits = copy.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

void	Fixed::setRawBits(const int raw)
{
	this->_rawBits = raw;
}

int		Fixed::toInt(void) const
{
	return (this->_rawBits >> Fixed::_fractionalBits);
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_rawBits) /
		ft_pow(2, Fixed::_fractionalBits));
}

std::ostream&	operator<<(std::ostream &str, const Fixed &copy)
{
	str << copy.toFloat();
	return (str);
}

int				ft_pow(int base, int exponent)
{
	int		result = 1;

	for (int i = exponent; i > 0; i--)
		result *= base;
	return (result);
}