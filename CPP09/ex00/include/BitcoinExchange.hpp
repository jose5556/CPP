/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:34:49 by joseoliv          #+#    #+#             */
/*   Updated: 2025/07/31 17:25:49 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <algorithm>
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

class BitcoinExchange {
	
public:
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& copy);
	BitcoinExchange& operator=(const BitcoinExchange& src);

	void	dataBaseParser(std::string line);

private:
	std::map<std::string, float> _dataBase;
};
