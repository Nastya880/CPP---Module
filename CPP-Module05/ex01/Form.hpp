/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:32:19 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/02 21:29:14 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_execGrade;

	public:
		Form();
		Form(const std::string &name, const int signGrade, const int execGrade);
		Form(Form const &copy);
        Form const	&operator=(Form const &copy);
		~Form();

		std::string const	&getName() const;
		const bool			&getIsSigned() const;
		const int			&getSignGrade() const;
		const int			&getExecGrade() const;

		void	beSigned(Bureaucrat &bureaucrat);

		class GradeTooHighException: public std::exception
		{
			public:
				virtual char const	*what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual char const	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &str, Form const &form);

#endif