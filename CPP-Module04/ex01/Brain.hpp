/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:51:37 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/30 18:52:17 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP

# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];
	
    public:
		Brain();
		Brain(Brain const &copy);
		Brain const	&operator=(Brain const &copy);
		~Brain();

		std::string const	&getIdea(int const &index) const;
		void				setIdea(std::string const &idea, int const &index);
};

#endif