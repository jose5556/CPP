/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 04:36:18 by joseoliv          #+#    #+#             */
/*   Updated: 2025/06/10 05:19:53 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/converter.h"

bool	isInt(const std::string &argument) {
	
	long	result = 0;
	int		iIncrement = 0;

	if (argument[0] == '-' || argument[0] == '+')
		iIncrement++;
	for (size_t i = iIncrement; i < argument.length(); i++) {

		if (isdigit(argument[i]))
			result = result * 10 + (argument[i] - '0');
		else
			return (false);
	}
	if (result > std::numeric_limits<int>::max() || result < std::numeric_limits<int>::min())
		return (false);
	return (true);
}

bool	isFloat(const std::string &argument) {
	
	float	result = 0.0f;
	size_t	i = 0;

	if (argument[0] == '-' || argument[0] == '+')
		i++;
	while (i < argument.length()) {

		if (isdigit(argument[i]))
			result = result * 10 + (argument[i] - '0');
		else
			break ;
		i++;
	}
	if (argument[i++] == '.') {

		while (i < argument.length()) {

			if (isdigit(argument[i]))
				result = result * 10 + (argument[i] - '0');
			else
				break ;
			i++;
			if (argument[i] == 'f' && ++i == argument.length()) {
				if (result > std::numeric_limits<float>::max() || result < std::numeric_limits<float>::min())
					return (false);
				return (true);
			}
		}
	}
	return (false);
}

bool	isDouble(const std::string &argument) {
	
	double	result = 0.0;
	size_t	i = 0;

	if (argument[0] == '-' || argument[0] == '+')
		i++;
	while (i < argument.length()) {

		if (isdigit(argument[i]))
			result = result * 10 + (argument[i] - '0');
		else
			break ;
		i++;
	}
	if (argument[i++] == '.') {

		while (i < argument.length()) {

			if (isdigit(argument[i]))
				result = result * 10 + (argument[i] - '0');
			else
				return (false) ;
			i++;
		}
	} else
		return (false);
	if (result > std::numeric_limits<float>::max() || result < std::numeric_limits<float>::min())
		return (false);
	return (true);
}
