/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:17:29 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/26 17:40:53 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap Gremislav("Gremislav");
    Gremislav.attack("Nix");
    Gremislav.attack("Silviya");

    Gremislav.takeDamage(5);
    Gremislav.takeDamage(10);
    Gremislav.beRepaired(4);
    Gremislav.guardGate();

    Gremislav.takeDamage(125);
    Gremislav.guardGate();
    return 0;
}
