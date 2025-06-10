/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:05:03 by cereais           #+#    #+#             */
/*   Updated: 2025/06/10 04:27:39 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"
#include "../include/converter.h"

int main(int argc, char *argv[]) {
	
	if (argc != 2) {
        std::cerr << ERRORARGUMENTS << std::endl;
        return (1);
    }
    std::string str = argv[1];
    ScalarConverter::convert(str);
}
