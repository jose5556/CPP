/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:15:21 by cereais           #+#    #+#             */
/*   Updated: 2025/05/15 20:03:35 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal {
	
	public:
		Animal();
		Animal(const Animal& copy);
		Animal& operator=(const Animal& other);
		~Animal();

		virtual void makeSound() const;
		std::string getType();
	
	protected:
		std::string	_type;
};