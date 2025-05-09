/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:10:06 by cereais           #+#    #+#             */
/*   Updated: 2025/05/09 18:10:10 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int	main(void) {
	
	ScavTrap	roberto("roberto");
	ScavTrap	manuel("manuel");
	//ClapTrap	andre("andre");
	ScavTrap	shy;

	std::cout << std::endl;

	//test if they can attack until they have no more energy
	for (int i = 0; i < 5; i++) {
		roberto.guardGate();
	}

	std::cout << std::endl;

	//test if they can actually die
	for (int j = 0; j < 51; j++) {
		shy.attack("roberto");
	}

	std::cout << std::endl;

}