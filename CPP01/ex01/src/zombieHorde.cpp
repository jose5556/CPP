/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 01:34:12 by cereais           #+#    #+#             */
/*   Updated: 2025/04/26 06:15:24 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	
	Zombie  *arrayZombies;

		
	try {
			
		arrayZombies = new Zombie[N];
	} catch (std::bad_alloc&) {
			
		std::cerr << "Error! Fatal." << std::endl;
		return (NULL);
	}

	for (int i = 0; i < N; i++) {

		arrayZombies[i].setName(name);
	}
	return (arrayZombies);
}
