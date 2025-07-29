/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:35:16 by joseoliv          #+#    #+#             */
/*   Updated: 2025/07/29 19:21:27 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bitcoins.h"

bool	verifyHeader(std::string line) {
	
	if (line == "date | value")
		return (true);
	return (false);
}

void	mapParser(std::map<std::string, float> &imputMap, std::string line) {
	
}