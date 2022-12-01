/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:19:06 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/24 21:28:17 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _rawBits(0)
{ }

Fixed::~Fixed()
{ }

Fixed::Fixed(int int_value)
{
	this->_rawBits = int_value << Fixed::_fractionBits;
}

Fixed::Fixed(float float_value)
{
	this->_rawBits = roundf(float_value *ft_pow(2, Fixed::_fractionBits));
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed&	Fixed::operator=(const Fixed &copy)
{
	this->_rawBits = copy.getRawBits();
	return (*this);
}

bool	Fixed::operator<(const Fixed &copy) const
{
	return (this->toFloat() < copy.toFloat());
}

bool	Fixed::operator>(const Fixed &copy) const
{
	return (this->toFloat() > copy.toFloat());
}

bool	Fixed::operator<=(const Fixed &copy) const
{
	return (this->toFloat() <= copy.toFloat());
}

bool	Fixed::operator>=(const Fixed &copy) const
{
	return (this->toFloat() >= copy.toFloat());
}

bool	Fixed::operator==(const Fixed &copy) const
{
	return (this->toFloat() == copy.toFloat());
}

bool	Fixed::operator!=(const Fixed &copy) const
{
	return (this->toFloat() != copy.toFloat());
}

Fixed	Fixed::operator+(const Fixed &copy) const
{
	return (Fixed(this->toFloat() + copy.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &copy) const
{
	return (Fixed(this->toFloat() - copy.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &copy) const
{
	return (Fixed(this->toFloat() * copy.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &copy) const
{
	return (Fixed(this->toFloat() / copy.toFloat()));
}

Fixed&	Fixed::operator++()
{
	this->_rawBits++;
	return (*this);
}

Fixed&	Fixed::operator--()
{
	this->_rawBits--;
	return (*this);
}

Fixed	Fixed::operator++(int value)
{
	Fixed	tmp;

	tmp = *this;

	if (!value)
		value = 1;
	this->setRawBits(this->getRawBits() + value);
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(this->getRawBits());
	this->_rawBits--;
	return (tmp);
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
	return (this->_rawBits >> Fixed::_fractionBits);
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_rawBits) /
		ft_pow(2, Fixed::_fractionBits));
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

const Fixed	&Fixed::min(Fixed const &copy1, Fixed const &copy2)
{
	if (copy1 < copy2)
		return (copy1);
	return (copy2);
}

const Fixed	&Fixed::max(Fixed const &copy1, Fixed const &copy2)
{
	if (copy1 > copy2)
		return (copy1);
	return (copy2);
}