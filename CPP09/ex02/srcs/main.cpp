/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 23:37:02 by cereais           #+#    #+#             */
/*   Updated: 2025/08/25 21:55:23 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

int main(int argc, char *argv[]) {
	

	if (argc == 1) {
		std::cout << "ERROR! Please insert at least one argument.";
		return (1);
	} else if (argc > 2) {
		std::cout << "ERROR! Please do not exceed the argument limit.";
		return (1);
	}

	
}

