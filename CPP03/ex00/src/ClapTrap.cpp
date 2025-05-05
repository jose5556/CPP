/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:09:43 by cereais           #+#    #+#             */
/*   Updated: 2025/05/05 20:44:39 by cereais          ###   ########.fr       */
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

	*this = copy;
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

void ClapTrap::attack(const std::string& target) {
	
	
}

void ClapTrap::takeDamage(unsigned int amount) {

	
}

void ClapTrap::beRepaired(unsigned int amount) {
	
}
