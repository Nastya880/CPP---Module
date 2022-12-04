/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 21:32:30 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/03 22:26:26 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("Default"), _isSigned(false), _signGrade(100), _execGrade(100)
{
	std::cout << "Default constructor. Form create" << std::endl;
}

AForm::AForm(const std::string &name, const int signGrade, const int execGrade): _name(name), _isSigned(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (this->_signGrade < 1 || this->_execGrade < 1)
		throw (AForm::GradeTooHighException());
	if (this->_signGrade > 150 || this->_execGrade > 150)
		throw (AForm::GradeTooLowException());
}

AForm::AForm(const AForm &copy): _name(copy._name), _isSigned(copy._isSigned), _signGrade(copy._signGrade), _execGrade(copy._execGrade)
{
	*this = copy;
	std::cout << "AForm was copy" << std::endl;
}

AForm	&AForm::operator=( AForm const &copy )
{
	if (this != &copy)
	{
		this->_isSigned = copy._isSigned;
	}
	return (*this);
}

AForm::~AForm()
{
	std::cout << "Destructor called. Form " << _name << " destroy" << std::endl;
}

const std::string	&AForm::getName() const
{
	return (this->_name);
}

int	AForm::getSignGrade() const
{
	return (this->_signGrade);
}

int	AForm::getExecGrade() const
{
	return (this->_execGrade);
}

bool	AForm::getIsSigned() const
{
	return (this->_isSigned);
}

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw (AForm::GradeTooLowException());
	this->_isSigned = true;
	std::cout << bureaucrat.getName() << " signed " << this->_name << std::endl;
}

char const	*AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

char const	*AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

char const	*AForm::FormNotSignedException::what() const throw()
{
	return ("Form not signed");
}

std::ostream	&operator<<(std::ostream &str, AForm const &form)
{
	str << "AForm " << form.getName() << ", signed " << form.getIsSigned() << ", sign grade: " << form.getSignGrade() << ", exec grade: " << form.getExecGrade() << std::endl;

	return (str);
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (!this->getIsSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > AForm::getExecGrade())
		throw AForm::GradeTooLowException();
	beExecuted(executor);
}