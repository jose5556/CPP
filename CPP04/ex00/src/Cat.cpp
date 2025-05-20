/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:13:42 by joseoliv          #+#    #+#             */
/*   Updated: 2025/05/20 18:15:12 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal() {

	std::cout << "Cat constructor called" << std::endl;
	_type = "cat";
}

Cat::Cat(const Cat& copy) : Animal() {

	*this = copy;
}

Cat& Cat::operator=(const Cat& copy) {

	if (&copy != this)
		this->_type = copy._type;
	return (*this);
}

Cat::~Cat() {
	
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const {

	std::cout << "Meow! UwU" << std::endl;
}

std::string Cat::getType() const {
	
	return (this->_type);
}
