/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:24:48 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/30 22:08:16 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP

# define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
	protected:
		std::string	_type;

	public:
		AAnimal();
		AAnimal(std::string const &type);
		AAnimal(AAnimal const &copy);
        AAnimal const	&operator=(AAnimal const &copy);
		virtual ~AAnimal();

		virtual std::string	getType() const;

		virtual void	makeSound() const;
		virtual Brain 		&getBrain(void) const = 0;
};

#endif