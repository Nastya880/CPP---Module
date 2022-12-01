/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:38:30 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/30 13:46:56 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal. That's all!")
{
	std::cout << "Default constructor called. " << this->_type << " create" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type): _type(type)
{
	std::cout << "Constructor with parametr called. " << this->_type << " create" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	*this = copy;
	std::cout << "Copy constructor called. " << this->_type << " copy" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor called. " << this->_type << " destroy" << std::endl;
}

WrongAnimal const	&WrongAnimal::operator=(WrongAnimal const &copy)
{
	std::cout << "Assignment operator for " << this->_type << " called" << std::endl;
	this->_type = copy.getType();
	return (*this);
}

std::string const	&WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::setType(const std::string &type)
{
	this->_type = type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal " << this->_type << " make a sound!" << std::endl;
}
