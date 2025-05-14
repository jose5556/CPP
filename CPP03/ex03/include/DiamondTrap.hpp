/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:33:52 by cereais           #+#    #+#             */
/*   Updated: 2025/05/14 19:06:42 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& copy);
		DiamondTrap& operator=(const DiamondTrap& src);
		~DiamondTrap();
		void whoAmI();
		using ScavTrap::attack;

	private:
		std::string	_name;
};
