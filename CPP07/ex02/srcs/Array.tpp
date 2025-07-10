/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 03:27:10 by cereais           #+#    #+#             */
/*   Updated: 2025/07/09 03:31:38 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

template <class T>
Array<T>::Array() {

	_array = new T[0];
	_size = 0;
}

template <class T>
Array<T>::Array() {

	_size = n;
_array = new T[n];
}
