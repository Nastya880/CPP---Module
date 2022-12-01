/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:58:31 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/30 00:31:17 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	private:
		std::string	_type;

	public:
		Dog();
		Dog(std::string const &type);
		Dog(Dog const &copy);
		Dog const	&operator=(Dog const &copy);
		~Dog();

		std::string const	&getType() const;
		void				setType(std::string const &type);

		void	makeSound() const;
};

#endif