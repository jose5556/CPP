/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:13:42 by joseoliv          #+#    #+#             */
/*   Updated: 2025/05/15 20:02:06 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() {
	_type = "cat";
}

Cat::Cat(const Cat& copy) {

	*this = copy;
}

Cat& Cat::operator=(const Cat& copy) {

	if (&copy != this)
		this->_type = copy._type;
	return (*this);
}

Cat::~Cat(){
}

void	Cat::makeSound() const {

	std::cout << "Meow! UwU" << std::endl;
}
