/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:58:13 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/30 22:32:20 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Default constructor called. Dog create" << std::endl;
}

Dog::Dog(Dog &copy)
{
	this->_brain = new Brain(*copy._brain);
	std::cout << "Copy constructor called. Dog copy" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Destructor called. Dog destroy" << std::endl;
}

Dog const	&Dog::operator=(Dog const &copy)
{
	std::cout << "Assignment operator for Dog from called" << std::endl;
	if (this->_brain)
		delete (this->_brain);
	this->_brain = new Brain;
	this->_type = copy._type;

	return (*this);
}

std::string	Dog::getType() const
{
	return (this->_type);
}

void	Dog::setType(const std::string &type)
{
	this->_type = type;
}

void	Dog::makeSound() const
{
	std::cout << "Dog says Gav!" << std::endl;
}

Brain &Dog::getBrain() const
{
	return (*this->_brain);
}
