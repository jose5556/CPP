/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 23:30:34 by cereais           #+#    #+#             */
/*   Updated: 2025/05/09 18:26:12 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap() {

	this->_name = "Unknown";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;

	std::cout << "ScavTrap -> " << this->_name 
	<< " is also aware of his own individuality!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	
	this->_hitPoints = 100;  //representing the health of the ClapTrap
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap -> " << this->_name 
	<< " is also aware of his own individuality!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy) {
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
	<< " is no more aware of his own individuality!" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	
	if (_energyPoints > 0 && _hitPoints > 0) {

		_energyPoints--;
		std::cout << "ScavTrap " << _name << " attacks " << target <<  
		" causing " << _attackDamage << " points of damage." << std::endl;
	} else if (_energyPoints <= 0) {
		std::cout << "ScavTrap " << _name << " cannot attack because he has no more energy points." 
		<< std::endl;
	} else if (_hitPoints <= 0) {
		std::cout << "ScavTrap " << _name << " cannot attack because he is a bit dead :(" 
		<< std::endl;
	}
}

void ScavTrap::guardGate() {

	std::cout << "ScavTrap -> " << this->_name 
	<< " is now is Gate keeper mode!" << std::endl;
}
