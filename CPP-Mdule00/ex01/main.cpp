/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 23:36:40 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/14 23:36:42 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		main()
{
	PhoneBook	phoneBook;
	std::string		lineContact;

	while(phoneBook.input(&lineContact)){
		phoneBook.execute(&lineContact);
	}
}