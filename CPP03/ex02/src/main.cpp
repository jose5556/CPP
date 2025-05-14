/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:10:06 by cereais           #+#    #+#             */
/*   Updated: 2025/05/14 18:58:40 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int	main(void) {
	
	FragTrap	roberto("roberto");
	FragTrap	manuel("manuel");

	std::cout << std::endl;

	//test if he can high five you UwU
	roberto.highFivesGuys();

	//test if a FragTrap can attack (clapTrap func)
	manuel.attack("roberto"); 

	std::cout << std::endl;

}