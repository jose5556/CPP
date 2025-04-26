/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 07:02:38 by cereais           #+#    #+#             */
/*   Updated: 2025/04/26 22:13:32 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA(std::string	name, Weapon& weapon) : _name(name), _weapon(weapon) {
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void) {
	
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
