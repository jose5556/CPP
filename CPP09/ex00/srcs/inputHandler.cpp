/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputHandler.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:39:00 by joseoliv          #+#    #+#             */
/*   Updated: 2025/07/31 19:18:39 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/bitcoins.h"

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

void	validateLine(std::string line) {
	
	std::string::iterator	it;
	std::size_t				pos;
	std::string				date;

	pos = line.find(" | ");
	if (pos == std::string::npos) {
		inputNumError(line);
		return ;
	}

	date = line.substr(0, pos);
	handleDate(date);

	//pos = std::distance(line.begin(), )
}

/*
In this func, i represents the index of the date.
If i == 4 it means the parsed line is the year;
If i == 7 it means the parsed line is the month;
else	  it means the parsed line is the day;
*/
static bool	validateDate(std::string line, int i) {
	
	int					date = std::stoi(line);
	
	if (i == 4) {
		if (date > 2025 || date < 0 || line.length() != 4)
			 return (false);
	} else if ( i == 7) {
		static std::string	monthDay = line;
	} else {
		
	}
	return (true);
}

void	handleDate(std::string line) {
	
	std::string				date;
	std::string				dateParsed;
	int						begin = 0;
	int						i = 0;
	
	if (line.length() != 10)
		inputNumError(line);
	
	for (std::string::iterator it = line.begin(); it != line.end(); it++) {
		
		if (*it == '-') {
			dateParsed = line.substr(begin, i);
			if (!validateDate(dateParsed, i))
				inputNumError(line);
			date += dateParsed;
			begin = 0;
		}
		i++;
	}
}