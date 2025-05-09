/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:14:30 by cereais           #+#    #+#             */
/*   Updated: 2025/05/09 18:29:05 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap() {

	this->_name = "Unknown";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;

	std::cout << "FragTrap -> " << this->_name 
	<< " also want to become your friend UwU" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	
	this->_hitPoints = 100;  //representing the health of the ClapTrap
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap -> " << this->_name 
	<< " also want to become your friend UwU" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy) {
}

FragTrap& FragTrap::operator=(const FragTrap& src) {
	
	if (this != &src) {
		this->_attackDamage = src._attackDamage;
		this->_energyPoints = src._energyPoints;
		this->_hitPoints = src._hitPoints;
		this->_name = src._name;
	}
	return (*this);
}

FragTrap::~FragTrap() {
	
	std::cout << "FragTrap -> " << this->_name 
	<< " cannot become your friend anymore :(" << std::endl;
}

void	FragTrap::highFivesGuys(void) {

	std::cout << "Your friend FragTrap -> " << this->_name 
	<< " wants to high five you... UwU" << std::endl;
}
