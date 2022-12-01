/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:21:20 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/24 21:42:55 by tandroma         ###   ########.fr       */
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
		static const int	_fractionalBits = 8;
	public :
		Fixed(void);
		~Fixed();
        Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &copy);

		Fixed&	operator= (const Fixed &copy);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream&	operator<<(std::ostream &str, const Fixed &copy);
int				ft_pow(int base, int exponent);

#endif
