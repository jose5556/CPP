/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 10:58:13 by cereais           #+#    #+#             */
/*   Updated: 2025/08/04 22:14:34 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"
#include "../include/Data.hpp"

int main(int argc, char *argv[]) {
	
	std::string	line;

	system("clear");
	if (argc != 2) {
		std::cout << "Error: could not open file." << std::endl;
		return (1);
	}
	
	std::ifstream file(argv[1]);
	if (!file.is_open()) {
		std::cout << "Error: could not open file." << std::endl;
		exit(EXIT_FAILURE);
	}
	
	getline(file, line);
	if (!(line == "date | value")) {
		std::cout << "Error: inpossible configuration of => " << std::endl;
		exit(EXIT_FAILURE);
	}

	while (getline(file, line)) {
		
		try {
			Data data(line);
			BitcoinExchange bit;
			bit.compareInputDB(data);
		}
		catch (const std::exception &e) {
			std::cerr << e.what();
		}
	}	

}
