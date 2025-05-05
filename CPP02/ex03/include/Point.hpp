/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 12:02:46 by cereais           #+#    #+#             */
/*   Updated: 2025/05/05 14:14:34 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point {
	
public:

	Point();
	Point(const float fP1, const float fP2);
	Point(const Point& copy);
	Point& operator=(const Point& load);
	~Point();
	const Fixed& getX( void ) const;
	const Fixed& getY( void ) const;

private:
		
	const Fixed	_x;
	const Fixed	_y;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);