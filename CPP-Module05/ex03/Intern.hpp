/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:35:38 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/03 22:17:08 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP

# define INTERN_HPP

#include <iostream>
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class	AForm;

class	Intern
{
	public:
		Intern();
		Intern(const Intern  &copy);
		Intern	&operator=(const Intern &copy);
		~Intern();

		AForm	*makeForm( std::string const &formName, std::string const &target );
	
	class UndefinedFormException : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

#endif