/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 01:06:26 by joseoliv          #+#    #+#             */
/*   Updated: 2025/06/11 01:37:26 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

Serializer::Serializer() {}

Serializer::~Serializer() {}

Serializer::Serializer(const Serializer& copy) {
	
	(void)copy;
}

Serializer& Serializer::operator=(const Serializer& src) {

	(void)src;
	return (*this);
}

uintptr_t	Serializer::serialize(Data* ptr) {
	
	if (!ptr)
		return (0);
	return (reinterpret_cast<uintptr_t>(ptr)); 		
}

Data*	Serializer::deserialize(uintptr_t raw) {
	
	if (!raw)
    	return (NULL);
	return( reinterpret_cast<Data*>(raw));
}
