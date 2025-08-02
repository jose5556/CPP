/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:26:30 by cereais           #+#    #+#             */
/*   Updated: 2025/08/02 20:20:21 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cstdlib>

class Data {

public:
	Data();
	Data(std::string line);
	~Data();
	Data(const Data& copy);
	Data& operator=(const Data& src);

	void	validateDate(int y, int m, int d);
	
	class FileError : public std::exception {
		const char* what() const throw();
	};
	class HeaderError : public std::exception {
		const char* what() const throw();
	};
	class RangeNumError : public std::exception {
		const char* what() const throw();
	};
	class NegNumError : public std::exception {
		const char* what() const throw();
	};
	class InputNumError : public std::exception {
		const char* what() const throw();
	};

	std::string	getDate() const;
	int			getValue() const;

private:
	std::string	_date;
	float		_value;
};