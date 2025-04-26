/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 07:00:55 by cereais           #+#    #+#             */
/*   Updated: 2025/04/26 07:06:12 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA.HPP
# define HUMANA.HPP

#include "../include/Weapon.hpp"

class HumanA
{
private:
	Weapon		weapon;
	std::string	name;
	
public:
	void	attack(void);
	HumanA(/* args */);
	~HumanA();
};

#endif