/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manipulationStrings.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 02:32:58 by cereais           #+#    #+#             */
/*   Updated: 2025/05/13 16:44:58 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/betterSed.h"

std::string	replaceTypeFile(char *file) {
	
	std::string delimiter = ".";
	std::string	fileName = file;

	if (fileName.find(".replace"))
		return (fileName);
	fileName = fileName.substr(0, fileName.find(delimiter));
	fileName = fileName.append(".replace");

	return (fileName);
}

std::string	replaceS1S2(std::string buffer, std::string s1, std::string s2) {
	
	size_t	pos = buffer.find(s1);
	
	while (pos != std::string::npos) {

		buffer = buffer.substr(0, pos) + s2 + buffer.substr(pos + s1.length());
		pos = buffer.find(s1, pos + s2.length());
	}
	return (buffer);
}
