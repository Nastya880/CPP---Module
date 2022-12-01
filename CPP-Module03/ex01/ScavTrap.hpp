/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:17:37 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/27 22:16:23 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string const name);
		ScavTrap(const ScavTrap &copy);
		ScavTrap	&operator=(const ScavTrap &copy);
		~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate();
};

#endif
