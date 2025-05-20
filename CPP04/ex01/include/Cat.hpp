/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:12:55 by joseoliv          #+#    #+#             */
/*   Updated: 2025/05/20 17:32:27 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	
	public:
		Cat();
		Cat(const Cat& copy);
		Cat& operator=(const Cat& other);
		~Cat();

		void makeSound() const;
		std::string getType() const;
	
	private:
		Brain* _brain;
};
