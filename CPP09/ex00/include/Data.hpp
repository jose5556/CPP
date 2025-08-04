/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cereais <cereais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 22:26:30 by cereais           #+#    #+#             */
/*   Updated: 2025/08/04 22:43:02 by cereais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <climits>

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

	public:
		InputNumError(const std::string& input)
			: message("Error: bad input => " + input + "\n") {}
		virtual ~InputNumError() throw() {}
		virtual const char* what() const throw();

	private:
		std::string message;
	};

	std::string	getDate() const;
	float		getValue() const;

private:
	std::string	_date;
	float		_value;
};