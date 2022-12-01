/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:51:34 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/30 18:50:37 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor called. Brain create" << std::endl;
}

Brain::Brain(Brain const &copy)
{
	*this = copy;
	std::cout << "Copy constructor called. Brain copy" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Destructor called. Brain destroy" << std::endl;
}

Brain const	&Brain::operator=(Brain const &copy)
{
	std::copy(copy._ideas, copy._ideas + 100, this->_ideas);
	std::cout << "Assignment operator for Brain called" << std::endl;
	return (*this);
}

std::string const	&Brain::getIdea(int const &index) const
{
	if (index >= 0 && index < 100)
		return (this->_ideas[index]);
	return (this->_ideas[0]);
}

void	Brain::setIdea(std::string const &idea, int const &index)
{
	if (index >= 0 && index < 100)
		this->_ideas[index] = idea;
}