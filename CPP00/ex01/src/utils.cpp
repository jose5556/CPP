/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 22:46:25 by cereais           #+#    #+#             */
/*   Updated: 2025/04/18 22:55:17 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

int has_digits(std::string str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (isdigit(str[i]))
			return 1;
	}
	return 0;
}

int has_alpha(std::string str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (isalpha(str[i]))
			return 1;
	}
	return 0;
}


std::string	trimStr(const std::string &str) {
	
	std::string str1;

	if (str.length() > 10) {
		str1 = str.substr(0, 10);
		str1.replace(9, 1, ".");
		return (str1);
	}
	return (str);
}

std::string trim(const std::string &str) {

std::string copy = str;

    for (size_t i = 0; i < copy.length(); i++) {
        if (copy[i] == '\t')
            copy[i] = ' ';
    }

    size_t start = 0;
    size_t end = copy.length();

    while (start < end && copy[start] == ' ')
        start++;

    if (start == end)
        return "";

    end--;
    while (end > start && copy[end] == ' ')
        end--;

    return copy.substr(start, end - start + 1);
}