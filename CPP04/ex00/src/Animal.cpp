/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:13:44 by joseoliv          #+#    #+#             */
/*   Updated: 2025/05/14 17:29:11 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal() : _type(NULL) {
}

Animal::Animal(const Animal& copy) {

	*this = copy;
}

Animal& Animal::operator=(const Animal& copy) {

	if (&copy != this)
		this->_type = copy._type;
	return (*this);
}

Animal::~Animal(){
}

void	Animal::makeSound() {
}