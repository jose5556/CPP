/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 00:20:15 by cereais           #+#    #+#             */
/*   Updated: 2025/05/13 16:43:41 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/betterSed.h"

int	main(int argc, char *argv[]) {

	std::string	buffer;
	std::string	line;
	std::string	fileNameReplace;
	
	if (!inputVerification(argc - 1, argv + 1))
		return (1);
	
	std::ifstream file(argv[1]);
	if (!file.is_open()) {
		std::cout << "ERROR! Could not open input file." << std::endl;
		return (1);
	}

	fileNameReplace = replaceTypeFile(argv[1]);
	
	std::ofstream outfile(fileNameReplace.c_str());
	if (!outfile.is_open()) {
        std::cout << "ERROR! Could not create output file." << std::endl;
        file.close();
        return (1);
    }
	while (std::getline(file, line)) {
		
		buffer = replaceS1S2(line, argv[2], argv[3]);
		outfile << buffer << std::endl;
	}
	file.close();
    outfile.close();
	return (0);
}
