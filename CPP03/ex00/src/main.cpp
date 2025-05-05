/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:10:06 by cereais           #+#    #+#             */
/*   Updated: 2025/05/05 23:22:33 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int	main(void) {
	
	ClapTrap* roberto = new ClapTrap("roberto");
	ClapTrap* manuel = new ClapTrap("manuel");
	ClapTrap* joaquim = new ClapTrap("joaquim");
	ClapTrap* shy = new ClapTrap;

	std::cout << std::endl;

	//test if they can attack until they have no more energy
	for (int i = 0; i < 11; i++) {
		roberto->attack(manuel->getName());
	}

	std::cout << std::endl;

	//test if they can repair until they have no more energy
	for (int j = 0; j < 11; j++) {
		manuel->beRepaired(3);
	}

	std::cout << std::endl;

	//test if they can actually die
	for (int j = 0; j < 6; j++) {
		joaquim->takeDamage(2);
	}

	std::cout << std::endl;

	delete(roberto);
	delete(manuel);
	delete(joaquim);
	delete(shy);
}