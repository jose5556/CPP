/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 07:03:57 by cereais           #+#    #+#             */
/*   Updated: 2025/04/26 22:17:53 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "../include/Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon*		_weapon;
	
public:
	void	attack(void);
	void	setWeapon(Weapon& weapon);
	HumanB(std::string	name);
	~HumanB();
};

#endif