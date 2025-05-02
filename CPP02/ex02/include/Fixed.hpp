/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 02:52:26 by cereais           #+#    #+#             */
/*   Updated: 2025/05/02 18:59:31 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
	
public:

	Fixed( void );
	Fixed( const int value );
	Fixed( const float value );

	Fixed(Fixed const & src);

	~Fixed ( void );

	Fixed &	operator=(Fixed const & raw);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	
private:

	int					_fixedPoint;
	static const int	_rawBits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& valueFixedPoint);