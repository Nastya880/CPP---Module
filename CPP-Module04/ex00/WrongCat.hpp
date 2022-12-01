/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:59:37 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/30 13:47:39 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP

# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	private:
		std::string	_type;

	public:
		WrongCat();
		WrongCat(std::string const &type);
		WrongCat(WrongCat const &copy);
		WrongCat const	&operator=(WrongCat const &copy);
		~WrongCat();

		std::string const	&getType() const;
		void				setType(std::string const &type);
		
		void	makeSound() const;
};

#endif