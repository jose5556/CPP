/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 01:34:18 by cereais           #+#    #+#             */
/*   Updated: 2025/04/26 06:16:15 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main( void ) {
    
    Zombie *z1;
    int     N = 10;
    
    z1 = zombieHorde(N, "zee");
    
    if (!z1)
        return (0);
    for (int i = 0; i < N; i++) {
        
        z1[i].announce();
    }

    delete [] z1;
}
