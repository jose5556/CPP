/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 10:58:13 by cereais           #+#    #+#             */
/*   Updated: 2025/07/31 17:46:14 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"
#include "../include/bitcoins.h"

int main(int argc, char *argv[]) {
	
	if (argc != 2) {
		return (argumentError());
	}
	
	BitcoinExchange	bit;
	readInput(argv[1]);
		

}
