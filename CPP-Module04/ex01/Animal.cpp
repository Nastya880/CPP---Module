/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:57:06 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/30 18:53:22 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal. That's all!")
{
	std::cout << "Default constructor called. " << this->_type << " create" << std::endl;
}

Animal::Animal(std::string const &type): _type(type)
{
	std::cout << "Constructor with parametr called!. " << this->_type << " create" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	*this = copy;
	std::cout << "Copy constructor called. " << this->_type << " copy" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor called. " << this->_type << " destroy" << std::endl;
}

Animal const	&Animal::operator=(Animal const &copy)
{
	std::cout << "Assignment operator for " << this->_type << " called" << std::endl;
	this->_type = copy.getType();
	return (*this);
}

std::string const	&Animal::getType() const
{
	return (this->_type);
}

void	Animal::setType(const std::string &type)
{
	this->_type = type;
}

void	Animal::makeSound() const
{
	std::cout << this->_type << " make a sound!" << std::endl;
}