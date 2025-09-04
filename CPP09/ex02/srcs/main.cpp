/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 23:37:02 by cereais           #+#    #+#             */
/*   Updated: 2025/09/04 18:40:52 by cereais          ###   ########.fr       */
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

		PmergeMe<std::vector<int> > me(argv + 1);

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return (1);
	}

	try {
		
		PmergeMe<std::deque<int> > me1(argv + 1);

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}
