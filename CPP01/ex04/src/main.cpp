/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 00:20:15 by cereais           #+#    #+#             */
/*   Updated: 2025/04/27 01:43:17 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Arguments.hpp"

bool	parseArguments(int argc, char **argv, Arguments *arguments) {
	
	std::string	fileName;
	std::string	s1;
	std::string	s2;

	if (argc != 3) {
		std::cout << "ERROR! Wrong number of arguments." << std::endl;
		return (false);
	}

	fileName = argv[0];
	s1 = argv[1];
	s2 = argv[2];

	if (fileName.empty() || s1.empty() || s2.empty()) {
		
		std::cout << "ERROR! At least one of the arguments is empty." << std::endl;
		return (false);
	}

	arguments->setFileName(fileName);
	arguments->setS1(s1);
	arguments->setS2(s2);
	return (true);
}

int	main(int argc, char *argv[]) {

	Arguments	arguments;
	std::string	buffer;
	
	if (!parseArguments(argc - 1, argv + 1, &arguments))
		return (1);
		
	std::ifstream file(argv[1]);
	while (std::getline(file, buffer)) {
		std::cout << buffer;
	}
	file.close();
}
