/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 11:12:48 by cereais           #+#    #+#             */
/*   Updated: 2025/06/28 11:18:08 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template <typename T>
void	swap(T &a, T &b) {
	
	T c = a;

	a = b;
	b = c;
}

template <typename T>
T	min(T a, T b) {

	return (a >= b ? b : a);
}

template <typename T>
T	max(T a, T b) {

	return (a <= b ? b : a);
}