/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:29:15 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/30 13:45:42 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
	private:
		std::string	_type;

	public:
		Cat();
		Cat(std::string const &type);
		Cat(Cat const &copy);
		Cat const	&operator=(Cat const &copy);
		~Cat();

		std::string const	&getType() const;
		void				setType(std::string const &type);

		void	makeSound() const;
};

#endif