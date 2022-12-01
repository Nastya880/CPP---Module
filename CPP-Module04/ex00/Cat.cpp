/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:29:50 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/30 13:45:58 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): _type("Cat")
{
	std::cout << "Default constructor called. Cat from " << Animal::_type << " create" << std::endl;
}

Cat::Cat(std::string const &type):Animal(type), _type("Cat")
{
	std::cout << "Constructor with parametr called. Cat from " << Animal::_type << " create" << std::endl;
}

Cat::Cat(Cat const &copy): Animal(copy)
{
	*this = copy;
	std::cout << "Copy constructor called. Cat from " << Animal::_type << " copy" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor called. Cat from " << Animal::_type << " destroy" << std::endl;
}

Cat const	&Cat::operator=(Cat const &copy)
{
	std::cout << "Assignment operator for Cat from " << Animal::_type << " called" << std::endl;
	Animal::operator=(copy);
	return (*this);
}

std::string const	&Cat::getType() const
{
	return (this->_type);
}

void	Cat::setType(const std::string &type)
{
	this->_type = type;
}

void	Cat::makeSound() const
{
	std::cout << "Cat from " << Animal::_type << " says Meow!" << std::endl;
}