/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 22:45:31 by cereais           #+#    #+#             */
/*   Updated: 2025/05/05 14:27:49 by cereais          ###   ########.fr       */
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

	if (this != &raw)
		this->_fixedPoint = raw._fixedPoint;
	return (*this);
}

//comparison operators
bool	Fixed::operator==(Fixed const& raw) const{

	if (_fixedPoint == raw._fixedPoint)
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const& raw) const{
	
	if (_fixedPoint != raw._fixedPoint)
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const& raw) const{
	
	if (_fixedPoint < raw._fixedPoint)
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const& raw) const{
	
	if (_fixedPoint <= raw._fixedPoint)
		return (true);
	return (false);
}

bool	Fixed::operator>(Fixed const& raw) const{
	
	if (_fixedPoint > raw._fixedPoint)
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const& raw) const{
	
	if (_fixedPoint >= raw._fixedPoint)
		return (true);
	return (false);
}

//arithmetic operators
Fixed	Fixed::operator+(Fixed const& raw) const {
	
	return Fixed(this->toFloat() + raw.toFloat());
}

Fixed	Fixed::operator-(Fixed const& raw) const {
	
	return Fixed(this->toFloat() - raw.toFloat());
}

Fixed	Fixed::operator/(Fixed const& raw) const {
	
	return Fixed(this->toFloat() / raw.toFloat());
}

Fixed	Fixed::operator*(Fixed const& raw) const {
	
	return Fixed(this->toFloat() * raw.toFloat());
}

//increment/decrement operators
Fixed	Fixed::operator++() {
	
	_fixedPoint++;
	return (*this);
}

Fixed	Fixed::operator++(int) {

	Fixed	temp(*this);

	_fixedPoint++;
	return (temp);
}

Fixed	Fixed::operator--() {

	_fixedPoint--;
	return (*this);
}

Fixed	Fixed::operator--(int) {

	Fixed	temp(*this);

	_fixedPoint--;
	return (temp);
}

//member functions
float	Fixed::toFloat( void ) const {

	return ((float)_fixedPoint / (1 << _rawBits));
}

int	Fixed::toInt( void ) const {

	return (_fixedPoint >> _rawBits);
}

const Fixed&	Fixed::min(Fixed const& n1, Fixed const& n2) {

	return (n1 > n2 ? n2 : n1);
}

const Fixed&	Fixed::min(Fixed& n1, Fixed& n2) {

	return (n1 > n2 ? n2 : n1);
}

const Fixed&	Fixed::max(Fixed const& n1, Fixed const& n2) {

	return (n1 < n2 ? n2 : n1);
}

const Fixed&	Fixed::max(Fixed& n1, Fixed& n2) {

	return (n1 < n2 ? n2 : n1);
}

//getter/setter
int	Fixed::getRawBits( void ) const {

	return (_fixedPoint);
}

void	Fixed::setRawBits( int const raw ) {

	this->_fixedPoint = raw;
}

//extra operator
std::ostream& operator<<(std::ostream& out, const Fixed& valueFixedPoint) {
	
	out << valueFixedPoint.toFloat();
	return (out);
}
