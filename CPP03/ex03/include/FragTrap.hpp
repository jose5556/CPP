/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:14:24 by cereais           #+#    #+#             */
/*   Updated: 2025/05/09 18:17:23 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& copy);
		FragTrap& operator=(const FragTrap& src);
		~FragTrap();

		void highFivesGuys(void);
};