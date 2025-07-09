/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 11:12:48 by cereais           #+#    #+#             */
/*   Updated: 2025/07/09 03:27:54 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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