/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:37:55 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/30 13:18:41 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP

# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal();
		WrongAnimal(std::string const &type);
		WrongAnimal(WrongAnimal const &copy);
		WrongAnimal const	&operator=(WrongAnimal const &copy);
		virtual ~WrongAnimal();
		
		std::string const	&getType() const;
		void				setType(std::string const &type);

		void	makeSound() const;
};

#endif