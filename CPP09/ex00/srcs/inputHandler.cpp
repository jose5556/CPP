/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputHandler.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:39:00 by joseoliv          #+#    #+#             */
/*   Updated: 2025/08/01 23:14:45 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bitcoins.h"

/*
func with the only porpose of reading the input.txt file
*/
void	readInput(char *input) {
	
	std::string	line;

	std::ifstream file(input);
	if (!file.is_open())
		argumentError();
	
	getline(file, line);
	if (!(line == "date | value"))
		headerError(line);

	while (getline(file, line)) {
		
		validateLine(line);
	}
}

/*
responsible for parse the line in 2 (key, value)
and call the respective funcs to validate the input
*/
void	validateLine(std::string line) {
	
	std::size_t	pos;
	std::string	parsedDate;
	Date		date;	

	pos = line.find(" | ");
	if (pos == std::string::npos) {
		inputNumError(line);
		return ;
	}

	parsedDate = line.substr(0, pos);
	date = handleDate(parsedDate);
	date.validateDate();
}

/*
Function with the porpose of parsing the date, while returning 
a class Date
*/
Date	handleDate(const std::string &line) {

	std::string	day, month, year;
	int			begin = 0;
	int			i = 0;
	
	if (line.length() != 10 || line[4] != '-' || line[7] != '-')
		inputNumError(line);
	
	year = line.substr(0, 4);   // YYYY
	month = line.substr(5, 2);  // MM
	day = line.substr(8, 2);	// DD

	return (Date(day, month, year));
}
