/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:24:48 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/30 18:42:50 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(std::string const &type);
		Animal(Animal const &copy);
        Animal const	&operator=(Animal const &copy);
		virtual ~Animal();

		std::string const	&getType() const;
		void				setType(std::string const &type);

		virtual void	makeSound() const;
		virtual Brain 		&getBrain(void) const = 0;
};

#endif