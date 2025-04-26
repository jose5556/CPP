/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 07:06:46 by cereais           #+#    #+#             */
/*   Updated: 2025/04/26 22:16:32 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name) {

	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon& weapon) {
	
	this->_weapon = &weapon;
}

void	HumanB::attack(void) {
	
	if (this->_weapon)
		std::cout << this->_name << " attacks with their weapon " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with their weapon " << "mouth?" << std::endl;
}
