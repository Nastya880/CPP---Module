/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tandroma <tandroma@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:50:08 by tandroma          #+#    #+#             */
/*   Updated: 2022/10/26 20:45:52 by tandroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("someone"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called. ClapTrap " << this->_name << " create" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor with parametrs called. ClapTrap " << this->_name << " create" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called. ClapTrap " << this->_name << " destroy" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_attackDamage++;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " dead" << std::endl;
	else if (!this->_energyPoints)
		std::cout << "ClapTrap " << this->_name << " hasn't energy points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints > 0 && this->_energyPoints)
	{
		std::cout << "ClapTrap " << this->_name << " repaired with " << amount << " points" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	if (this->_hitPoints <= 0)
		std::cout << "Can't repaired, because: ClapTrap " << this->_name << " dead" << std::endl;
	else if (!this->_energyPoints)
		std::cout << "ClapTrap " << this->_name << " hasn't energy points" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints > 0)
	{
		std::cout << "Take damage! ClapTrap " << this->_name << " attacked " << amount << " points of damage" << std::endl;
		this->_hitPoints -= amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " already dead!" << std::endl;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
}

ClapTrap:: ClapTrap(const ClapTrap& copy)
{
	std::cout << "ClapTrap " << this->_name << " copy" << std::endl;
    *this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
	std::cout << "Assignment operator for ClapTrap called" << std::endl;
    this->_attackDamage = copy._attackDamage;
    this->_energyPoints = copy._energyPoints;
    this->_hitPoints = copy._hitPoints;
    this->_name = copy._name;
    return (*this);
}