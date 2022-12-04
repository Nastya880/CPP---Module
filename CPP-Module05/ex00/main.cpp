/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:25:39 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/01 21:26:23 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b1("Stepanida Grigorievna", 4);
	Bureaucrat b2("Ukrop Ukropovich", 1);
	Bureaucrat b3("Natalia Tarasovna", 150);

    std::cout << b1 << b2 << b3;
    
    std::cout << "\nUPGRADING " << b1.getName() << "\n" << std::endl;
	try
	{
		b1.upGrade();
	}
	catch(const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
		std::cout << "Type of exception : " << typeid(exception).name() << std::endl;
	}
	std::cout << "Now grade of " << b1.getName() << " is " << b1.getGrade() <<std::endl;

	std::cout << "\nDOWNGRADING " << b2.getName() << "\n" << std::endl;
	try
	{
		b2.downGrade();
	}
	catch(const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
		std::cout << "Type of exception : " << typeid(exception).name() << std::endl;
	}
	std::cout << "Now grade of " << b2.getName() << " is " << b2.getGrade() << std::endl;

	try
	{
		Bureaucrat b4("Maksim Petrovich", 151);
	}
	catch(const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
		std::cout << "Type exception : " << typeid(exception).name() << std::endl;
	}

	try
	{
		Bureaucrat b4("Silviya Olegovna", 0);
	}
	catch(const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
		std::cout << "Type exception : " << typeid(exception).name() << std::endl;
	}

	try
	{
		b2.upGrade();
		b2.upGrade();
	}
	catch(const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
		std::cout << "Type of exception : " << typeid(exception).name() << std::endl;
	}

	try
	{
		b3.downGrade();
	}
	catch(const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
		std::cout << "Type of exception : " << typeid(exception).name() << std::endl;
	}

	return (0);
}