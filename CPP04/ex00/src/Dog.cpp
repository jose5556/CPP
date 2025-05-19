/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:13:40 by joseoliv          #+#    #+#             */
/*   Updated: 2025/05/19 18:52:18 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal() {

	_type = "Dog";
}

Dog::Dog(const Dog& copy) : Animal() {

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

std::string Dog::getType() const {
	
	return (this->_type);
}
