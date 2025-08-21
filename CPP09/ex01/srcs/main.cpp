/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 23:37:02 by cereais           #+#    #+#             */
/*   Updated: 2025/08/21 11:53:44 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"

int main(int argc, char *argv[]) {
	
	if (argc != 2) {
		std::cout << "ERROR! Please make sure you introduce exactly one argument." << std::endl;
		return (1);
	}
	
	try {
		RPN r(argv[1]);
		r.printStack();
	} catch (std::exception &e) {
		std::cerr << e.what();
	}
}

