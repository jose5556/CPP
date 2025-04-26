/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 01:34:14 by cereais           #+#    #+#             */
/*   Updated: 2025/04/26 06:24:46 by cereais          ###   ########.fr       */
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
	int			index;
public:
	void	setName(std::string name);
	//void	setindex(void);
	void	announce(void);
	Zombie(std::string name);
	Zombie();
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif