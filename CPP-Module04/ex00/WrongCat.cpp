/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:59:00 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/30 13:47:17 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): _type("WrongCat")
{
	std::cout << "Default constructor called. !WrongCat from " << WrongAnimal::_type << " create" << std::endl;
}

WrongCat::WrongCat(std::string const &type):WrongAnimal(type), _type("WrongCat")
{
	std::cout << "Constructor with parametr called. WrongCat from " << WrongAnimal::_type << " create" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy): WrongAnimal(copy)
{
	*this = copy;
	std::cout << "Copy constructor called. WrongCat from " << WrongAnimal::_type << " copy" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor called. WrongCat from " << WrongAnimal::_type << " destroy" << std::endl;
}

WrongCat const	&WrongCat::operator=(WrongCat const &copy)
{
	std::cout << "Assignment operator for WrongCat from " << WrongAnimal::_type << " called" << std::endl;
	WrongAnimal::operator=(copy);
	return (*this);
}

std::string const	&WrongCat::getType() const
{
	return (this->_type);
}

void	WrongCat::setType(const std::string &type)
{
	this->_type = type;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat from " << WrongAnimal::_type << " make Meow!" << std::endl;
}