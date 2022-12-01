/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:22:17 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/18 22:47:27 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	private:
		std::string	_name;
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
};

/* Creates a zombie, name it, and return it so can use it outside of the function scope */
Zombie	*newZombie(std::string name);

/* Creates a zombie, name it, and the zombie announces itself in HEAP */
void	randomChump(std::string name);

#endif