/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:14:24 by cereais           #+#    #+#             */
/*   Updated: 2025/05/14 18:57:47 by joseoliv         ###   ########.fr       */
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

		void	highFivesGuys(void);
};