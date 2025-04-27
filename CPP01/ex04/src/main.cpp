/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 00:20:15 by cereais           #+#    #+#             */
/*   Updated: 2025/04/27 02:25:46 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Arguments.hpp"

bool	parseArguments(int argc, char **argv) {
	
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
	return (true);
}

std::string	replaceTypeFile(char *file) {
	
	std::string delimiter = ".";
	std::string	fileName = file;

	fileName = fileName.substr(0, fileName.find(delimiter));
	fileName = fileName.append(".replace");

	return (fileName);
}

int	main(int argc, char *argv[]) {

	std::string	buffer;
	std::string	fileNameReplace;
	
	if (!parseArguments(argc - 1, argv + 1))
		return (1);
		
	fileNameReplace = replaceTypeFile(argv[1]);
	
	std::ifstream file(argv[1]);
	if (!file.is_open()) {
		std::cout << "ERROR! Could not open input file." << std::endl;
		return (1);
	}
	
	std::ofstream outfile(fileNameReplace.c_str());
	if (!outfile.is_open()) {
        std::cout << "ERROR! Could not create output file." << std::endl;
        file.close();
        return (1);
    }

	while (std::getline(file, buffer)) {
		outfile << buffer << std::endl;
	}
	file.close();
    outfile.close();
	return (0);
}
