/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 12:03:19 by cereais           #+#    #+#             */
/*   Updated: 2025/05/13 15:38:17 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed s1 = c.getY() - a.getY();
	Fixed s2 = c.getX() - a.getX();
	Fixed s3 = b.getY() - a.getY();
	Fixed s4 = point.getY() - a.getY();

	Fixed numerator = a.getX() * s1 + s4 * s2 - point.getX() * s1;
	Fixed denominator = s3 * s2 - (b.getX() - a.getX()) * s1;

	if (denominator == Fixed(0))
		return false;

	Fixed w1 = numerator / denominator;
	Fixed w2 = (s4 - w1 * s3) / s1;

	return (w1 > Fixed(0) && w2 > Fixed(0) && (w1 + w2) < Fixed(1));
}

/*

a, b, c -> are the vertices of our beloved triangle;

point -> The point to check;

Return -> True if the point is inside the triangle. False otherwise.
Thus, if the point is a vertex or on an edge, it will return False

formula -> P = a + w1 (b - a) + w2 (c - a)

*/
