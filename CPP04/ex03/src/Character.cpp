/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:41:30 by joseoliv           #+#    #+#             */
/*   Updated: 2025/05/22 20:11:52 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character() {

	_name = "Unknown";
	_trash = NULL;
	for (int i = 0; i < 4; i++) {
		_inventory[i] = NULL;
	}
}

Character::Character(std::string name) : _name(name) {

	_trash = NULL;
	for (int i = 0; i < 4; i++) {
		_inventory[i] = NULL;
	}
}

Character::~Character(){

	for (int i = 0; i < 4; i++) {
		if (_inventory[i])
			delete (_inventory[i]);
	}

	t_list*	tmp;
	while (_trash) {
		delete _trash->content;
		tmp = _trash;
		_trash = _trash->next;
		delete (tmp);
	}
}

Character::Character(const Character& copy) {
	
	_name = copy._name;
	for (int i = 0; i < 4; i++) {
		if (copy._inventory[i]) {
			delete (_inventory[i]);
			_inventory[i] = copy._inventory[i]->clone();
		}
		else 
			_inventory[i] = NULL;
	}
}

Character& Character::operator=(const Character& src) {
	
	if (&src != this) {
		_name = src._name;
		for (int i = 0; i < 4; i++) {
			delete(_inventory[i]);
			_inventory[i] = NULL;
		}
		for (int i = 0; i < 4; i++) {
			if (src._inventory[i])
				this->_inventory[i] = src._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

std::string const & Character::getName() const {
	
	return (this->_name);
}

void Character::equip(AMateria* m) {
	
	for (int i = 0; i < 4; i++) {
		if (!(_inventory[i])) {
			_inventory[i] = m;
			return ;
		}
	}
	delete (m);
}

void Character::unequip(int idx) {
	
	if (idx < 0 || idx > 3 || !_inventory[idx])
		return;

	t_list* new_node = new t_list;
	new_node->content = _inventory[idx];
	new_node->next = _trash;
	_trash = new_node;

	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {

	
    if ( idx >= 0 && idx < 4 )
    {
        if (this->_inventory[idx])
            this->_inventory[idx]->use(target);
    }
}
