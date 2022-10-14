/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:36:50 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/14 23:36:51 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	int i = 0;
	while (i < 8)
	{
		(this->arr_contacts)[i] = Contact("", "", "", "", "");
		std::cout << ((this->arr_contacts)[i]).get_fname();
		i++;
	}
};

int PhoneBook::get_cur_contact_number()
{
	static int i = -1; 

	i = (i + 1) % 8;
	return (i);
}

int	PhoneBook::input(std::string *line)
{
	std::cout << "Input command: ";
	std::getline(std::cin, *line, '\n');
	if (*line == "EXIT")
		return (0);
	else
		return (1);
}

std::string PhoneBook::str_formatting(int i, std::string str)
{
	if (str == "fname")
	{
		if (((this->arr_contacts)[i]).get_fname().size() <= 10)
			return (((this->arr_contacts)[i]).get_fname());
		else
			return (((this->arr_contacts)[i]).get_fname().substr(0, 9) + ".");
	}
	else if (str == "lname")
	{
		if (((this->arr_contacts)[i]).get_lname().size() <= 10)
			return (((this->arr_contacts)[i]).get_lname());
		else
			return (((this->arr_contacts)[i]).get_lname().substr(0, 9) + ".");
	}
	else if (str == "nickname")
	{
		if (((this->arr_contacts)[i]).get_nickname().size() <= 10)
			return (((this->arr_contacts)[i]).get_nickname());
		else
			return (((this->arr_contacts)[i]).get_nickname().substr(0, 9) + ".");
	}
	else
		return ("error in format");
}

void	PhoneBook::print_one_contact(int i)
{
	std::cout << "First name: " << ((this->arr_contacts)[i]).get_fname() << std::endl;
	std::cout << "Last name: " << ((this->arr_contacts)[i]).get_lname() << std::endl;
	std::cout << "Nickname: " << ((this->arr_contacts)[i]).get_nickname() << std::endl;
	std::cout << "Phone: " << ((this->arr_contacts)[i]).get_phone() << std::endl;
	std::cout << "Secret: " << ((this->arr_contacts)[i]).get_secret() << std::endl;
}

void	PhoneBook::search_contact()
{
	int i = 0;

	std::cout 	<< std::setw(10) <<"index"<<"|"
				<< std::setw(10) << "first name" << "|"
				<< std::setw(10) << "last name" << "|"
				<< std::setw(10) << "nickname" << std::endl ;
	while (i < 8 && ((this->arr_contacts)[i]).get_fname() != "")
	{
		std::cout 	<< std::setw(10) << i <<"|"
					<< std::setw(10) << this->str_formatting(i, "fname") << "|"
					<< std::setw(10) << this->str_formatting(i, "lname") << "|"
					<< std::setw(10) << this->str_formatting(i, "nickname") << std::endl ;
		i++;
	}
	if (((this->arr_contacts)[0]).get_fname() == "")
		return;
	else{
		std::cout << "Input index for more information: ";
		while (scanf("%d", &i) > 0 && i < 8 && i > -1 && ((this->arr_contacts)[i]).get_fname() != "") {
			//std::cin.sync();
			this->print_one_contact(i);
			std::cout << "Input index for more information: ";
		}
		std::cin.ignore();
	}
}

void	PhoneBook::fill_contact_fields(std::string *str)
{
	std::getline(std::cin, *str);
	while (*str == ""){
		std::cout << "Contact fields can't be empty. Try again: ";
		std::getline(std::cin, *str);
	}
}

void		PhoneBook::add_contact()
{
	std::string  str;
	int i = this->get_cur_contact_number();

	std::cout << "Input first name: ";
	this->fill_contact_fields(&str);
	(this->arr_contacts)[i].set_fname(str);
	std::cout << "Input last name: ";
	this->fill_contact_fields(&str);
	(this->arr_contacts)[i].set_lname(str);
	std::cout << "Input nickname: ";
	this->fill_contact_fields(&str);
	(this->arr_contacts)[i].set_nickname(str);
	std::cout << "Input phone: ";
	this->fill_contact_fields(&str);
	(this->arr_contacts)[i].set_phone(str);
	std::cout << "Input secret: ";
	this->fill_contact_fields(&str);
	(this->arr_contacts)[i].set_secret(str);
}

void		PhoneBook::execute(std::string *line)
{
	if ("ADD" == *line)
		this->add_contact();
	else if ("SEARCH" == *line)
		this->search_contact();
	else
		std::cout << "Invalid operation. Input again" << std::endl;
}