/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 01:34:16 by cereais           #+#    #+#             */
/*   Updated: 2025/04/26 06:27:49 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie(std::string name) {
    
    this->name = name;
}

Zombie::Zombie(void) {

	static int N = 0;
	index = ++N;
}

Zombie::~Zombie(void) {

	std::cout << name << "[" << index << "]: is actually dead?" << std::endl;
}

void	Zombie::setName(std::string name) {
	
	this->name = name;
}

void	Zombie::announce(void) {
	
	std::cout << name << "[" << index << "]: BraiiiiiiinnnzzzZ..." << std::endl;
}
