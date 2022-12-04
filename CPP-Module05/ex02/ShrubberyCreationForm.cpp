/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:03:58 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/03 22:28:10 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm::AForm("ShrubberyCreationForm", 145, 137), _target("defaultTarget")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): AForm::AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): AForm::AForm(copy), _target(copy._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

const ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	if (this != &copy)
		this->_target = copy._target;
	return (*this);
}

void	ShrubberyCreationForm::beExecuted(const Bureaucrat &bureaucrat) const
{
	std::ofstream	file;
	
	file.open(this->_target + "_shrubbery");
	if (!file.is_open())
	{
		std::cout << "File isn't open" << std::endl;
		return ;
	}
	file << "          &&&  &&  & &&         " << std::endl;
	file << "      && &'\'/&'\'|& ()|/ @, &&     " << std::endl;
	file << "      &'\'/(/&/||/& / _/)_&/_&    " << std::endl;
	file << "    &() &'\'/&|()|/&'\'/'% & ()     " << std::endl;
	file << "  & _'\'_&&_'\' |& |&&/&__%_/_& &&  " << std::endl;
	file << "&&   && & &| &| /& & % ()&  /&& " << std::endl;
	file << " ()&_---()&'\'&\'|&&-&&--%---()&   " << std::endl;
	file << "     &&     '\'|||                " << std::endl;
	file << "             |||                " << std::endl;
	file << "             |||                " << std::endl;
	file << "             |||                " << std::endl;
	file << "      , -=-& .-^- _             " << std::endl;
	file.close();
	std::cout << bureaucrat.getName() << " successfully created a shrubbery" << std::endl;
}

std::ostream	&operator<<(std::ostream &str, const ShrubberyCreationForm &form)
{
	return (str << form.getName() << " form, signed " << form.getIsSigned() << ", sign grade " << form.getSignGrade() << ", exec grade " << form.getExecGrade());
}