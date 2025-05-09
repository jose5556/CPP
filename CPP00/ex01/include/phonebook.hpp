/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:24:10 by cereais           #+#    #+#             */
/*   Updated: 2025/05/09 16:42:09 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

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