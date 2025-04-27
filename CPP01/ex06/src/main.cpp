/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 08:41:42 by cereais           #+#    #+#             */
/*   Updated: 2025/04/27 09:07:20 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int main(int argc, char *argv[]) {
	
	if (argc != 2) {
		std::cout << "ERROR! Wrong number of arguments mate." << std::endl;
		return (1);
	}
	
	Harl		harl;
	std::string	level = argv[1];
	
	harldFilter(level, harl);
	
}

void	harldFilter(std::string	str, Harl harl) {
	
	int	index = -1;
	std::string arr[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++) {
		if (arr[i] == str) {
			index = i;
			break ;
		}
	}

	switch (index) {

	case DEBUG:
		harl.complain("DEBUG");
		harl.complain("INFO");
		harl.complain("WARNING");
		harl.complain("ERROR");
		break ;

	case INFO:
		harl.complain("INFO");
		harl.complain("WARNING");
		harl.complain("ERROR");
		break ;

	case WARNING:
		harl.complain("WARNING");
		harl.complain("ERROR");
		break ;
		
	case ERROR:
		harl.complain("ERROR");
		break ;

	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break ;
	}
}