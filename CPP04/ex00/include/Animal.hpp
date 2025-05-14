/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:15:21 by cereais           #+#    #+#             */
/*   Updated: 2025/05/14 17:23:23 by joseoliv         ###   ########.fr       */
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

		void	makeSound();
	
	protected:
		std::string	_type;
};