/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:36:57 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/14 23:36:58 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip> //for setw
#include <stdio.h> //getline

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact arr_contacts[8];

	public:
		int 	input(std::string *line);
		void	execute(std::string *line);
		int		get_cur_contact_number();
		void	search_contact(void);
		void	add_contact();

		PhoneBook();
		
		std::string str_formatting(int i, std::string str);
		void		fill_contact_fields(std::string *str);
		void		print_one_contact(int i);
};


#endif