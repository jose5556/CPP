/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:35:16 by joseoliv          #+#    #+#             */
/*   Updated: 2025/07/31 16:46:17 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bitcoins.h"

bool	verifyHeader(std::string line) {
	
	if (line == "date,exchange_rate")
		return (true);
	return (false);
}

void	mapParser(std::map<std::string, float> &dataBase, std::string line) {
	
	std::string	date;
	std::string	valueStr;
	float		valueNum;
	size_t		pos;

	pos = line.find(",");

	// If input doesn't have a correct delimiter, store entire line as an invalid date
	if (pos == std::string::npos) {
		dataBase.insert({line, -1.0});
		return ;
	}
	
	date = line.substr(0, pos);
	valueStr = line.substr(pos+1);
	valueNum = std::stof(valueStr);
	
	dataBase.insert({date, valueNum});
}