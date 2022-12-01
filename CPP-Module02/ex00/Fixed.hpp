/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:57:48 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/23 20:39:41 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

#include <iostream>

class	Fixed
{
	private :
		int					_rawBits;
        static const int	_fractionalBits = 8;
	public :
		Fixed(void);
		~Fixed();
		Fixed(const Fixed& copy);

		Fixed&	operator=(const Fixed& copy);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);
};

#endif