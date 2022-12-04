/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:02:53 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/02 21:32:00 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm::AForm("PresidentialPardonForm", 25, 5), _target("defaultTarget")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm::AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): AForm::AForm(copy), _target(copy._target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	if (this != &copy)
		this->_target = copy._target;
	return (*this);
}

void	PresidentialPardonForm::beExecuted(const Bureaucrat &bureaucrat) const
{
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox by " <<  bureaucrat.getName() << std::endl;
}

std::ostream	&operator<<(std::ostream &str, PresidentialPardonForm const &form)
{
	return (str << form.getName() << " form, signed " << form.getIsSigned() << ", sign grade " << form.getSignGrade() << ", exec grade " << form.getExecGrade());
}