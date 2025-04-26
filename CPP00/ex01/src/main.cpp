/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:23:36 by cereais           #+#    #+#             */
/*   Updated: 2025/04/18 22:55:15 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

void	startingPrompt() {
	system("clear");
	std::cout << "\nProgram initiated. Please insert one of the following commands:" << std::endl;
	std::cout << "ADD       |       SEARCH      |       EXIT\n" << std::endl;
}

PhoneBook::PhoneBook() {
	i = 0;
	full = false;
}

PhoneBook::~PhoneBook()
{
}

int main(void)
{
	PhoneBook	book;
	std::string	user_input;

	startingPrompt();
	while (getline(std::cin, user_input)) {
		if (user_input == "ADD") {
			system("clear");
			book.addNewContact(&(book.contacts[book.i]));
		} else if (user_input == "SEARCH") {
			system("clear");
			book.showContacts();
			break;
		} else if (user_input == "EXIT") {
			break;
		} else {
			system("clear");
			startingPrompt();
		}
	}
	system("clear");
}
