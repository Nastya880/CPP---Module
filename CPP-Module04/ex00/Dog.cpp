/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:58:13 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/30 14:26:34 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): _type("Dog")
{
	std::cout << "Default constructor called. Dog from " << Animal::_type << " create" << std::endl;
}

Dog::Dog(std::string const &type): Animal(type), _type("Dog")
{
	std::cout << "Constructor with parametr called. Dog from " << Animal::_type << " create" << std::endl;
}

Dog::Dog(Dog const &copy): Animal(copy)
{
	*this = copy;
	std::cout << "Copy constructor called. Dog from " << Animal::_type << " copy" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Destructor called. Dog from " << Animal::_type << " destroy" << std::endl;
}

Dog const	&Dog::operator=(Dog const &copy)
{
	std::cout << "Assignment operator for Dog from " << Animal::_type << " called" << std::endl;
	Animal::operator=(copy);
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