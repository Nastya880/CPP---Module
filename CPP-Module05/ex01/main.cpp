/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:25:39 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/01 22:20:44 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b1("Ivan Ivanovich", 3);

	Form f1("form1", 100, 100);
	Form f2("form2", 5, 5);
	Form f3("form3", 1, 1);

	std::cout << f1 << f2 << f3;

	try
	{
		f1.beSigned(b1);
	}
	catch(const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
		std::cout << "Type of exception " << typeid(exception).name() << std::endl;
	}

	try
	{
		f2.beSigned(b1);
	}
	catch(const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
		std::cout << "Type exception " << typeid(exception).name() << std::endl;
	}

	try
	{
		f3.beSigned(b1);
	}
	catch(const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
		std::cout << "Type exception " << typeid(exception).name() << std::endl;
	}

	try
	{
		b1.upGrade();
		f3.beSigned(b1);
	}
	catch(const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
		std::cout << "Type exception " << typeid(exception).name() << std::endl;
	}

	std::cout << "\nINVALID\n" << std::endl;
	try
	{
		Form f4("form4", 151, 151);
	}
	catch(const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
		std::cout << "Type exception " << typeid(exception).name() << std::endl;
	}

	std::cout << "\nINVALID\n" << std::endl;
	try
	{
		Form f4("form5", 0, 0);
	}
	catch(const std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
		std::cout << "Type exception " << typeid(exception).name() << std::endl;
	}

	return (0);
}