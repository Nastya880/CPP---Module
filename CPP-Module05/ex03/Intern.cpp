/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:35:42 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/03 22:25:13 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern	&Intern::operator=(const Intern &copy)
{
	if (this != &copy)
	{
	}
	return (*this);
}

Intern::Intern(const Intern  &copy)
{
	*this = copy;
}

AForm *Intern::makeForm( std::string const &formName, std::string const &target )
{
	int		i = 0;
	AForm	*ptr = NULL;

	std::string arr[] = { "robotomy request", "presidential request",  "shrubbery request" };
	while (arr[i] != formName && i < 3)
		i++;
	switch (i)
	{
	case 0:
		ptr = new RobotomyRequestForm(target);
		break ;
	case 1:
		ptr = new PresidentialPardonForm(target);
		break ;
	case 2:
		ptr = new ShrubberyCreationForm(target);
		break ;
	}
	if (i == 3)
		throw UndefinedFormException();
	else
		std::cout << "Intern creates " << ptr->getName() << std::endl;
	return (ptr);
}

const char* Intern::UndefinedFormException::what() const throw()
{
	return ("Form is undefined");
}
