/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputVerification.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 02:33:57 by cereais           #+#    #+#             */
/*   Updated: 2025/04/27 02:34:33 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/betterSed.h"

bool	inputVerification(int argc, char **argv) {
	
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