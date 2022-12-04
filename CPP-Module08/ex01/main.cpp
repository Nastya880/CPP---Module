/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:30:45 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/07 21:12:01 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <random>

int	main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl;

	std::vector<int> vector;

	vector.push_back(0);
	vector.push_back(12);
	vector.push_back(-10);
	vector.push_back(4);
	vector.push_back(7);
	vector.push_back(25);
	vector.push_back(-100);

	Span vecSpan;
	vecSpan.fillArray(vector, 7);
	//vecSpan.print();
	std::cout << vecSpan.shortestSpan() << std::endl;
	std::cout << vecSpan.longestSpan() << std::endl;
	std::cout << std::endl;

	std::vector<int> vector1;
	std::default_random_engine generator;
	generator.seed(std::time(nullptr));
	std::uniform_int_distribution<int> distribution(-1000, 0000);
	for (int i = 0; i < 1000; i++)
		vector1.push_back(distribution(generator));
	Span vecSpan1;
	vecSpan1.fillArray(vector1, 1000);
	//vecSpan1.print();
	std::cout << vecSpan1.shortestSpan() << std::endl;
	std::cout << vecSpan1.longestSpan() << std::endl;
	std::cout << std::endl;

	std::vector<int> vector2;
	generator.seed(std::time(nullptr));
	for (int i = 0; i < 10000; i++)
		vector2.push_back(distribution(generator));
	Span vecSpan2;
	vecSpan2.fillArray(vector2, 10000);
	std::cout << std::endl;

	try
	{
		Span span(3);
		span.addNumber(-10);
		span.addNumber(7);
		span.addNumber(7);
		//span.print();
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
		std::cout << std::endl;
		span.addNumber(7);
	}
	catch (const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Span span(1);
		span.addNumber(-10);
		//span.print();
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	catch (const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
	}

	return (0);
}