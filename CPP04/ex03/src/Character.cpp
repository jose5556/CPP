/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:41:30 by cereais           #+#    #+#             */
/*   Updated: 2025/05/22 17:40:55 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character() {}

Character::Character(std::string name) : _name(name) {

	for (int i = 0; i < 4; i++) {
		_inventory[i] = nullptr; //NULL
	}
}

Character::~Character(){}

Character::Character(const Character& copy) {
	
	_name = copy._name;
	for (int i = 0; i < 4; i++) {
		if (copy._inventory[i])
			_inventory[i] = copy._inventory[i]->clone();
		else 
			_inventory[i] = nullptr;
	}
}

Character& Character::operator=(const Character& src) {
	
}

std::string const & Character::getName() const {
	
	return (this->_name);
}

void Character::equip(AMateria* m) {
	
}

void Character::unequip(int idx) {
	
}

void Character::use(int idx, ICharacter& target) {
	
}