/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:09:43 by cereais           #+#    #+#             */
/*   Updated: 2025/05/05 23:24:58 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap() {

	this->_name = "Unknown";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;

	std::cout << "ClapTrap -> " << this->_name 
	<< " created and ready to kill!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name){
	
	this->_hitPoints = 10;  //representing the health of the ClapTrap
	this->_energyPoints = 10;
	this->_attackDamage = 0;

	std::cout << "ClapTrap -> " << this->_name 
	<< " created and ready to kill!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {

	(void)copy;
	return ;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src) {
	
	if (this != &src) {
		this->_attackDamage = src._attackDamage;
		this->_energyPoints = src._energyPoints;
		this->_hitPoints = src._hitPoints;
		this->_name = src._name;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {

	std::cout << "ClapTrap -> " << this->_name 
	<< " was shut down!" << std::endl;
}

std::string ClapTrap::getName() {
	
	return (this->_name);
}

int ClapTrap::getEnergyPoints() {
	
	return (this->_energyPoints);
}

void ClapTrap::attack(const std::string& target) {
	
	if (_energyPoints > 0 && _hitPoints > 0) {

		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target <<  
		" causing " << _attackDamage << " points of damage." << std::endl;
	} else if (_energyPoints <= 0) {
		std::cout << "ClapTrap " << _name << " cannot attack because he has no more energy points." 
		<< std::endl;
	} else if (_hitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " cannot attack because he is a bit dead :(" 
		<< std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {

	if (_hitPoints > 0) {
		
		std::cout << "ClapTrap " << _name << " took " 
		<< amount << " points of damage." <<std::endl;
		_hitPoints -= amount;
		if (_hitPoints <= 0) {
			
			std::cout << "ClapTrap " << _name << " took " 
			<< amount << " points of damage and died :(" <<std::endl;
		}
	} else {
		
		std::cout << "ClapTrap " << _name << 
		" cannot take more damage, because he is already dead :(" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	
	if (_hitPoints > 0 && _energyPoints > 0) {
		
		_hitPoints += amount;
		_energyPoints--;
		std::cout << "ClapTrap " << _name << 
		" repaired " << amount << " points, having in total " << _hitPoints 
		<< " amount of health." << std::endl;
	} else if (_hitPoints <= 0) {
		
		std::cout << "ClapTrap " << _name << 
		" cannot be repaired, because he is already dead :(" << std::endl;
	} else if (_energyPoints <= 0) {
		
		std::cout << "ClapTrap " << _name << 
		" cannot be repaired, because he has no more energy points." << std::endl;
	}
}
