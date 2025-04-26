/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 06:56:13 by cereais           #+#    #+#             */
/*   Updated: 2025/04/26 07:04:49 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON.HPP
# define WEAPON.HPP

#include <string>

class Weapon
{
private:
	std::string type;
public:
	std::string getType() const;
	void        setType(std::string type);
	Weapon(/* args */);
	~Weapon();
};

#endif