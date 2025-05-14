/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:33:45 by cereais           #+#    #+#             */
/*   Updated: 2025/05/14 19:06:41 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {
	
	this->_name = "Unknown";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << "DiamondTrap -> " << this->_name << " envolved to something, im a bit confused." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
	ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name") {

	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;

	std::cout << "DiamondTrap -> " << this->_name << " envolved to something, im a bit confused." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy) {
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src) {
	
	if (this != &src) {
		
		this->_attackDamage = src._attackDamage;
		this->_energyPoints = src._energyPoints;
		this->_hitPoints = src._hitPoints;
		this->_name = src._name;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	
	std::cout << "DiamondTrap -> " << this->_name << " is... losing powers?" << std::endl;
}

void	DiamondTrap::whoAmI() {
	
	std::cout << "My ClapTrap name is " << ClapTrap::_name << std::endl;
    std::cout << "My DiamondTrap name is " << this->_name << std::endl;
}
