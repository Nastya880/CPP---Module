/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:59:09 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/19 11:59:28 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		/* !!!takes the Weapon in its constructor */
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		/* displays <name> attacks with their <weapon type>*/
		void	attack(void);
		void	setWeapon(Weapon weapon);
};