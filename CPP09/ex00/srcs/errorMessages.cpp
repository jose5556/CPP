/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorMessages.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:52:43 by joseoliv          #+#    #+#             */
/*   Updated: 2025/07/29 18:44:22 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bitcoins.h"

int	argumentError() {
	
	std::cout << FILE_ERROR << std::endl;
	exit(EXIT_FAILURE);
}

int	headerError(std::string line) {
	
	std::cout << INPUT_HEADER_ERROR << line << std::endl;
	exit(EXIT_FAILURE);
}

void	RangeNumError() {
	
	std::cout << RANGE_NUM_ERROR << std::endl;
}

void	negNUmError() {
	
	std::cout << NEGATIVE_NUM_ERROR << std::endl;
}

void	inputNumError(std::string input) {
	
	std::cout << INPUT_ERROR << input << std::endl;
}