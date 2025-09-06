/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 23:37:02 by cereais           #+#    #+#             */
/*   Updated: 2025/09/06 20:32:02 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

int main(int argc, char *argv[]) {

	if (argc == 1) {
		std::cerr << "ERROR! Please insert at least one argument.";
		return (1);
	}
	system("clear");
	try {

		std::cout << "vector" << std::endl;
		PmergeMe<std::vector<int> > me(argv + 1);
		me.mergeSort();

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return (1);
	}

	try {
		
		std::cout << "deque" << std::endl;
		PmergeMe<std::deque<int> > me1(argv + 1);
		me1.mergeSort();

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}
