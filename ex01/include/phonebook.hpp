/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:24:10 by cereais           #+#    #+#             */
/*   Updated: 2025/04/18 22:27:17 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

class Contact
{
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string	phoneNumber;
	std::string darkestSecret;

public:
	std::string		get_firstName(void);
	std::string		get_lastName(void);
	std::string		get_nickname(void);
	std::string		get_phoneNumber(void);
	std::string		get_darkestSecret(void);
	void			set_firstName(void);
	void			set_lastName(void);
	void			set_nickname(void);
	void			set_phoneNumber(void);
	void			set_darkestSecret(void);
};

class PhoneBook
{
	public:
		Contact	contacts[8];
		int		i;
		bool	full;

		void	addNewContact(Contact *contact);
		void	showContacts();
		PhoneBook();
		~PhoneBook();
};

int 		has_digits(std::string str);
int 		has_alpha(std::string str);
void		startingPrompt();
std::string	trimStr(const std::string &str);
std::string trim(const std::string &str);

#endif