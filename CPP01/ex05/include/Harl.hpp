/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 07:21:59 by cereais           #+#    #+#             */
/*   Updated: 2025/04/27 08:23:26 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

#define DEBUG_MESSAGE "[ DEBUG ]\n love having extra bacon for my \
7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"

#define INFO_MESSAGE "[ INFO ]\nI cannot believe adding extra bacon costs more money. \
You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"

#define WARNING_MESSAGE "[ WARNING ]\nI think I deserve to have some extra bacon for free. \
I've been coming for years, whereas you started working here just last month."

#define ERROR_MESSAGE "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now."

class Harl {
	public:
		Harl(void);
		~Harl(void);
		void complain( std::string level );
	
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

typedef void (Harl::*HarlFunc)(void);

#endif