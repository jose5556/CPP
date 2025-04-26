/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 06:36:37 by cereais           #+#    #+#             */
/*   Updated: 2025/04/26 06:43:38 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
	
	std::string brain = "HI THIS IS BRAIN";
	
	std::string* stringPTR = &brain;
	
	std::string stringREF = *stringPTR;

	//memory
	std::cout << "The memory address of the brain -> "
			<< &brain << std::endl;

	std::cout << "The memory address held by stringPTR -> "
			<< &stringPTR << std::endl;

	std::cout << "The memory address held by stringREF -> "
			<< &stringREF << std::endl;

	//value

	std::cout << "The value of brain -> "
			<< brain << std::endl;

	std::cout << "The value pointed to by stringPTR -> "
			<< *stringPTR << std::endl;

	std::cout << "The value pointed to by stringREF -> "
			<< stringREF << std::endl;
}
