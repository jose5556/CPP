/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 23:37:02 by cereais           #+#    #+#             */
/*   Updated: 2025/08/29 19:10:18 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

static void	printVector(std::vector<int> vec) {
	
	std::vector<int>::iterator	it;

	for (it = vec.begin(); it != vec.end(); it++) {
		std::cout << *it << " - ";
	}
	std::cout << std::endl;
}

static void	printDeque(std::deque<int> dec) {
	
	std::deque<int>::iterator	it;

	for (it = dec.begin(); it != dec.end(); it++) {
		std::cout << *it << " - ";
	}
	std::cout << std::endl;
}

int main(int argc, char *argv[]) {

	if (argc == 1) {
		std::cerr << "ERROR! Please insert at least one argument.";
		return (1);
	}

	try {
		
		PmergeMe<std::vector<int> > me(argv);
		printVector(me._chain);

		PmergeMe<std::deque<int> > me1(argv);
		printDeque(me1._chain);

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
