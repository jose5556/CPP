/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Date.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:26:30 by cereais           #+#    #+#             */
/*   Updated: 2025/08/01 23:11:23 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Date {

public:
	Date();
	Date(std::string d, std::string m, std::string y);
	~Date();
	Date(const Date& copy);
	Date& operator=(const Date& src);

	void	validateDate();

private:
	std::string	_day;
	std::string	_month;
	std::string	_year;
	
};