/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 02:52:26 by cereais           #+#    #+#             */
/*   Updated: 2025/05/04 12:19:19 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
	
public:

	//Orthodox Canonical Form
	Fixed( void );
	Fixed( const int value );
	Fixed( const float value );
	Fixed(Fixed const & src);
	~Fixed ( void );
	Fixed &	operator=(Fixed const& raw);

	//comparison operators:
	bool	operator==(Fixed const& raw) const;
	bool	operator!=(Fixed const& raw) const;
	bool	operator<(Fixed const& raw) const;
	bool	operator<=(Fixed const& raw) const;
	bool	operator>(Fixed const& raw) const;
	bool	operator>=(Fixed const& raw) const;

	//arithmetic operators:
	Fixed	operator+(Fixed const& raw) const;
	Fixed	operator-(Fixed const& raw) const;
	Fixed	operator*(Fixed const& raw) const;
	Fixed	operator/(Fixed const& raw) const;

	//increment/decrement operators:
	Fixed	operator++();
	Fixed	operator++(int);
	Fixed	operator--();
	Fixed	operator--(int);

	//member functions:
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	static const Fixed&	min(Fixed const& n1, Fixed const& n2);
	static const Fixed&	min(Fixed& n1, Fixed& n2);
	static const Fixed&	max(Fixed& n1, Fixed& n2);
	static const Fixed&	max(Fixed const& n1, Fixed const& n2);

private:

	int					_fixedPoint;
	static const int	_rawBits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& valueFixedPoint);
