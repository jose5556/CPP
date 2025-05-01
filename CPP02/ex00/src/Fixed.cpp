/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 22:45:31 by cereais           #+#    #+#             */
/*   Updated: 2025/05/02 00:48:05 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed( void ) {

	_fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const & raw) {
	
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoint = raw.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const {
	
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPoint);
}

void	Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPoint = raw;
}
