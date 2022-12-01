/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:29:50 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/31 11:09:36 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Default constructor called. Cat creat " << std::endl;
}

Cat::Cat(Cat const &copy)
{
	*this = copy;
	this->_brain = new Brain(*copy._brain);
	std::cout << "Copy constructor called. Cat copy" << std::endl;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Destructor called. Cat destroy" << std::endl;
}

Cat const	&Cat::operator=(Cat const &copy)
{
	std::cout << "Copy assignment operator for Dog from called" << std::endl;
	if (this->_brain)
		delete (this->_brain);
	this->_brain = new Brain;
	this->_type = copy._type;

	return (*this);
}

std::string	Cat::getType() const
{
	return (this->_type);
}

void	Cat::makeSound() const
{
	std::cout << "Cat says Meow!" << std::endl;
}

Brain	&Cat::getBrain() const
{
	return (*this->_brain);
}

void	Cat::setBrain(Brain const &brain)
{
	*this->_brain = brain;
}