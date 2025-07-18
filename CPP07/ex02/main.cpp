/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 10:58:13 by cereais           #+#    #+#             */
/*   Updated: 2025/07/18 08:44:49 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

void	printWord(char c) {
	std::cout << c << std::endl;
}

int main(void) {
	
	const char a = 'a';
	const char b = 'b';
	const char c = 'c';

	char arr[4] = {a, b, c};

	iter(arr, 3, &printWord);
}

