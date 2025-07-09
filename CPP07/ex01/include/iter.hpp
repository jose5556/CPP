/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 11:12:48 by cereais           #+#    #+#             */
/*   Updated: 2025/07/09 03:27:47 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cctype>

template <typename T, typename I, typename F>
void	iter(T a[], I b, void(*f)(F)) {
	
	I len = 0;

	while (len < b) {
		f(a[len]);
		len++;
	}
}
