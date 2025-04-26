/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 06:58:23 by cereais           #+#    #+#             */
/*   Updated: 2025/04/26 22:03:47 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string _type) : _type(_type) {
}

Weapon::~Weapon()
{
}

std::string	Weapon::getType() const {
	
	return (_type);
}

void	Weapon::setType(std::string type) {
	
	this->_type = type;
}
