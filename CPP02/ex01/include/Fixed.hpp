/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 02:52:26 by cereais           #+#    #+#             */
/*   Updated: 2025/05/02 00:54:18 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
	
public:

	Fixed( void );							//default constructor
	Fixed (Fixed const & src);				//copy constructor
	Fixed &	operator=(Fixed const & raw);	//copy assignment operator overload
	~Fixed ( void );						//destructer

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	
private:

	int					_fixedPoint;
	static const int	_rawBits = 8;
};

#endif