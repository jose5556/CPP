/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 00:53:06 by cereais           #+#    #+#             */
/*   Updated: 2025/04/26 01:22:28 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string name;
public:
    void announce( void );
    Zombie(std::string name);
    Zombie( void );
    ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif