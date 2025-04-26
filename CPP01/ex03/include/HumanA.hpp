/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 07:00:55 by cereais           #+#    #+#             */
/*   Updated: 2025/04/26 22:17:49 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "../include/Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon&		_weapon;
	
public:
	void	attack(void);
	HumanA(std::string	name, Weapon& _weapon);
	~HumanA();
};

#endif