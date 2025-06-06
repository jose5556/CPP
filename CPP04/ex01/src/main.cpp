/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:14:46 by cereais           #+#    #+#             */
/*   Updated: 2025/05/23 17:00:28 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

int main() {

	int		size = 10;
	Animal*	animals[10];

	std::cout << "\n--- Creating animals ---\n" << std::endl;

	// Fill first half with Dogs
	for (int i = 0; i < size / 2; ++i)
		animals[i] = new Dog();

	// Fill second half with Cats
	for (int i = size / 2; i < size; ++i)
		animals[i] = new Cat();

	std::cout << "\n--- Deleting animals ---\n" << std::endl;
		
	for (int i = 0; i < size; ++i)
		delete animals[i];
		
	std::cout << "\n--- Deep copy test ---\n" << std::endl;

	Dog dogo;
	{
		std::cout << "\n--- inside scope ---\n" << std::endl;
		Dog copy = dogo; // Calls copy constructor
	}
	std::cout << "\n--- after scope ---\n" << std::endl;
	
	return 0;
}
