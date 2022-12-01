/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:17:23 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/24 21:28:28 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private :
		int					_rawBits;
		static const int	_fractionBits = 8;
	public :
		Fixed(void);
		~Fixed();
		Fixed(int int_value);
		Fixed(float float_value);
		Fixed(const Fixed &copy);

		Fixed&	operator=(const Fixed &copy);
		bool	operator<(const Fixed &copy) const;
		bool	operator>(const Fixed &copy) const;
		bool	operator<=(const Fixed &copy) const;
		bool	operator>=(const Fixed &copy) const;
		bool	operator==(const Fixed &copy) const;
		bool	operator!=(const Fixed &copy) const;
		Fixed	operator+(const Fixed &copy) const;
		Fixed	operator-(const Fixed &copy) const;
		Fixed	operator*(const Fixed &copy) const;
		Fixed	operator/(const Fixed &copy) const;
		Fixed&	operator++();
		Fixed&	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		int		toInt(void) const;
		float	toFloat(void) const;

		static const Fixed	&min(Fixed const &copy1, Fixed const &copy2);
		static const Fixed	&max(Fixed const &copy1, Fixed const &copy2);
};

std::ostream&	operator<<(std::ostream &out, const Fixed &copy);
int				ft_pow(int base, int exponent);

#endif