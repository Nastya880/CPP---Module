/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:23:04 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/04 21:59:50 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(): _data("Default")
{
	std::cout << "Default constructor called. Data created" << std::endl;
}

Data::Data(std::string data): _data(data)
{
	std::cout << "Constructor with parametrs called. Data created" << std::endl;
}

Data &Data::operator=(const Data &copy)
{
	this->_data = copy.getData();
	std::cout << "Assignement operator called" << std::endl;

	return (*this);
}

Data::~Data()
{
	std::cout << "Destructor called. Data destroyed" << std::endl;
}

Data::Data(const Data &copy): _data(copy.getData())
{
	std::cout << "Copy constructor called. Data copied" << std::endl;
}

std::string Data::getData() const
{
	return (_data);
}