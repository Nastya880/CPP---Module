/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:58:13 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/31 11:09:03 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Default constructor called. Dog from " << Animal::_type << " create" << std::endl;
}

Dog::Dog(std::string const &type): Animal(type)
{
	this->_brain = new Brain();
	std::cout << "Constructor with parametr called. Dog from " << Animal::_type << " create" << std::endl;
}

Dog::Dog(Dog const &copy): Animal(copy)
{
	this->_brain = new Brain(*copy._brain);
	std::cout << "Copy constructor called. Dog from " << Animal::_type << " copy" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Destructor called. Dog from " << Animal::_type << " destroy" << std::endl;
}

Dog const	&Dog::operator=(Dog const &copy)
{
	std::cout << "Copy assignment operator for Dog from called" << std::endl;
	if (this->_brain)
		delete (this->_brain);
	this->_brain = new Brain;
	this->_type = copy._type;

	return (*this);
}

std::string const	&Dog::getType() const
{
	return (this->_type);
}

void	Dog::setType(const std::string &type)
{
	this->_type = type;
}

void	Dog::makeSound() const
{
	std::cout << "Dog from " << Animal::_type << " says Gav!" << std::endl;
}

Brain &Dog::getBrain() const
{
	return (*this->_brain);
}

void	Dog::setBrain(Brain const &brain)
{
	*this->_brain = brain;
}
