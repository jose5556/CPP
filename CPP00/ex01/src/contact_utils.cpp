/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_utils.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 19:56:06 by cereais           #+#    #+#             */
/*   Updated: 2025/04/18 22:55:12 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

std::string	Contact::get_firstName(void) {
	return (firstName);
}

std::string	Contact::get_lastName(void) {
	return (lastName);
}

std::string	Contact::get_nickname(void) {
	return (nickname);
}

std::string	Contact::get_phoneNumber(void) {
	return (phoneNumber);
}

std::string	Contact::get_darkestSecret(void) {
	return (darkestSecret);
}

void	    Contact::set_firstName() {

	std::string	input;

	std::cout << "Please insert your first name: ";
	while (getline(std::cin, input) && (input.empty() || has_digits(input))) {
		std::cout << "Invalid FIRST NAME. Please insert a valid name: ";
	}
	firstName = trim(input);
}

void		Contact::set_lastName() {

	std::string	input;

	std::cout << "Please insert your last name: ";
	while (getline(std::cin, input) && (input.empty() || has_digits(input))) {
		std::cout << "Invalid LAST NAME. Please insert a valid name: ";
	}
	lastName = trim(input);
}
void		Contact::set_nickname() {

	std::string	input;

	std::cout << "Please insert your nickname: ";
	while (getline(std::cin, input) && input.empty()) {
		std::cout << "Invalid NICKNAME. Please insert a valid name: ";
	}
	nickname = trim(input);
}

void		Contact::set_phoneNumber() {

	std::cout << "Please insert your phone number: ";
	while (getline(std::cin, phoneNumber)) {
		if (std::cin.eof() == 1 || (!phoneNumber.empty() && !has_alpha(phoneNumber)))
			break;
		std::cout << "Invalid PHONE NUMBER. Please insert a valid phone number: ";
	}
}

void		Contact::set_darkestSecret() {

	std::string	input;

	std::cout << "Please wisper your darkest secreat: ";
	while (getline(std::cin, input) && input.empty()) {
		std::cout << "Invalid SECRET. Please wisper your darkest secret again: ";
	}
	darkestSecret = trim(input);
}
