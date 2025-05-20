/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:51:27 by cereais           #+#    #+#             */
/*   Updated: 2025/05/20 15:59:22 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {

	std::cout << "WrongCat constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal() {

	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& copy) {

	if (&copy != this)
		this->_type = copy._type;
	return (*this);
}

WrongCat::~WrongCat() {

	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sound?" << std::endl;
}
