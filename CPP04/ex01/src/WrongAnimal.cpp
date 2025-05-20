/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:51:22 by cereais           #+#    #+#             */
/*   Updated: 2025/05/20 15:57:24 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {

	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {

	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy) {

	if (&copy != this)
		this->_type = copy._type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {

	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const{

	std::cout << "WrongAnimal sound?" << std::endl;
}

std::string WrongAnimal::getType() const{

	return (this->_type);
}
