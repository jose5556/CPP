/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:13:42 by joseoliv          #+#    #+#             */
/*   Updated: 2025/05/20 17:34:22 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal(), _brain(new Brain()) {

	std::cout << "Cat constructor called" << std::endl;
	_type = "cat";
}

Cat::Cat(const Cat& copy) : Animal() {

	_brain = new Brain(*copy._brain);
	*this = copy;
}

Cat& Cat::operator=(const Cat& copy) {

	if (&copy != this) {
		
		Animal::operator=(copy);
		delete (_brain);
		_brain = new Brain(*copy._brain);
	}
	return (*this);
}

Cat::~Cat() {

	delete (_brain);
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const {

	std::cout << "Meow! UwU" << std::endl;
}

std::string Cat::getType() const {
	
	return (this->_type);
}
