/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:13:59 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/26 20:44:20 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap Gremislav("Gremislav");
    
    Gremislav.attack("Nix");
    Gremislav.attack("Sila");
    Gremislav.attack("Serg");

    Gremislav.takeDamage(2);
    Gremislav.beRepaired(4);
    
    Gremislav.attack("Serg");
    
    Gremislav.takeDamage(12);
    Gremislav.beRepaired(2);
    
    return 0;
}