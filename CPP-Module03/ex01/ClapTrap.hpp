/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:17:24 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/26 20:45:00 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const &copy);
        ClapTrap	&operator=(ClapTrap const &copy);
		~ClapTrap();
		
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
