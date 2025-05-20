/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:48:33 by cereais           #+#    #+#             */
/*   Updated: 2025/05/20 17:49:00 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain() {
	
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain() {
	
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& copy) {
	
	*this = copy;
}

Brain& Brain::operator=(const Brain& src) {

	if (&src != this) {
			
		*this->ideas = *src.ideas;
	}
	return (*this);
}
