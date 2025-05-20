/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:12:53 by joseoliv          #+#    #+#             */
/*   Updated: 2025/05/20 17:31:50 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	
	public:
		Dog();
		Dog(const Dog& copy);
		Dog& operator=(const Dog& other);
		~Dog();

		void makeSound() const;
		std::string getType() const;

	private:
		Brain* _brain;
};
