/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:30:41 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/07 21:14:00 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <iomanip>
#include <exception>
#include <vector>
#include <string>
#include <cmath>

class	Span
{
	private:
		std::vector<int>	array;

	public:
		Span();
		~Span();
		Span(unsigned int n); // store a maximum of N integers
		Span(const Span &span);

		Span&	operator=(const Span &span);

		void		addNumber(int number);
		void		fillArray(const std::vector<int> &vector, std::size_t capacity);
		int			shortestSpan() const;
		int			longestSpan() const;
		//void		print() const;
		std::size_t	size() const;
};

#endif