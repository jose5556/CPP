/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 07:26:09 by cereais           #+#    #+#             */
/*   Updated: 2025/04/27 09:00:01 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl(void) {
}

Harl::~Harl(void) {
}

void	Harl::debug(void) {
	std::cout << DEBUG_MESSAGE << "\n" << std::endl;
}

void	Harl::info(void) {
	std::cout << INFO_MESSAGE << "\n" << std::endl;
}

void	Harl::warning(void) {
	std::cout << WARNING_MESSAGE << "\n" << std::endl;
}

void	Harl::error(void) {
	std::cout << ERROR_MESSAGE << "\n" << std::endl;
}

void Harl::complain( std::string level ) {

	std::string arr[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	HarlFunc funcs[] = {
		&Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
	};

	for (int i = 0; i < 4; i++) {
        if (arr[i] == level) {
            (this->*funcs[i])();
            return;
        }
    }
}
