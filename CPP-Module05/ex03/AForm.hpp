/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:32:19 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/03 22:10:38 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP

# define AForm_HPP

#include <iostream>
#include "fstream"
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	AForm
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_signGrade;
		const int			_execGrade;

		virtual	void beExecuted() const = 0;
	
	public:
		AForm();
		AForm(const std::string &name, const int signGrade, const int execGrade);
		AForm(const AForm &copy);
		AForm	&operator=(const AForm &copy);
		virtual ~AForm();

		const std::string	&getName() const;
		int					getIsSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		
		void				beSigned(const Bureaucrat &bureaucrat);
		void				execute(const Bureaucrat & executor) const;


	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};

	class FormNotSignedException : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &str, const AForm &form);

#endif