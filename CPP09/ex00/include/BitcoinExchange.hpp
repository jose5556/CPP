/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:34:49 by joseoliv          #+#    #+#             */
/*   Updated: 2025/08/02 20:06:12 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Data.hpp"
#include <map>
#include <algorithm>
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>

class BitcoinExchange : public Data {
	
public:
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& copy);
	BitcoinExchange& operator=(const BitcoinExchange& src);

	void	dataBaseParser(std::string line);
	void	compareInputDB(const Data &data);

private:
	std::map<std::string, float> _dataBase;
};
