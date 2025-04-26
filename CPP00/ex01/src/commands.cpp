/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 19:01:58 by cereais           #+#    #+#             */
/*   Updated: 2025/04/18 22:55:07 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/phonebook.hpp"

void	PhoneBook::addNewContact(Contact *contact)
{
	contact->set_firstName();
	contact->set_lastName();
	contact->set_nickname();
	contact->set_phoneNumber();
	contact->set_darkestSecret();
	if (++i == 8)
	{
		i = 0;
		full = true;
	}
	startingPrompt();
}

void	PhoneBook::showContacts() {

	int			j = 0;
	std::string	line;
	int			action;

	std::cout << "INDEX      ";
	std::cout << "|";
	std::cout << "FIRST NAME";
	std::cout << "|";
	std::cout << "LAST NAME ";
	std::cout << "|";
	std::cout << "NICKNAME  ";
	std::cout << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;

	if (i < 8 && !full) {
		while (j < i) {
			std::cout<< "|          |          |          |          |" << std::endl;
			std::cout<< "|";
			std::cout<< std::right << std::setw(10) << j + 1;
			std::cout<< "|";
			std::cout<< std::right << std::setw(10) << trimStr(contacts[j].get_firstName());
			std::cout<< "|";
			std::cout<< std::right << std::setw(10) << trimStr(contacts[j].get_lastName());
			std::cout<< "|";
			std::cout<<  std::right << std::setw(10) << trimStr(contacts[j].get_nickname());
			std::cout<< "|" << std::endl;
			std::cout<< "|__________|__________|__________|__________|" << std::endl;
			j++;
		}
	} else {
		while (j < 8)
		{
			std::cout<< "|          |          |          |          |" << std::endl;
			std::cout<< "|";
			std::cout<< std::right << std::setw(10) << j + 1;
			std::cout<< "|";
			std::cout<< std::right << std::setw(10) << trimStr(contacts[j].get_firstName());
			std::cout<< "|";
			std::cout<< std::right << std::setw(10) << trimStr(contacts[j].get_lastName());
			std::cout<< "|";
			std::cout<<  std::right << std::setw(10) << trimStr(contacts[j].get_nickname());
			std::cout<< "|" << std::endl;
			std::cout<< "|__________|__________|__________|__________|" << std::endl;
			j++;
		}
	}
	std::cout << std::endl;

	if (std::cin.eof() == 1)
		return;
	while(std::getline(std::cin, line))
	{
		if (line == "EXIT")
			break;
		if (line.empty())
			return;
		action = std::atoi(line.c_str());
		if (action <= 0 || action >= 9)
			std::cout << "Index unnavailable"<< std::endl;
		else if (((action > 0 && action < 9) && full) || ((action > 0 && action < i + 1) && !full))
		{
			std::cout << "INDEX : " << action << std::endl;
			std::cout << "NUMBER : " << contacts[action - 1].get_phoneNumber() << std::endl;
			std::cout << "FIRST_NAME : " << contacts[action - 1].get_firstName() << std::endl;
			std::cout << "LAST_NAME : " << contacts[action - 1].get_lastName() << std::endl;
			std::cout << "NICKNAME : " << contacts[action - 1].get_nickname() << std::endl;
			std::cout << "DARKEST_SECRET : " << contacts[action - 1].get_darkestSecret()<< std::endl;
		}
		else
			std::cout << "Index unnavailable"<< std::endl;
	}
}