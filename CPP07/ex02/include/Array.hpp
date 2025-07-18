/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 11:12:48 by cereais           #+#    #+#             */
/*   Updated: 2025/07/18 08:37:35 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cctype>

template <class T>
class Array {

public:
    Array();
	Array(unsigned int n);
	Array(const Array& copy);
	Array& operator=(const Array& src);
	
	int	size();

class outOfBounds : public std::exception {
	virtual const char* what() const throw();
};
	
private:
    T*	_array;
    int	_size;
};
