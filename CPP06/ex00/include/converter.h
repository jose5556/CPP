/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joseoliv <joseoliv@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 03:17:32 by joseoliv          #+#    #+#             */
/*   Updated: 2025/06/10 06:15:14 by joseoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <limits>

#define ERRORARGUMENTS "ERROR! Wrong number of arguments"
#define NOARGUMENTMATCH "ERROR! Invalid argument type"

enum Type {

	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	ERROR
};

bool	isInt(const std::string &argument);
bool	isFloat(const std::string &argument);
bool	isDouble(const std::string &argument);

void	charTransform(const std::string &argument);
void	intTransform(const std::string &argument);
void	floatTransform(const std::string &argument);
void	doubleTransform(const std::string &argument);
