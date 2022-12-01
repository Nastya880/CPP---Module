/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:54:29 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/26 20:48:35 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    FragTrap Gremislav("Gremislav");
    
    Gremislav.highFivesGuys();
    Gremislav.attack("Nix");
    Gremislav.takeDamage(5);
    Gremislav.beRepaired(4);

    std::cout << "\n\n";

    ScavTrap Sila("Sila");
    
    Gremislav.highFivesGuys();
    Gremislav.attack("Phil");
    Gremislav.takeDamage(8);
    Gremislav.beRepaired(2);

    return 0;
}