/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:10:06 by cereais           #+#    #+#             */
/*   Updated: 2025/05/12 18:07:47 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/DiamondTrap.hpp"

int	main(void) {
	
	DiamondTrap	roberto("roberto");

	std::cout << std::endl;

	//test if he can show both names
	roberto.whoAmI();

	std::cout << std::endl;

	//should use ScavTrap attack method
	roberto.attack("pinguim");

	std::cout << std::endl;

	//should use ClapTrap take damage method
	roberto.takeDamage(35);
	roberto.takeDamage(35);
	roberto.takeDamage(35);

	std::cout << std::endl;

}