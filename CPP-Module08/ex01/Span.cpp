/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:30:37 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/07 21:10:09 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	//std::cout << "Constructor called" << std::endl;
}

Span::~Span()
{
	//std::cout << "Destructor called" << std::endl;
}

Span::Span(unsigned int n)
{
	this->array.reserve(static_cast<std::size_t>(n));
}

Span::Span(const Span &span)
{
	*this = span;
}

Span	&Span::operator=(const Span &span)
{
	this->array.erase(this->array.begin(), this->array.end());

	this->array.reserve(span.array.size());
	for (std::vector<int>::const_iterator it = span.array.cbegin();
		it != span.array.cend(); it++)
		this->array.push_back(*it);
	return (*this);
}

void	Span::addNumber(int number)
{
	if (this->array.size() + 1 > this->array.capacity())
		throw std::runtime_error("Span already stores max number of elements");
	this->array.push_back(number);
}

void	Span::fillArray(const std::vector<int> &vector, std::size_t quality)
{
	this->array.erase(this->array.begin(), this->array.end());

	this->array.reserve(quality);
	std::size_t	i = 0;
	for (std::vector<int>::const_iterator it = vector.cbegin();
		it != vector.end() && i < quality; it++)
	{
		this->array.push_back(*it);
		i++;
	}
}

int	Span::shortestSpan() const
{
	if (this->array.size() < 2)
		throw std::runtime_error("Span is too small");

	int	shortestSpan = std::abs(*(this->array.cbegin() + 1) - *(this->array.cbegin()));
	for (std::vector<int>::const_iterator it = this->array.cbegin(); it != this->array.end(); it++)
	{
		for (std::vector<int>::const_iterator jt = it + 1;
			jt != this->array.end(); jt++)
		{
			if (std::abs(*jt - *it) < shortestSpan)
				shortestSpan = std::abs(*jt - *it);
		}
	}
	return (shortestSpan);
}

int	Span::longestSpan() const
{
	if (this->array.size() < 2)
		throw std::runtime_error("Span is too small");

	int		longestSpan = std::abs(*(this->array.cbegin() + 1) -
		*(this->array.cbegin()));
	for (std::vector<int>::const_iterator it = this->array.cbegin();
		it != this->array.end(); it++)
	{
		for (std::vector<int>::const_iterator jt = it + 1;
			jt != this->array.end(); jt++)
		{
			if (std::abs(*jt - *it) > longestSpan)
				longestSpan = std::abs(*jt - *it);
		}
	}
	return (longestSpan);
}

// void	Span::print() const
// {
	//int	i = 0;

	//std::cout << "size " << this->array.size() << std::endl << "number of elements: " << this->array.capacity() << std::endl;
	// for (std::vector<int>::const_iterator it = this->array.begin(); it != this->array.end(); it++)
	// {
	// 	std::cout << std::setw(4) << *it;
	// 	if ((i + 1) % 10 == 0)
	// 		std::cout << std::endl;
	// 	else
	// 		std::cout << " ";
	// 	i++;
	// }
	// std::cout << std::endl;

// 	std::cout << shortestSpan() << std::endl;
// 	std::cout << longestSpan() << std::endl;
// }