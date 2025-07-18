/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 03:27:10 by cereais           #+#    #+#             */
/*   Updated: 2025/07/18 09:12:59 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

template <class T>
Array<T>::Array() {

	_array = new T[0];
	_size = 0;
}

template <class T>
Array<T>::Array(unsigned int n) {

	_size = n;
	_array = new T[n]();
}

template <class T>
Array<T>::Array(const Array& copy) {

	_size = copy._size;
	_array = new T[_size];
	for (int i = 0; i < _size; ++i)
		_array[i] = copy._array[i];
}

template <class T>
Array<T>::~Array() {

	delete[] _array;
}

template <class T>
Array<T>& Array<T>::operator=(const Array& src) {
	
	if (this != &src) {

		delete[] _array;
		_size = src._size;
		_array = new T[_size];
		for (int i = 0; i < _size; ++i) {

			_array[i] = src._array[i];
		}
	}
	return *this;
}

template<typename T>
T& Array<T>::operator[]( unsigned int i ) {
    if (i >= this->size())
        throw OverflowIndexException();
    return (array[i]);
}

template <class T>
int	Array<T>::size() {
	
	return (_size);
}

template<typename T>
const char* Array<T>::OverflowIndexException::what() const throw() {
    return ("Index is out of bounds");
}