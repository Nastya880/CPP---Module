/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:22:46 by tandroma          #+#    #+#             */
/*   Updated: 2022/11/04 21:29:33 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP

# define DATA_HPP

#include <iostream>

class Data
{
	private:
		std::string _data;

	public:
		Data();
		Data(std::string data);
		Data(const Data &copy);
		Data & operator=(const Data &copy);
		~Data();

		std::string getData() const;
};

#endif