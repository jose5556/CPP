/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 00:49:23 by cereais           #+#    #+#             */
/*   Updated: 2025/04/26 01:25:34 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int    main( void ) {
	
	Zombie z1("bob");
	Zombie *z2;

	z2 = newZombie("roberto");
	if (!z2)
	{
		std::cout << "Error! Fatal." << std::endl;
		return (1);
	}
	z1.announce();
	z2->announce();
	randomChump("mimosa");
	delete(z2);
}