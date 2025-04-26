/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 01:01:29 by cereais           #+#    #+#             */
/*   Updated: 2025/04/26 05:44:45 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie*	newZombie( std::string name ) {
	
	Zombie* newZombie;

	try {
		newZombie = new Zombie(name);
	} catch (std::bad_alloc&) {
		std::cerr << "Error! Fatal." << std::endl;
		return (NULL);
	}
	return (newZombie);
}
