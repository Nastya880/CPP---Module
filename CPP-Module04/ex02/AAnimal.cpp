/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:57:06 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/30 22:08:26 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(): _type("Animal. That's all!")
{
	std::cout << "Default constructor called. " << this->_type << " create" << std::endl;
}

AAnimal::AAnimal(std::string const &type): _type(type)
{
	std::cout << "Constructor with parametr called!. " << this->_type << " create" << std::endl;
}

AAnimal::AAnimal(AAnimal const &copy)
{
	*this = copy;
	std::cout << "Copy constructor called. " << this->_type << " copy" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Destructor called. " << this->_type << " destroy" << std::endl;
}

AAnimal const	&AAnimal::operator=(AAnimal const &copy)
{
	std::cout << "Assignment operator for " << this->_type << " called" << std::endl;
	this->_type = copy.getType();
	return (*this);
}

std::string	AAnimal::getType() const
{
	return (this->_type);
}

void	AAnimal::makeSound() const
{
	std::cout << this->_type << " make a sound!" << std::endl;
}