/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 22:45:31 by cereais           #+#    #+#             */
/*   Updated: 2025/05/02 17:50:46 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed( void ) :_fixedPoint(0){

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int value ) : _fixedPoint(value << _rawBits) {

	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float value ) : _fixedPoint(roundf(value * (1 << _rawBits))){

	std::cout << "Float constructor called" << std::endl;
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
	if (this != &raw)
		this->_fixedPoint = raw._fixedPoint;
	return (*this);
}

float	Fixed::toFloat( void ) const {
	
	return ((float)_fixedPoint / (1 << _rawBits));
}

int	Fixed::toInt( void ) const {
	
	return (_fixedPoint >> _rawBits);
}

int	Fixed::getRawBits( void ) const {
	
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPoint);
}

void	Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPoint = raw;
}

std::ostream& operator<<(std::ostream& out, const Fixed& valueFixedPoint) {

	out << valueFixedPoint.toFloat();
	return (out);
}
