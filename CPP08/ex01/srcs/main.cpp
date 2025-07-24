/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 10:58:13 by cereais           #+#    #+#             */
/*   Updated: 2025/07/24 16:19:44 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"
#include <cstdlib>
#include <ctime>

/* int main(void) {
	
	Span sp = Span(10);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::vector<int> example;
	example.push_back(90);
	example.push_back(92);
	example.push_back(94);
	example.push_back(96);

	sp.addRangeNumber(example.begin(), example.end());

	std::cout << sp.shortestSpan() << std::endl; //2
	std::cout << sp.longestSpan() << std::endl;  //14

	return 0;
} */

int main() {

    std::srand(std::time(NULL));
    Span sp(10000);
    //Span sp(9999);

    for (int i = 0; i <= 10000; ++i) {
        int value = std::rand();
        try {
            sp.addNumber(value);
        } catch (std::exception &e) {
            std::cerr << "Error adding number: " << e.what() << std::endl;
        }
    }

    try {
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Span error: " << e.what() << std::endl;
    }
    return 0;
}