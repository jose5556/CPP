/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 00:55:52 by cereais           #+#    #+#             */
/*   Updated: 2025/04/26 01:23:02 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::Zombie( void ) {
}

Zombie::~Zombie(void) {

	std::cout << name << ": is actually dead?" << std::endl;
}

void	Zombie::announce(void) {
	
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}