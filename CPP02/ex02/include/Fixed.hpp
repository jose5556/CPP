/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 02:52:26 by cereais           #+#    #+#             */
/*   Updated: 2025/05/04 11:02:25 by cereais          ###   ########.fr       */
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
	bool	operator==(Fixed const& raw);
	bool	operator!=(Fixed const& raw);
	bool	operator<(Fixed const& raw);
	bool	operator<=(Fixed const& raw);
	bool	operator>(Fixed const& raw);
	bool	operator>=(Fixed const& raw);

	//arithmetic operators:
	Fixed	operator+(Fixed const& raw) const;
	Fixed &	operator-(Fixed const& raw) const;
	Fixed &	operator*(Fixed const& raw) const;
	Fixed &	operator/(Fixed const& raw) const;
	
	//increment/decrement operators:
	
	
	//member functions:
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	static const void*	min(void* n1, int* n2);
	static const void*	min(int* const n1, int* const n2);
	static const void*	max(int* n1, int* n2);
	static const void*	max(int* const n1, int* const n2);
	
private:

	int					_fixedPoint;
	static const int	_rawBits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& valueFixedPoint);
