/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:13:40 by joseoliv          #+#    #+#             */
/*   Updated: 2025/05/15 20:04:39 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal() {
	_type = "Dog";
}

Dog::Dog(const Dog& copy) {

	*this = copy;
}

Dog& Dog::operator=(const Dog& copy) {

	if (&copy != this)
		this->_type = copy._type;
	return (*this);
}

Dog::~Dog(){
}

void	Dog::makeSound() const {

	std::cout << "Auuuuu!" << std::endl;
}
