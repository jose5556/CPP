/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 03:50:35 by joseoliv          #+#    #+#             */
/*   Updated: 2025/06/10 04:24:51 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"
#include "../include/converter.h"

bool	isInt(std::string argument) {
	
	int		result = 0;
	int		iIncrement = 0;

	if (argument[0] == '-' || argument[0] == '+')
		iIncrement++;
	for (size_t i = iIncrement; i < argument.length(); i++) {

		if (argument[i] >= '0' && argument[i] <= '9') {
			result = result * 10 + (argument[i] - '0');
		} else
			return (false);
	}
	return (true);
}
