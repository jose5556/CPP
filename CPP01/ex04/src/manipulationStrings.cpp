/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manipulationStrings.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 02:32:58 by cereais           #+#    #+#             */
/*   Updated: 2025/04/27 02:33:13 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/betterSed.h"

std::string	replaceTypeFile(char *file) {
	
	std::string delimiter = ".";
	std::string	fileName = file;

	fileName = fileName.substr(0, fileName.find(delimiter));
	fileName = fileName.append(".replace");

	return (fileName);
}