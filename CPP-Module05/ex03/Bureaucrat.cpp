/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:25:35 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/03 22:13:05 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Default"), _grade(150)
{
	std::cout << "Default constructor. Bureaucrat create" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade = grade;
	std::cout << "Constructor with parametrs. Bureaucrat " << _name << " has grade " << _grade << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this != &copy)
		this->_grade = copy._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor called. Bureaucrat " << _name << " with a grade " << _grade << " destroy" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
	std::cout << "Bureaucrat was copy" << std::endl;
}

std::string const &Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::ostream	&operator<<(std::ostream &str, Bureaucrat const &form)
{
	str << form.getName() << ", bureaucrat grade " << form.getGrade();
	return (str);
}

void	Bureaucrat::upGrade()
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::downGrade()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error! Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error! Grade too low");
}

void Bureaucrat::signForm(AForm &form)
{
	if (form.getIsSigned())
	{
		std::cout << this->_name << " Form was already signed " << std::endl;
		return ;
	}
	try
	{
		form.beSigned(*this);
		std::cout  << this->_name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " couldn’t sign " << form.getName() << " because " << e.what() << "." << std::endl;
	}
}

void Bureaucrat::executeForm(const AForm & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& exc)
	{
		std::cout << this->getName() << " couldn’t execute " << form.getName() << " because " << exc.what() << "." << std::endl;
	}
}
