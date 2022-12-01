/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:50:42 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/26 20:46:04 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "Default constructor called. FragTrap " << this->_name << " create" << std::endl;
}

FragTrap::FragTrap(std::string const &name): ClapTrap(name)
{
	std::cout << "Constructor with parametrs called. FragTrap from ClapTrap " << this->_name << " created." << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called. FragTrap " << this->_name << " destroy" << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy): ClapTrap(copy)
{
	std::cout << "FragTrap " << this->_name << " copy" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &copy)
{
	std::cout << "Copy assignment operator called for FragTrap" << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_hitPoints <= 0)
		std::cout << "Cannot high five because: ClapTrap " << this->_name << " dead" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " says: \"High five!\"." << std::endl;
}
