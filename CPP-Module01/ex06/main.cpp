/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:40:47 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/19 14:54:27 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	harl_switch(char *argv, Harl &harl)
{
    std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int level;

    level = -1;

	for (int i = 0; i < 4; i++)
		if (levels[i] == argv)
			level = i;
	switch (level)
	{
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break ;
		default:
			std::cout << "Input correct level" << std::endl;
	}
}

int	main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
		std::cout << "Input level" << std::endl;
	else
		harl_switch(argv[1], harl);
	return (0);
}