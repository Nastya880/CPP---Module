/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:02:53 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/03 22:17:51 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm::AForm("PresidentialPardonForm", 25, 5), _target("defaultTarget")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm::AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &src): AForm("default_name", 72, 45)
{
	*this = src;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=( PresidentialPardonForm const &rhs )
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::beExecuted() const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
