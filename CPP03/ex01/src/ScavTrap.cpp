/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 23:30:34 by cereais           #+#    #+#             */
/*   Updated: 2025/05/06 18:10:39 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap() {

	this->_name = "Unknown";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;

	std::cout << "ScavTrap -> " << this->_name 
	<< " created and is aware of his own individuality!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	
	this->_hitPoints = 100;  //representing the health of the ClapTrap
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap -> " << this->_name 
	<< " created and is aware of his own individuality!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) {

	(void)copy;
	return ;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) {
	
	if (this != &src) {
		this->_attackDamage = src._attackDamage;
		this->_energyPoints = src._energyPoints;
		this->_hitPoints = src._hitPoints;
		this->_name = src._name;
	}
	return (*this);
}

ScavTrap::~ScavTrap() {
	
	std::cout << "ScavTrap -> " << this->_name 
	<< " was shut down!" << std::endl;
}

void ScavTrap::guardGate() {

	std::cout << "ScavTrap -> " << this->_name 
	<< " is now is Gate keeper mode!" << std::endl;
}
