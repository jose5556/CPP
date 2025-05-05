/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 12:03:03 by cereais           #+#    #+#             */
/*   Updated: 2025/05/05 15:02:35 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y){}

Point::Point(const Point& copy) : _x(copy._x), _y(copy._y) {}

Point& Point::operator=(const Point& load) {

	(void)load;
	return (*this);
}

Point::~Point(){}

const Fixed& Point::getX( void) const {
	
	return (_x);
}

const Fixed& Point::getY( void) const {
	
	return (_y);
}
