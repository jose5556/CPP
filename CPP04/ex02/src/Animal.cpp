/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:13:44 by joseoliv          #+#    #+#             */
/*   Updated: 2025/05/20 16:43:58 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal() : _type("") {

	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& copy) {

	*this = copy;
}

Animal& Animal::operator=(const Animal& copy) {

	if (&copy != this)
		this->_type = copy._type;
	return (*this);
}

Animal::~Animal() {

	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound() const{
}

std::string Animal::getType() const{

	return (this->_type);
}
