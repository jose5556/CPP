/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 02:52:26 by cereais           #+#    #+#             */
/*   Updated: 2025/05/01 03:08:35 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

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
	static const int	_rayBits;
};

#endif