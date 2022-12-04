/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:32:30 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/01 23:48:30 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("Default"), _isSigned(false), _signGrade(150), _execGrade(150)
{
    std::cout << "Default constructor. Form create" << std::endl;
}

Form::Form(const std::string &name, const int signGrade, const int execGrade): _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (this->_signGrade < 1)
		throw (Form::GradeTooHighException());
	if (this->_signGrade > 150)
		throw (Form::GradeTooLowException());
	if (this->_execGrade < 1)
		throw (Form::GradeTooHighException());
	if (this->_execGrade > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(const Form &copy): _name(copy._name), _isSigned(copy._isSigned), _signGrade(copy._signGrade), _execGrade(copy._execGrade)
{
	*this = copy;
}

Form const	&Form::operator=(const Form &copy)
{
	this->_isSigned = copy._isSigned;
	return (*this);
}

Form::~Form()
{
    std::cout << "Destructor called. Form " << _name << " destroy" << std::endl;
}

const std::string	&Form::getName() const
{
	return (this->_name);
}

const int	&Form::getSignGrade() const
{
	return (this->_signGrade);
}

const int	&Form::getExecGrade() const
{
	return (this->_execGrade);
}

const bool	&Form::getIsSigned() const
{
	return (this->_isSigned);
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw (Form::GradeTooLowException());
	this->_isSigned = true;
	std::cout << bureaucrat.getName() << " signed " << this->_name << std::endl;
}

char const	*Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}

char const	*Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}

std::ostream	&operator<<(std::ostream &str, Form const &form)
{
    str << "Form: " << form.getName() << ", signed " << form.getIsSigned() << ", sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade() << std::endl;
    
    return (str);
}