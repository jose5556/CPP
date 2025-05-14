/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:10:06 by cereais           #+#    #+#             */
/*   Updated: 2025/05/14 19:09:24 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/DiamondTrap.hpp"

int	main(void) {
	
	DiamondTrap	zezinho("zezinho");

	std::cout << std::endl;

	//test if DiamondTrap can use FragTrap special ability
	zezinho.highFivesGuys();

	std::cout << std::endl;

	//test if DiamondTrap can use ScavTrap special ability
	zezinho.guardGate();

	std::cout << std::endl;

	//test if he can show both names
	zezinho.whoAmI();

	std::cout << std::endl;

	//should use ScavTrap attack method
	zezinho.attack("pinguim");

	std::cout << std::endl;

	//should use ClapTrap take damage method
	zezinho.takeDamage(35);
	zezinho.takeDamage(35);
	zezinho.takeDamage(35);

	std::cout << std::endl;

}