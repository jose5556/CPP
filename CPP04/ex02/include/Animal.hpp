/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:15:21 by cereais           #+#    #+#             */
/*   Updated: 2025/05/20 18:30:34 by cereais          ###   ########.fr       */
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
		virtual ~Animal();

		virtual void makeSound() const = 0;
		virtual std::string getType() const = 0;
	
	protected:
		std::string	_type;
};
