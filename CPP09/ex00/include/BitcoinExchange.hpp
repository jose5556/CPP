/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:34:49 by joseoliv          #+#    #+#             */
/*   Updated: 2025/07/29 19:20:33 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>
#include <string>
#include <iostream>
#include <fstream>

class BitcoinExchange {
	
public:
	BitcoinExchange(char *input);
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& copy);
	BitcoinExchange& operator=(const BitcoinExchange& src);

private:
	BitcoinExchange();
	std::map<std::string, float> _inputMap;
};
