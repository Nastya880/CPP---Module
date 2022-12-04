/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:25:39 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/03 22:27:13 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <exception>

int	main()
{
	Bureaucrat b1("Dmitriy Ivanovich", 3);

	ShrubberyCreationForm scf("tree");
	RobotomyRequestForm rrf("Clever robot");
	PresidentialPardonForm prf("Prezident");

	try
	{
		scf.execute(b1);
	}
	catch(const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
		std::cout << "Type of exception " << typeid(exception).name() << std::endl;
	}

	try
	{
		scf.beSigned(b1);
		scf.execute(b1);
	}
	catch(const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
		std::cout << "Type of exception " << typeid(exception).name() << std::endl;
	}

	Bureaucrat b2("Ukrop Ukropovich", 6);

	try
	{
		prf.beSigned(b2);
	}
	catch(const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
		std::cout << "Type of exception " << typeid(exception).name() << std::endl;
	}

	try
	{
		b2.upGrade();
		prf.beSigned(b2);
		prf.execute(b2);
	}
	catch(const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
		std::cout << "Type of exception " << typeid(exception).name() << std::endl;
	}

	Bureaucrat b3("Stepanida Grigorievna", 20);

	try
	{
		rrf.beSigned(b3);
		rrf.execute(b3);
	}
	catch(const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
		std::cout << "Type of exception " << typeid(exception).name() << std::endl;
	}

	try
	{
		for (int i = 0; i < 55; i++)
			b3.downGrade();
		rrf.beSigned(b3);
		rrf.execute(b3);
	}
	catch(const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
		std::cout << "Type of exception " << typeid(exception).name() << std::endl;
	}

	return (0);
}

