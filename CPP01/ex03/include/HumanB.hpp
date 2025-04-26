/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 07:03:57 by cereais           #+#    #+#             */
/*   Updated: 2025/04/26 07:06:33 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB.HPP
# define HUMANB.HPP

#include "../include/Weapon.hpp"

class HumanB
{
private:
	Weapon		weapon;
	std::string	name;
	
public:
	void	attack(void);
	HumanB(/* args */);
	~HumanB();
};

#endif