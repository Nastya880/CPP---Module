/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:58:31 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/30 22:29:48 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
	private:
		Brain		*_brain;
		std::string	_type;

	public:
		Dog();
		Dog(std::string const &type);
		Dog(Dog	&copy);
		Dog const	&operator=(Dog const &copy);
		~Dog();

		std::string	getType() const;
		void		setType(std::string const &type);
		
		void	makeSound() const;
		Brain 	&getBrain() const;
};

#endif