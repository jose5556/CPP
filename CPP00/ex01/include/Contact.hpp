/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 16:41:31 by cereais           #+#    #+#             */
/*   Updated: 2025/05/09 16:41:57 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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