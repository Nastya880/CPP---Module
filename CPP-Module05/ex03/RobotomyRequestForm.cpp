/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:03:25 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/03 22:19:33 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm::AForm("RobotomyRequestForm", 72, 45), _target("defaultTarget")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm::AForm("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): AForm::AForm(copy), _target(copy._target)
{
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	if (this != &copy)
	{
		this->_target = copy._target;
	}
	return (*this);
}

void	RobotomyRequestForm::beExecuted() const
{
	std::cout << "some drrrrrrrrilling noises" << std::endl;
	std::cout << this->_target << " has been robotomized successfully 50% of the time" << std::endl;
}

std::ostream	&operator<<(std::ostream &str, const RobotomyRequestForm &form)
{
	return (str << form.getName() << " form, signed " << form.getIsSigned() << ", sign grade " << form.getSignGrade() << ", exec grade " << form.getExecGrade());
}