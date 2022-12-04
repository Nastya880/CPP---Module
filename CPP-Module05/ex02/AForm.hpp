/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:32:19 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/03 22:26:43 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP

# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_isSigned;
		int			_signGrade;
		int			_execGrade;
		virtual void		beExecuted(const Bureaucrat &bureaucrat) const = 0;

	public:
		AForm();
		AForm(const std::string &name, const int signGrade, const int execGrade);
		AForm(const AForm &copy);
		AForm	&operator=(const AForm &copy);
		virtual ~AForm();

		const std::string	&getName() const;
		bool				getIsSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;

		void				beSigned(const Bureaucrat &bureaucrat);
		void				execute(const Bureaucrat &executor) const;

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
		class FormNotSignedException: public std::exception
		{
			public:
				virtual char const	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &str, AForm const &form);

#endif
