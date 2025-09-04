/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 23:37:02 by cereais           #+#    #+#             */
/*   Updated: 2025/09/04 18:31:07 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"

template <typename C>
static void printContainer(const C& container, bool isBefore) {

	if (isBefore)
		std::cout << "Before: " << std::endl;
	else
		std::cout << "After: " << std::endl;

    typedef typename C::const_iterator it;
	
    for (it iter = container.begin(); iter != container.end(); ++iter) {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char *argv[]) {

	if (argc == 1) {
		std::cerr << "ERROR! Please insert at least one argument.";
		return (1);
	}
	system("clear");
	try {

		PmergeMe<std::vector<int> > me(argv + 1);
		printContainer(me._chain, true);

	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		
		PmergeMe<std::deque<int> > me1(argv + 1);
		printContainer(me1._chain, true);

	} catch (std::exception &e) {
		return (1);
	}
}
