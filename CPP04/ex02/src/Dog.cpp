/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:13:40 by joseoliv          #+#    #+#             */
/*   Updated: 2025/05/20 17:36:56 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain()) {

	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog& copy) : Animal() {

	_brain = new Brain(*copy._brain);
	*this = copy;
}

Dog& Dog::operator=(const Dog& copy) {

	if (&copy != this) {
		
		Animal::operator=(copy);
		delete (_brain);
		_brain = new Brain(*copy._brain);
	}
	return (*this);
}

Dog::~Dog() {

	delete (_brain);
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const {

	std::cout << "Auuuuu!" << std::endl;
}

std::string Dog::getType() const {
	
	return (this->_type);
}
