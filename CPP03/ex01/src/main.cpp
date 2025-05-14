/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:10:06 by cereais           #+#    #+#             */
/*   Updated: 2025/05/14 18:56:51 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int	main(void) {
	
	ScavTrap	roberto("roberto");
	ScavTrap	manuel("manuel");
	ScavTrap	shy;

	std::cout << std::endl;

	//test if guardGate works as expected
	roberto.guardGate();

	std::cout << std::endl;

	//test if a scavTrap can attack (clapTrap func)
	for (int j = 0; j < 51; j++) {
		shy.attack("roberto");
	}

	std::cout << std::endl;

}
