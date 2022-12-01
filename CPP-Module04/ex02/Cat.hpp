/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:29:15 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/30 22:29:55 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
	private:
		Brain		*_brain;
		std::string	_type;

	public:
		Cat();
		Cat(Cat const &copy);
		Cat const	&operator=(Cat const &copy);
		~Cat();

		std::string	getType() const;

		void	makeSound() const;
		
		Brain	&getBrain() const;
		void	setBrain(Brain const &brain);
};

#endif