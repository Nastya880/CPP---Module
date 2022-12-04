/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:25:30 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/01 21:30:16 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		std::string 		_name;
		int					_grade; //1 - highest, 150 - lowest
	
    public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		~Bureaucrat();

		Bureaucrat	&operator=(Bureaucrat const &copy);

		const std::string	&getName() const;
        int					getGrade() const;

		void	upGrade();
		void	downGrade();

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

std::ostream	&operator<<(std::ostream &str, const Bureaucrat &bureaucrat);

#endif