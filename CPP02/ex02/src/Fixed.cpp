/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 22:45:31 by cereais           #+#    #+#             */
/*   Updated: 2025/05/04 11:01:50 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

//constructor/destructor
Fixed::Fixed( void ) :_fixedPoint(0){
}

Fixed::Fixed( const int value ) : _fixedPoint(value << _rawBits) {
}

Fixed::Fixed( const float value ) : _fixedPoint(roundf(value * (1 << _rawBits))){
}

Fixed::Fixed(Fixed const & src) {
	*this = src;
}

Fixed::~Fixed( void ) {
}

Fixed& Fixed::operator=(Fixed const& raw) {
	
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &raw)
	this->_fixedPoint = raw._fixedPoint;
	return (*this);
}

//comparison operators
bool	Fixed::operator==(Fixed const& raw) {

	if (_fixedPoint == raw._fixedPoint)
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const& raw) {
	
	if (_fixedPoint != raw._fixedPoint)
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const& raw) {
	
	if (_fixedPoint < raw._fixedPoint)
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const& raw) {
	
	if (_fixedPoint <= raw._fixedPoint)
		return (true);
	return (false);
}

bool	Fixed::operator>(Fixed const& raw) {
	
	if (_fixedPoint > raw._fixedPoint)
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const& raw) {
	
	if (_fixedPoint >= raw._fixedPoint)
		return (true);
	return (false);
}

//arithmetic operators
Fixed	Fixed::operator+(Fixed const& raw) const {
	
	Fixed	temp;

	temp = _fixedPoint + raw._fixedPoint;
	return (temp);
}

Fixed &	Fixed::operator-(Fixed const& raw) const {
	
	Fixed	temp;

	temp = _fixedPoint - raw._fixedPoint;
	return (temp);
}

Fixed &	Fixed::operator/(Fixed const& raw) const {
	
	Fixed	temp;

	temp = _fixedPoint / raw._fixedPoint;
	return (temp);
}

Fixed &	Fixed::operator*(Fixed const& raw) const {
	
	Fixed	temp;

	temp = _fixedPoint * raw._fixedPoint;
	return (temp);
}

//member functions
float	Fixed::toFloat( void ) const {
	
	return ((float)_fixedPoint / (1 << _rawBits));
}

int	Fixed::toInt( void ) const {
	
	return (_fixedPoint >> _rawBits);
}




//getter/setter
int	Fixed::getRawBits( void ) const {
	
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPoint);
}

void	Fixed::setRawBits( int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPoint = raw;
}

//extra operator
std::ostream& operator<<(std::ostream& out, const Fixed& valueFixedPoint) {
	
	out << valueFixedPoint.toFloat();
	return (out);
}
