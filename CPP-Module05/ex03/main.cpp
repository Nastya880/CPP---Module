/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:25:39 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/03 22:25:47 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main( void )
{
	Intern		a;
	Bureaucrat	bur("Mister", 1);
	
	AForm	*form;
	form = a.makeForm("shrubbery request", "target");
	if (!form)
		return (1);
	
	bur.signForm(*form);
	bur.executeForm(*form);

	delete form;

	return (0);
}